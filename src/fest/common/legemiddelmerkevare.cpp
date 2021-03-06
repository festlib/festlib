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

#include "fest/common/legemiddelmerkevare.h"

namespace festlib {
  namespace fest {
    namespace common {

      LegemiddelMerkevare::LegemiddelMerkevare(types::Id const& Id, std::string_view Varenavn,
              std::string_view LegemiddelFormLang, types::Cs const& Smak)
        : Id{Id}, Varenavn{Varenavn}, LegemiddelFormLang{LegemiddelFormLang},
        Smak{Smak}
      {}

      LegemiddelMerkevare::LegemiddelMerkevare(types::Id const& Id, std::string_view Varenavn,
              std::string_view LegemiddelFormLang)
        : Id{Id}, Varenavn{Varenavn}, LegemiddelFormLang{LegemiddelFormLang},
        Smak{}
      {}

    } // namespace
  } // namespace
} // namespace

