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
    // member functions
    // NOLINTBEGIN
    MCAPI EduSharedUriResource();

    MCAPI EduSharedUriResource(::EduSharedUriResource&&);

    MCAPI explicit EduSharedUriResource(::CompoundTag const& tag);

    MCAPI ~EduSharedUriResource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::EduSharedUriResource fromTag(::CompoundTag const& tag);

    MCAPI static ::std::unique_ptr<::CompoundTag> toTag(::EduSharedUriResource const& resource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::EduSharedUriResource&&);

    MCAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
