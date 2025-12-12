#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

namespace PlayerCapabilities {

struct IPlayerData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerData() = default;

    virtual bool isAbilityEnabled(::AbilitiesIndex) const = 0;

    virtual bool isTeacher() const = 0;

    virtual bool isOperator() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayerCapabilities
