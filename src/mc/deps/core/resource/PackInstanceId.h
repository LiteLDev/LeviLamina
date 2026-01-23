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

public:
    // prevent constructor by default
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstanceId(::PackInstanceId&&);

    MCFOLD_C ::PackInstanceId& operator=(::PackInstanceId const&);

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
