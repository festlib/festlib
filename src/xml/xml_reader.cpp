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

#include "xml/xml_reader.h"

namespace festlib {
  namespace xml {

    Xml_reader::Xml_reader(std::string_view xml_file)
      : xml_file{xml_file}, doc(), result{false} //, container()
    {
    }

    // handles loading the xml file into memory
    bool Xml_reader::load_file()
    {
      if(!result) {
        // .load_file() returns a pugi::xml_result, the pugixml
        // docs says that this is equal to a built-in bool
        result = doc.load_file(xml_file.c_str());
      }
      return result;
    }

    // reload the file, the xml_document destroys the
    // existing document tree and tries to load new tree.
    bool Xml_reader::reload_file()
    {
      result = false;
      return load_file();
    }

    void Xml_reader::print() const
    {
      using namespace pugi;

      xml_node merker = doc.child("FEST").child("KatLegemiddelMerkevare");

      for(xml_node tool : merker.children("OppfLegemiddelMerkevare")) {
        for(xml_attribute attr : tool.attributes()) {
          std::cout << attr.value() << '\n';
        }
      }
    }


  } // namespace
} // namespace

