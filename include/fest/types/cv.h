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

#ifndef FESTLIB_TYPES_CV_H
#define FESTLIB_TYPES_CV_H

#include "oid.h"
#include <string>
#include <string_view>

namespace festlib {
  namespace types {

    // Coded Value
    // CV is a specific datatype for use in message exhange withing FEST
    // V, DN and S is mandatory
    struct Cv {
      explicit Cv() = default;
      explicit Cv(std::string_view V, std::string_view DN,
          types::Oid const& S)
        : V{V}, DN{DN}, S{S}
      {}
      explicit Cv(std::string_view V, std::string_view DN,
          types::Oid const& S, std::string_view OT)
        : V{V}, DN{DN}, S{S}, OT{OT}
      {}

      std::string V;
      std::string DN;
      types::Oid S;
      std::string OT;
    };

  } // namespace
} // namespace

#endif
