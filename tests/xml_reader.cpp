#include <catch2/catch_all.hpp>
#include "xml/xml_reader.h"


festlib::xml::Xml_reader xml{"fest251_inst.xml"};

TEST_CASE("Xml reader load file", "[Xml_reader.load_file()]")
{
  using namespace festlib::xml;

  bool result = xml.load_file();

  REQUIRE(result == true);
}

TEST_CASE("Xml reader reload file", "[Xml_reader.reload_file()]")
{
  using namespace festlib::xml;

  bool result = xml.reload_file();

  REQUIRE(result == true);
}
