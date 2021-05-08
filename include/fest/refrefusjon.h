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

#ifndef FESTLIB_REFREFUSJON_H
#define FESTLIB_REFREFUSJON_H

#include "types/idref.h"
#include "types/date.h"

namespace festlib {
  namespace fest {

    // RefRefusjon is a part of the pure abstract class Legemiddel
    // Have a referenace ID to the welfare system to a other catalog in
    // FEST
    class RefRefusjon {
      public:
        explicit RefRefusjon();
        explicit RefRefusjon(types::Idref RefRefusjonsgruppe, types::Date GyldigFraDato);
        explicit RefRefusjon(types::Idref RefRefusjonsgruppe, types::Date GyldigFraDato,
            types::Date GyldigTilDato, types::Date ForskrivesTilDato, types::Date UtleveresTilDato);
      private:
        types::Idref RefRefusjonsgruppe;
        types::Date GyldigFraDato;
        // these is optional in the xml
        types::Date GyldigTilDato;
        types::Date ForskrivesTilDato;
        types::Date UtleveresTilDato;
    };

  } // namespace
} // namespace

#endif
