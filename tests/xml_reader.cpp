#include <catch2/catch_all.hpp>
#include "xml/xml_reader.h"

TEST_CASE("Xml_reader", "Loading file")
{
  using namespace festlib::xml;

  Xml_reader xml{"fest251_inst.xml"};
  bool result = xml.load_file();

  REQUIRE(result == true);
}
