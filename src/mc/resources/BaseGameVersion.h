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
    BaseGameVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameVersion(::BaseGameVersion const& rhs);

    MCAPI BaseGameVersion(ushort major, uint minor, uint patch);

    MCAPI ::std::string asString() const;

    MCAPI bool isCompatibleWith(::BaseGameVersion const& baseGameVersion) const;

    MCFOLD bool operator<=(::BaseGameVersion const& rhs) const;

    MCAPI ::BaseGameVersion& operator=(::BaseGameVersion const&);

    MCAPI bool operator>=(::BaseGameVersion const& rhs) const;

    MCAPI ~BaseGameVersion();
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

    MCAPI static ::BaseGameVersion const& INCOMPATIBLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BaseGameVersion const& rhs);

    MCAPI void* $ctor(ushort major, uint minor, uint patch);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
