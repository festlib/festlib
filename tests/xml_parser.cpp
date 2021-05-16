#include <catch2/catch_all.hpp>
#include "xml/xml_parser.h"

TEST_CASE("Xml parser load file", "[Xml_parser.constructor")
{
  using namespace festlib::xml;
  Xml_parser parse{"fest251_inst.xml"};

  REQUIRE(parse.get_status() == true);
}

