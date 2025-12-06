#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTextureResourceLocations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkf61888;
    ::ll::UntypedStorage<8, 64> mUnk2a78cb;
    ::ll::UntypedStorage<8, 64> mUnkb78c88;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTextureResourceLocations& operator=(ActorTextureResourceLocations const&);
    ActorTextureResourceLocations(ActorTextureResourceLocations const&);
    ActorTextureResourceLocations();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorTextureResourceLocations();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
