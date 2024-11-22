#define BOOST_TEST_MODULE test_version

#include "lib.h"
#include <boost/test/unit_test.hpp>
#include <cstring>  // Для std::strlen

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    const char* ver = version(); // Получаем версию
    BOOST_CHECK(ver != nullptr);  // Проверяем, что указатель не нулевой
    BOOST_CHECK(std::strlen(ver) > 0);  // Проверяем, что строка не пустая
}

BOOST_AUTO_TEST_SUITE_END()
