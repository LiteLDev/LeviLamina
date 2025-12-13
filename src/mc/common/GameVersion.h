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
    // prevent constructor by default
    GameVersion& operator=(GameVersion const&);
    GameVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameVersion(::GameVersion const&);

    MCNAPI explicit GameVersion(::ListTag const& tag);

    MCNAPI GameVersion(uint major, uint minor, uint patch, uint revision, uint isBeta);

    MCNAPI_C bool operator!=(::GameVersion const& other) const;

    MCNAPI bool operator<(::GameVersion const& other) const;

    MCNAPI ::GameVersion& operator=(::GameVersion&&);

    MCNAPI bool operator>=(::GameVersion const& other) const;

    MCNAPI ::std::unique_ptr<::ListTag> serialize() const;

    MCNAPI ~GameVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::GameVersion current();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameVersion const& Zero();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameVersion const&);

    MCNAPI void* $ctor(::ListTag const& tag);

    MCNAPI void* $ctor(uint major, uint minor, uint patch, uint revision, uint isBeta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
