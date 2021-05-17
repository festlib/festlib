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

// TODO: missing Hjelpestoffer (?)

#ifndef FESTLIB_CATALOG_OPPFLEGEMIDDELMERKEVARE_H
#define FESTLIB_CATALOG_OPPFLEGEMIDDELMERKEVARE_H

#include "fest/common/legemiddel.h"
#include "fest/common/enkeltoppforing.h"
#include "fest/common/administreringlegemiddel.h"
#include "fest/common/legemiddelmerkevare.h"
#include "fest/common/sortertvirkestoffmedstyrke.h"
#include "fest/common/produktinfo.h"
#include "fest/common/reseptgyldighet.h"
#include "fest/common/preparatomtaleavsnitt.h"
#include "fest/types/cs.h"
#include "fest/types/cv.h"
#include "fest/types/idref.h"
#include <string_view>

namespace festlib {
  namespace fest {
    namespace catalog {

      // main component in the catalog KatLegemiddelMerkevare
      // LegemiddelMerkevare is used in precribing drugs without
      // a certain package size
      class OppfLegemiddelMerkevare : public common::Legemiddel {
        public:
          explicit OppfLegemiddelMerkevare(types::Cv const& Atc,
              std::string_view NavnFormStyrke, types::Cs const& Reseptgruppe,
              types::Cv const& LegemiddelformKort,
              types::Idref const& RefVilkar, types::Cs const& Preparattype,
              types::Cs const& TypeSoknadSlv, bool Opioidsoknad,
              types::Cv const& SvartTrekant, common::Enkeltoppforing const& Enkeltoppforing,
              common::AdministreringLegemiddel const& AdministreringLegemiddel,
              common::LegemiddelMerkevare const& LegemiddelMerkevare,
              common::SortertVirkestoffMedStyrke const& SortertVirkestoffMedStyrke,
              common::ProduktInfo const& ProduktInfo, common::Reseptgyldighet const& Reseptgyldighet,
              common::Preparatomtaleavsnitt const& Preparatomtaleavsnitt);
          ~OppfLegemiddelMerkevare() = default;
        private:
          common::Enkeltoppforing Enkeltoppforing;
          common::AdministreringLegemiddel AdministreringLegemiddel;
          common::LegemiddelMerkevare LegemiddelMerkevare;
          common::SortertVirkestoffMedStyrke SortertVirkestoffMedStyrke;
          common::ProduktInfo ProduktInfo;
          common::Reseptgyldighet Reseptgyldighet;
          common::Preparatomtaleavsnitt Preparatomtaleavsnitt;
      };

      //using LegemiddelMerkevare = OppfLegemiddelMerkevare;

    } // namespace
  } // namespace
} // namespace

#endif
