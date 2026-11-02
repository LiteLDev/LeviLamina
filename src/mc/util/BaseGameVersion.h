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
    MCNAPI BaseGameVersion(::BaseGameVersion const& rhs);

    MCNAPI bool isCompatibleWith(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI bool operator!=(::BaseGameVersion const& rhs) const;

    MCNAPI bool operator==(::BaseGameVersion const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SemVersion::MatchType fromString(::std::string const& source, ::BaseGameVersion& output);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& ANY();

    MCNAPI static ::BaseGameVersion const& EMPTY();

    MCNAPI static ::BaseGameVersion const& INCOMPATIBLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const& rhs);
    // NOLINTEND
};
