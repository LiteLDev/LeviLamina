#pragma once
#include "llapi/Global.h"
#include <string>

LIAPI std::string CalcMD5(const std::string& str);
LIAPI std::string CalcSHA1(const std::string& str);