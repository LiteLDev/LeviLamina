#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class GameVersion {
public:
    // GameVersion inner types define
    enum class Octet : uint {
        Major     = 0,
        Minor     = 1,
        Patch     = 2,
        Revision  = 3,
        Beta      = 4,
        NumOctets = 5,
        Invalid   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, uint[5]>       mDigit;
    ::ll::TypedStorage<8, 32, ::std::string> mString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameVersion();

    MCAPI GameVersion(::GameVersion const&);

    MCAPI explicit GameVersion(::ListTag const& tag);

    MCAPI GameVersion(uint major, uint minor, uint patch, uint revision, uint isBeta);

    MCAPI ::std::string const& asString() const;

    MCAPI bool operator<(::GameVersion const& other) const;

    MCAPI ::GameVersion& operator=(::GameVersion&&);

    MCAPI ::GameVersion& operator=(::GameVersion const&);

    MCAPI bool operator>=(::GameVersion const& other) const;

    MCAPI ::std::unique_ptr<::ListTag> serialize() const;

    MCAPI ~GameVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::GameVersion current();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::GameVersion const&);

    MCAPI void* $ctor(::ListTag const& tag);

    MCAPI void* $ctor(uint major, uint minor, uint patch, uint revision, uint isBeta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
