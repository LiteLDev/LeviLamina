#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

class ExpiringTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mExpireAtTick;
    ::ll::TypedStorage<2, 2, ushort> mTicksUntilExpire;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpiringTick();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpiringTick(::Tick currentTick, ushort ticksUntilExpire);

    MCFOLD ::Tick getExpireAtTick() const;

    MCAPI float getNormalizedElapsedTime(::Tick const& currentTick) const;

    MCAPI bool isActive(::Tick currentTick) const;

    MCAPI bool isExpired(::Tick currentTick) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Tick currentTick, ushort ticksUntilExpire);
    // NOLINTEND
};
