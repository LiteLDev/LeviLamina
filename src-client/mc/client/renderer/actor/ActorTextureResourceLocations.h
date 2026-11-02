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
    MCNAPI ActorTextureResourceLocations(::ActorTextureResourceLocations const&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations&&);

    MCNAPI ::ActorTextureResourceLocations& operator=(::ActorTextureResourceLocations const&);

    MCNAPI ~ActorTextureResourceLocations();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorTextureResourceLocations const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
