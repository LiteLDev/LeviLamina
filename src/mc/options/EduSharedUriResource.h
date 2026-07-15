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
    EduSharedUriResource& operator=(EduSharedUriResource const&);
    EduSharedUriResource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduSharedUriResource(::EduSharedUriResource const&);

#ifdef LL_PLAT_C
    MCAPI bool operator!=(::EduSharedUriResource const& rhs) const;
#endif

    MCFOLD ::EduSharedUriResource& operator=(::EduSharedUriResource&&);

    MCAPI ~EduSharedUriResource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::EduSharedUriResource>
    create(::std::unordered_map<::std::string, ::std::string> const& values);
#endif

    MCAPI static ::EduSharedUriResource fromTag(::CompoundTag const& tag);

    MCAPI static ::std::unique_ptr<::CompoundTag> toTag(::EduSharedUriResource const& resource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EduSharedUriResource const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
