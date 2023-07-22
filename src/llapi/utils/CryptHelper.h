#pragma once
#include "llapi/Global.h"
#include <string>

LLAPI std::string CalcMD5(const std::string& str);
LLAPI std::string CalcSHA1(const std::string& str);