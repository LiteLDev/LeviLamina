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

public:
    // prevent constructor by default
    ResourceLocationPair& operator=(ResourceLocationPair const&);
    ResourceLocationPair(ResourceLocationPair const&);
    ResourceLocationPair();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::ResourceLocation const& location, ::PackIdVersion const& packId, int packPosition);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
