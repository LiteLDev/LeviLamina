#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class BaseGameVersion {
public:
    // BaseGameVersion inner types declare
    // clang-format off
    struct any_version_constructor;
    // clang-format on

    // BaseGameVersion inner types define
    struct any_version_constructor {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion> mSemVersion;
    ::ll::TypedStorage<1, 1, bool>          mNeverCompatible;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameVersion& operator=(BaseGameVersion const&);
    BaseGameVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameVersion(::BaseGameVersion const& rhs);

    MCAPI bool isCompatibleWith(::BaseGameVersion const& baseGameVersion) const;

    MCAPI bool operator!=(::BaseGameVersion const& rhs) const;

    MCAPI bool operator==(::BaseGameVersion const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion::MatchType fromString(::std::string const& source, ::BaseGameVersion& output);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& ANY();

    MCAPI static ::BaseGameVersion const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseGameVersion const& rhs);
    // NOLINTEND
};
