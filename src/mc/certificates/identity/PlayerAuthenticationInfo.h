#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAuthenticationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd29476;
    ::ll::UntypedStorage<8, 32> mUnkf7edc1;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthenticationInfo& operator=(PlayerAuthenticationInfo const&);
    PlayerAuthenticationInfo(PlayerAuthenticationInfo const&);
    PlayerAuthenticationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerAuthenticationInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
