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

// TODO: need to make enum class for this. It is specified in the implementation
// that the duration is for 1 year is P1Y etc. Could not find where it is
// specified, so will do this later and makes a struct for now.

#ifndef FESTLIB_TYPES_DURATION_H
#define FESTLIB_TYPES_DURATION_H

#include <string>
#include <string_view>

namespace festlib {
  namespace fest {
    namespace types {

      struct Duration {
        explicit Duration(std::string_view time)
          : time{time}
        {}

        std::string time;
      };

    } // namespace
  } // namespace
} // namespace

#endif
