#pragma once
#include <string>
#include <Global.h>
namespace PlayerDB {
LIAPI std::string getXuid(std::string name);
LIAPI std::string getUUID(std::string name);
LIAPI std::string fromXuid(std::string xuid);
LIAPI std::string fromUUID(std::string uuid);
} // namespace PlayerDB