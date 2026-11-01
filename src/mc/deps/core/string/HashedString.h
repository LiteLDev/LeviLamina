#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                mStrHash;
    ::ll::TypedStorage<8, 32, ::std::string>        mStr;
    ::ll::TypedStorage<8, 8, ::HashedString const*> mLastMatch;
    // NOLINTEND

public:
    // prevent constructor by default
    HashedString();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HashedString(::HashedString const& rhs);

    MCNAPI explicit HashedString(::std::string const& str);

    MCNAPI explicit HashedString(char const* str);

    MCNAPI explicit HashedString(::std::string_view str);

    MCNAPI HashedString(uint64 hash, char const* str);

    MCNAPI ::HashedString& operator=(::HashedString&& rhs);

    MCNAPI ::HashedString& operator=(::HashedString const& rhs);

    MCNAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 computeHash(::std::string const& str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& rhs);

    MCNAPI void* $ctor(::std::string const& str);

    MCNAPI void* $ctor(char const* str);

    MCNAPI void* $ctor(::std::string_view str);

    MCNAPI void* $ctor(uint64 hash, char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCNAPI bool operator!=(::HashedString const& lhs, ::HashedString const& rhs);

MCNAPI ::std::strong_ordering operator<=>(::HashedString const& lhs, ::HashedString const& rhs);

MCNAPI bool operator==(::HashedString const& lhs, ::HashedString const& rhs);
// NOLINTEND
