#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct PackInstanceId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::PackIdVersion> mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>    mSubpackName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstanceId(::PackInstanceId&&);

    MCAPI PackInstanceId(::PackIdVersion const& packId, ::std::string const& subpackName);

    MCAPI bool operator==(::PackInstanceId const& rhs) const;

    MCAPI ~PackInstanceId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackInstanceId&&);

    MCAPI void* $ctor(::PackIdVersion const& packId, ::std::string const& subpackName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
