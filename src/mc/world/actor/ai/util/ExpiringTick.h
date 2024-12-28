#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

class ExpiringTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1031ad;
    ::ll::UntypedStorage<2, 2> mUnke085f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpiringTick& operator=(ExpiringTick const&);
    ExpiringTick(ExpiringTick const&);
    ExpiringTick();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpiringTick(::Tick currentTick, ushort ticksUntilExpire);

    MCAPI ::Tick getExpireAtTick() const;

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
