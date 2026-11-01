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
    MCNAPI EduSharedUriResource(::EduSharedUriResource const&);

#ifdef LL_PLAT_C
    MCNAPI bool operator!=(::EduSharedUriResource const& rhs) const;
#endif

    MCNAPI ::EduSharedUriResource& operator=(::EduSharedUriResource&&);

    MCNAPI ~EduSharedUriResource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::EduSharedUriResource>
    create(::std::unordered_map<::std::string, ::std::string> const& values);
#endif

    MCNAPI static ::EduSharedUriResource fromTag(::CompoundTag const& tag);

    MCNAPI static ::std::unique_ptr<::CompoundTag> toTag(::EduSharedUriResource const& resource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EduSharedUriResource const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
