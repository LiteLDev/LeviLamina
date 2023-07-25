#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct IPlayerData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCAPABILITIES_IPLAYERDATA
public:
    IPlayerData& operator=(IPlayerData const&) = delete;
    IPlayerData(IPlayerData const&)            = delete;
    IPlayerData()                              = delete;
#endif

public:
};

}; // namespace PlayerCapabilities
