#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

namespace PlayerCapabilities {

struct IPlayerData {
public:
    // prevent constructor by default
    IPlayerData& operator=(IPlayerData const&);
    IPlayerData(IPlayerData const&);
    IPlayerData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerData();

    // vIndex: 1
    virtual bool isAbilityEnabled(::AbilitiesIndex) const = 0;

    // vIndex: 2
    virtual bool isTeacher() const = 0;

    // vIndex: 3
    virtual bool isOperator() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayerCapabilities
