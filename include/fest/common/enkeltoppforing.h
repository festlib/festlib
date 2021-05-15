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

#ifndef FESTLIB_ENKELTOPPFORING_H
#define FESTLIB_ENKELTOPPFORING_H

#include "fest/types/datetime.h"
#include "fest/types/cs.h"
#include <string>
#include <string_view>

namespace festlib {
  namespace fest {
    namespace common {

      // Enkeltoppføring is the top entry. It says if the entry is valid or not
      // and what time it got valid. It also includes a unique Id.
      class Enkeltoppforing {
        public:
          explicit Enkeltoppforing(std::string_view Id,
              types::DateTime const& Tidspunkt, types::Cs const& Status);
        private:
          std::string Id;
          types::DateTime Tidspunkt;
          types::Cs Status;
      };

    } // namespace
  } // namespace
} // namespace

#endif
