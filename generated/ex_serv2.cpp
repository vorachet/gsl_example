#include <iostream>

#include "serv2.h"

int main(int argc, char const *argv[])
{

    std::string s2op1_var0 = "";
    std::string s2op1_var1 = "";
    std::string s2op2_var0 = "";

    bool serv2_s2op1_result = serv2::s2op1 (
        s2op1_var0,
        s2op1_var1
    );
    bool serv2_s2op2_result = serv2::s2op2 (
        s2op2_var0
    );
    bool serv2_s2op3_result = serv2::s2op3 (
    );
    return 0;
}
