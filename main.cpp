#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "spdlog/spdlog.h"

unsigned int Factorial(unsigned int number)
{
    return number <= 1 ? number : Factorial(number - 1) * number;
}


TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
}


int main(int ac, char** av)
{
    int result = Catch::Session().run(ac, av);

    auto console = spdlog::stdout_logger_mt("console");
    console->info("Welcome to spdlog!") ;

    return result;
}
