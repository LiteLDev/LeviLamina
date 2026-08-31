#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

struct ActorTextureResourceLocations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                  mColorLocation;
    ::ll::TypedStorage<8, 64, ::std::optional<::ResourceLocation>> mMERSLocation;
    ::ll::TypedStorage<8, 64, ::std::optional<::ResourceLocation>> mNormalLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorTextureResourceLocations();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorTextureResourceLocations(::ActorTextureResourceLocations const&);

    MCFOLD ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations&&);

    MCFOLD ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations const&);

    MCAPI ~ActorTextureResourceLocations();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorTextureResourceLocations const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
