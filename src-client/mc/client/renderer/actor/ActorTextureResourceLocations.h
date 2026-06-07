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
    ActorTextureResourceLocations();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorTextureResourceLocations(::ActorTextureResourceLocations&&);

    MCNAPI ActorTextureResourceLocations(::ActorTextureResourceLocations const&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations&&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations const&);

    MCNAPI ~ActorTextureResourceLocations();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorTextureResourceLocations&&);

    MCNAPI void* $ctor(::ActorTextureResourceLocations const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
