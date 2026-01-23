#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct ServicePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkee4d44;
    ::ll::UntypedStorage<8, 32> mUnkc598fa;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ServicePack(::ServicePack const&);

    MCNAPI_C ServicePack(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);

    MCNAPI_C ::ServicePack& operator=(::ServicePack const&);

    MCNAPI_C ~ServicePack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ServicePack const&);

    MCNAPI_C void* $ctor(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
