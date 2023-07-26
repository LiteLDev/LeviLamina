#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct IPlayerData {

public:
    // prevent constructor by default
    IPlayerData& operator=(IPlayerData const&) = delete;
    IPlayerData(IPlayerData const&)            = delete;
    IPlayerData()                              = delete;
};

}; // namespace PlayerCapabilities
