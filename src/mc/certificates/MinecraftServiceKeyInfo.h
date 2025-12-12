#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftServiceKeyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk624369;
    ::ll::UntypedStorage<8, 32> mUnkb112d7;
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
