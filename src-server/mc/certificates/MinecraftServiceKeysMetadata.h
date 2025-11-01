#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftServiceKeysMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8a026a;
    ::ll::UntypedStorage<8, 32> mUnk37814e;
    ::ll::UntypedStorage<8, 8>  mUnkdc0a6b;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeysMetadata& operator=(MinecraftServiceKeysMetadata const&);
    MinecraftServiceKeysMetadata(MinecraftServiceKeysMetadata const&);
    MinecraftServiceKeysMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeysMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
