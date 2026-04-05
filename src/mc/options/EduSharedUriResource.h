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
    EduSharedUriResource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduSharedUriResource(::EduSharedUriResource&&);

#ifdef LL_PLAT_C
    MCAPI bool operator!=(::EduSharedUriResource const& rhs) const;
#endif

    MCFOLD ::EduSharedUriResource& operator=(::EduSharedUriResource&&);

    MCFOLD ::EduSharedUriResource& operator=(::EduSharedUriResource const&);

    MCAPI bool operator==(::EduSharedUriResource const& rhs) const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EduSharedUriResource&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
