#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CaseInsensitiveHash.h"
#include "mc/util/CompoundTagUpdaterResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdater;
namespace CaseInsensitiveHash { struct CaseInsensitiveCompare; }
// clang-format on

class CompoundTagUpdaterContext {
public:
    // CompoundTagUpdaterContext inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // CompoundTagUpdaterContext inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                   mUpdaterVersion;
        ::ll::TypedStorage<1, 1, bool>                                                    mInFlightUpdate;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTagUpdater>>> mUpdaters;
        ::ll::TypedStorage<8, 24, ::CompoundTagUpdaterAnon::UpdateGroup>                  mRegexNameUpdaters;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<
                ::std::string,
                struct ::CompoundTagUpdaterAnon::UpdateGroup,
                ::Util::CaseInsensitiveHash,
                ::CaseInsensitiveHash::CaseInsensitiveCompare>>
            mUpdateByName;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::CompoundTagUpdaterContext::Impl>>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTagUpdaterResult update(::CompoundTag& tag, uint version) const;
    // NOLINTEND
};
