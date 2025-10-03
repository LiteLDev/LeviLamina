#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageSensorTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk98b52d;
    ::ll::UntypedStorage<8, 104> mUnkc14b2b;
    ::ll::UntypedStorage<4, 4>   mUnkdbeae6;
    ::ll::UntypedStorage<4, 4>   mUnk4eb8fa;
    ::ll::UntypedStorage<4, 4>   mUnk1666d9;
    ::ll::UntypedStorage<1, 1>   mUnke242c2;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorTrigger(DamageSensorTrigger const&);
    DamageSensorTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DamageSensorTrigger& operator=(::DamageSensorTrigger const&);

    MCNAPI void setCause(::std::string const& causeName);

    MCNAPI void setDealsDamage(::std::string const& value);

    MCNAPI ~DamageSensorTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
