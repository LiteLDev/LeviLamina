#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

struct PackInstanceId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::PackIdVersion> mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>   mSubpackName;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const&);
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstanceId(::PackInstanceId&&);

#ifdef LL_PLAT_C
    MCFOLD ::PackInstanceId& operator=(::PackInstanceId const&);
#endif

    MCAPI ~PackInstanceId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackInstanceId&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
