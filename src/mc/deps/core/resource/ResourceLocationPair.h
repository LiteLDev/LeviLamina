#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct PackIdVersion;
// clang-format on

class ResourceLocationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk264a6d;
    ::ll::UntypedStorage<8, 48> mUnk2ae1ce;
    ::ll::UntypedStorage<4, 4>  mUnk9d3d38;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ResourceLocationPair& operator=(ResourceLocationPair const&);
    ResourceLocationPair(ResourceLocationPair const&);
    ResourceLocationPair();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLocationPair(ResourceLocationPair const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ResourceLocationPair();

    MCNAPI ResourceLocationPair(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);

    MCNAPI ::ResourceLocationPair& operator=(::ResourceLocationPair&&);

    MCNAPI ::ResourceLocationPair& operator=(::ResourceLocationPair const&);

    MCNAPI ~ResourceLocationPair();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
