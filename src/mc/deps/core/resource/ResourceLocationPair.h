#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"

class ResourceLocationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mResourceLocation;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>    mPackId;
    ::ll::TypedStorage<4, 4, int>                 mPackPosition;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLocationPair(ResourceLocationPair const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ResourceLocationPair();

    MCAPI ResourceLocationPair(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);

    MCAPI ::ResourceLocationPair& operator=(::ResourceLocationPair&&);

    MCAPI ::ResourceLocationPair& operator=(::ResourceLocationPair const&);

    MCAPI ~ResourceLocationPair();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
