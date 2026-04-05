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
    ::ll::UntypedStorage<8, 32> mUnk88d93b;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ServicePack& operator=(ServicePack const&);
    ServicePack(ServicePack const&);
    ServicePack();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ServicePack();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServicePack(::ServicePack const&);

    MCNAPI ServicePack(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);

    MCNAPI ::ServicePack& operator=(::ServicePack const&);

    MCNAPI ~ServicePack();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ServicePack const&);

    MCNAPI void* $ctor(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);
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
