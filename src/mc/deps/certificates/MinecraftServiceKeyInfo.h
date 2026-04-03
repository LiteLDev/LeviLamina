#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftServiceKeyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb14665;
    ::ll::UntypedStorage<8, 32> mUnk8f5a62;
    ::ll::UntypedStorage<8, 8>  mUnkdf1e25;
    ::ll::UntypedStorage<1, 1>  mUnk3f3d2a;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyInfo& operator=(MinecraftServiceKeyInfo const&);
    MinecraftServiceKeyInfo(MinecraftServiceKeyInfo const&);
    MinecraftServiceKeyInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeyInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
