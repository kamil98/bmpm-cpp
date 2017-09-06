#include "cpp/php2cpp.h"


#ifndef RULESGREEKLATIN_H
#define RULESGREEKLATIN_H

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
rulesGreeklatin = {
    {"au", "", "$", "af"},
    {"au", "", "[kpstfh]", "af"},
    {"au", "", "", "av"},
    {"eu", "", "$", "ef"},
    {"eu", "", "[kpstfh]", "ef"},
    {"eu", "", "", "ev"},
    {"ou", "", "", "u"},
    {"gge", "[aeiouy]", "", "(nje|je)"},
    // aggelopoulos
    {"ggi", "[aeiouy]", "[aou]", "(nj|j)"},
    {"ggi", "[aeiouy]", "", "(ni|i)"},
    {"gge", "", "", "je"},
    {"ggi", "", "", "i"},
    {"gg", "[aeiouy]", "", "(ng|g)"},
    {"gg", "", "", "g"},
    {"gk", "^", "", "g"},
    {"gke", "[aeiouy]", "", "(nje|je)"},
    {"gki", "[aeiouy]", "", "(ni|i)"},
    {"gke", "", "", "je"},
    {"gki", "", "", "i"},
    {"gk", "[aeiouy]", "", "(ng|g)"},
    {"gk", "", "", "g"},
    {"nghi", "", "[aouy]", "Nj"},
    {"nghi", "", "", "(Ngi|Ni)"},
    {"nghe", "", "[aouy]", "Nj"},
    {"nghe", "", "", "(Nje|Nge)"},
    {"ghi", "", "[aouy]", "j"},
    {"ghi", "", "", "(gi|i)"},
    {"ghe", "", "[aouy]", "j"},
    {"ghe", "", "", "(je|ge)"},
    {"ngh", "", "", "Ng"},
    {"gh", "", "", "g"},
    {"ngi", "", "[aouy]", "Nj"},
    {"ngi", "", "", "(Ngi|Ni)"},
    {"nge", "", "[aouy]", "Nj"},
    {"nge", "", "", "(Nje|Nge)"},
    {"gi", "", "[aouy]", "j"},
    {"gi", "", "", "(gi|i)"},
    // what about Pantazis = Pantagis ???
    {"ge", "", "[aouy]", "j"},
    {"ge", "", "", "(je|ge)"},
    {"ng", "", "", "Ng"},
    // fragakis = fraggakis = frangakis; angel = agel = aggel
    {"i", "", "[aeou]", "j"},
    {"i", "[aeou]", "", "j"},
    {"y", "", "[aeou]", "j"},
    {"y", "[aeou]", "", "j"},
    {"yi", "", "[aeou]", "j"},
    {"yi", "", "", "i"},
    {"ch", "", "", "x"},
    {"kh", "", "", "x"},
    {"dh", "", "", "d"},
    // actually as "th" in English "that"
    {"dj", "", "", "dZ"},
    // Turkish words
    {"ph", "", "", "f"},
    {"th", "", "", "t"},
    {"kz", "", "", "gz"},
    {"tz", "", "", "dz"},
    {"s", "", "[bgdmnr]", "z"},
    {"mb", "", "", "(mb|b)"},
    // Liberis = Limperis = Limberis
    {"mp", "^", "", "b"},
    {"mp", "[aeiouy]", "", "mp"},
    {"mp", "", "", "b"},
    {"nt", "^", "", "d"},
    {"nt", "[aeiouy]", "", "(nd|nt)"},
    // Greek "nd"
    {"nt", "", "", "(nt|d)"},
    // Greek "d" after any consonant
    {"á", "", "", "a"},
    {"é", "", "", "e"},
    {"í", "", "", "i"},
    {"ó", "", "", "o"},
    {"óu", "", "", "u"},
    {"ú", "", "", "u"},
    {"ý", "", "", "(i|Q|u)"},
    // [ü]
    {"a", "", "", "a"},
    {"b", "", "", "(b|v)"},
    // beta: modern "v", old "b"
    {"c", "", "", "k"},
    {"d", "", "", "d"},
    // modern like "th" in English "them", old "d"
    {"e", "", "", "e"},
    {"f", "", "", "f"},
    {"g", "", "", "g"},
    {"h", "", "", "x"},
    {"i", "", "", "i"},
    {"j", "", "", "(j|Z)"},
    // Panajotti = Panaiotti; Louijos = Louizos; Pantajis = Pantazis = Pantagis
    {"k", "", "", "k"},
    {"l", "", "", "l"},
    {"m", "", "", "m"},
    {"n", "", "", "n"},
    {"ο", "", "", "o"},
    {"p", "", "", "p"},
    {"q", "", "", "k"},
    // foreign
    {"r", "", "", "r"},
    {"s", "", "", "s"},
    {"t", "", "", "t"},
    {"u", "", "", "u"},
    {"v", "", "", "v"},
    {"w", "", "", "v"},
    // foreign
    {"x", "", "", "ks"},
    {"y", "", "", "(i|Q|u)"},
    // [ü]
    {"z", "", "", "z"},
    {"rulesgreeklatin"},
};
rules[LanguageIndex("greeklatin", languages)] = rulesGreeklatin;

#else
#endif