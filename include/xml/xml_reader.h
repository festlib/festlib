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

#ifndef FESTLIB_XML_READER_H
#define FESTLIB_XML_READER_H

//#include "container.h"
#include "fest/fest.h"
#include <string>
#include <string_view>
#include <pugixml.hpp>

namespace festlib {
  namespace xml {

    // handles reading the whole xml document into memory by using
    // pugi::xml_document.
    class Xml_reader {
      public:
        explicit Xml_reader(std::string_view xml_file);
        Xml_reader(Xml_reader const&) = delete; // pugi::xml_document is a non-copyable
                                                // document, so should this class be.
        Xml_reader operator=(Xml_reader const&) = delete;
        bool load_file();
        bool reload_file();
      private:
        std::string xml_file;
        pugi::xml_document doc;
        bool result;
        //FestContainer container;
    };

  } // namespace
} // namespace

#endif
