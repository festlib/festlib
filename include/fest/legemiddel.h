//
//                              MIT License
//         Copyright (c) 2021 Fredrik Fjeldvær fredrik(a)ffj.no
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

// names are chosen in Norwegian because the xml FEST file
// uses Norwegian nomenclature

// INCOMPLETE FILE

#ifndef FESTLIB_LEGEMIDDEL_H
#define FESTLIB_LEGEMIDDEL_H

#include "types/cv.h"
#include "types/cs.h"
#include "types/idref.h"
#include "refrefusjon.h"

namespace festlib {
  namespace fest {

    // Pure abstract class.
    // Its a common class for
    // the four catalogs in FEST.
    // The name Legemiddel is chosen and mean Drugs
    // its chosen as name because its the name in the implementation
    // for FEST and its the nmaed used in the xml file
    class Legemiddel {
      public:
        explicit Legemiddel(types::Cv const& Atc, std::string_view NavnFormStyrke,
            types::Cs const& Reseptgruppe, types::Cv const& LegemiddelformKort,
            types::Idref const& RefVilkar, types::Cs const& Preparattype,
            types::Cs const& TypeSoknadSlv, bool Opioidsoknad,
            types::Cv const& SvartTrekant);
        virtual ~Legemiddel() = 0; // pure abstract class
      private:
        // names in Norwegian as they are named liked this in the xml file
        types::Cv Atc;
        std::string NavnFormStyrke; // Name Form Potency
        types::Cs Reseptgruppe; // precription group, typically, A, B, C or F.
        types::Cv LegemiddelformKort; // Short pharmaceutical form naming. Example: Tablett.
        types::Idref RefVilkar; // Referance to welfare.
        types::Cs Preparattype; // What can of drug. For example 'Legemiddel'.
        types::Cs TypeSoknadSlv; // Apply to SLV/Norwegian Drug Agency or not
        bool Opioidsoknad = false; // Opioid application. False is default because theres only a few of them
        types::Cv SvartTrekant; // Drugs with special attention
      private:
        // TODO: make a class Administreringlegemiddel and Legemiddelpakningbyttegruppe.
        // and add them to here.
        RefRefusjon Refusjon;
    };

  } // namespace
} // namespace

#endif
