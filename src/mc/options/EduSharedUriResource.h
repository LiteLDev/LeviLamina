#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct EduSharedUriResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> linkUri;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    // NOLINTEND

public:
    // prevent constructor by default
    EduSharedUriResource(EduSharedUriResource const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduSharedUriResource(::EduSharedUriResource&&);

    MCNAPI ::EduSharedUriResource& operator=(::EduSharedUriResource&&);

    MCNAPI ::EduSharedUriResource& operator=(::EduSharedUriResource const&);

    MCNAPI ~EduSharedUriResource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EduSharedUriResource fromTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EduSharedUriResource&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
