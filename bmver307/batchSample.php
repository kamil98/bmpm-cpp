<?php

  /*
   *
   * Copyright Alexander Beider and Stephen P. Morse, 2008
   *
   * This file is part of the Beider-Morse Phonetic Matching (BMPM) System. 

   * BMPM is free software: you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation, either version 3 of the License, or
   * (at your option) any later version.
   *
   * BMPM is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   *
   * You should have received a copy of the GNU General Public License
   * along with BMPM.  If not, see <http://www.gnu.org/licenses/>.
   *
   */

  $type = $argv[3]; // ash, sep, or gen
  if ($type == "") {
    $type = "gen"; // generic
  }

  include "phoneticutils.php";
  include "phoneticengine.php";
  include "$type/approxcommon.php";
  include "$type/exactcommon.php";
  include "$type/lang.php";
  include "dmsoundex.php";

  for ($i=0; $i<count($languages); $i++) {
    include "$type/rules" . $languages[$i] . ".php";
    include "$type/exact" . $languages[$i] . ".php";
    include "$type/approx" . $languages[$i] . ".php";
  }

  $inputFileName = $argv[1];
  $outputFileName = $argv[2];

  // open input and output files
  
  if (!file_exists($outputFileName)) {
    if (!($handle = fopen($outputFileName,"x"))) {
      echo "error creating and opening ".$outputFileName;
      exit;
    }
  } else {
    if (!($handle = fopen($outputFileName,"w"))) {
      echo "error opening ".$outputFileName;
      exit;
    }
  }

  // process each line in the input file
  
  $lines = file($inputFileName);
  for ($ln=0; $ln<count($lines); $ln++){
if (($ln+1)%100 == 0) echo ($ln+1) . " of " . count($lines) . "<br>";
    $comps = explode("\t", $lines[$ln]);
    $name = $comps[0];
    $languageName = $comps[1];
    // comps[2] and comps[3] aren't yet supported

    $languageCode = LanguageCode($languageName, $languages);
    if ($languageName == "auto" || $languageName == "") {
      $languageCode2 = Language_UTF8($name, $languageRules);
    } else {
      $languageCode2 = $languageCode;
    }

    $result2 = Phonetic_UTF8($name, $rules[LanguageIndexFromCode($languageCode2, $languages)], $approxCommon,
                             $approx[LanguageIndexFromCode($languageCode2, $languages)], $languageCode2);
    $numbers2 = PhoneticNumbers($result2);

    $soundex = soundx_name($name);
    fputs($handle, "$name\t$numbers2\t$soundex\n");
  }
  echo "Done<br>";
?> 
