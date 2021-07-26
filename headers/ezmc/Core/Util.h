#pragma once

#include "../dll.h"
#include <cstdint>
#include <string>

namespace Util {

MCAPI std::string const EMPTY_GUID;

class HashString {
public:
    std::string   str;
    std::uint64_t hash;
};

} // namespace Util