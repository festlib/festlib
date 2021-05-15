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

#include "fest/common/administreringlegemiddel.h"

namespace festlib {
  namespace fest {
    namespace common {

      // TODO: use std::move insted of const& ?
      AdministreringLegemiddel::AdministreringLegemiddel(bool Blandingsveske, types::Cv const& Administrasjonsvei,
              types::Cs const& KanApnes, types::Cs const& KanKnuses, types::Cs const& Bolus,
              types::Cs const& InjeksjonshastighetBolus, types::Cs const& Deling,
              types::Cs const& EnhetDosering, std::vector<types::Cv> const& Kortdose,
              std::vector<types::Cv> const& ForhandsregelInntak,
              std::vector<types::Cv> const& BruksomradeEtikett)
        : Blandingsveske{Blandingsveske}, Administrasjonsvei{Administrasjonsvei},
        KanApnes{KanApnes}, KanKnuses{KanKnuses}, Bolus{Bolus}, InjeksjonshastighetBolus{InjeksjonshastighetBolus},
        Deling{Deling}, EnhetDosering{EnhetDosering}, Kortdose{Kortdose},
        ForhandsregelInntak{ForhandsregelInntak}, BruksomradeEtikett{BruksomradeEtikett}
      {}

    } // namespace
  } // namespace
} // namespace

