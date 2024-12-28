#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageSensorTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk98b52d;
    ::ll::UntypedStorage<8, 104> mUnkc14b2b;
    ::ll::UntypedStorage<4, 4>   mUnkbe2f23;
    ::ll::UntypedStorage<4, 4>   mUnk4eb8fa;
    ::ll::UntypedStorage<4, 4>   mUnk1666d9;
    ::ll::UntypedStorage<1, 1>   mUnka9aa7a;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorTrigger& operator=(DamageSensorTrigger const&);
    DamageSensorTrigger(DamageSensorTrigger const&);
    DamageSensorTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCause(::std::string const& causeName);

    MCAPI void setDealsDamage(::std::string const& value);

    MCAPI ~DamageSensorTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
