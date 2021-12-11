#pragma once
#include <Global.h>
#include <string>
namespace PlayerInfo {
LIAPI bool insert(std::string name, std::string xuid, std::string uuid);
LIAPI std::string getXuid(std::string name);
LIAPI std::string getUUID(std::string name);
LIAPI std::string fromXuid(std::string xuid);
LIAPI std::string fromUUID(std::string uuid);
} // namespace PlayerDB