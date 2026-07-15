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
    MCAPI HashedString(::HashedString const& rhs);

    MCAPI explicit HashedString(::std::string const& str);

    MCAPI explicit HashedString(char const* str);

    MCAPI explicit HashedString(::std::string_view str);

    MCAPI HashedString(uint64 hash, char const* str);

    MCAPI ::HashedString& operator=(::HashedString&& rhs);

    MCAPI ::HashedString& operator=(::HashedString const& rhs);

    MCAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 computeHash(::std::string const& str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& rhs);

    MCAPI void* $ctor(::std::string const& str);

    MCAPI void* $ctor(char const* str);

    MCAPI void* $ctor(::std::string_view str);

    MCAPI void* $ctor(uint64 hash, char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCAPI bool operator!=(::HashedString const& lhs, ::HashedString const& rhs);

MCAPI ::std::strong_ordering operator<=>(::HashedString const& lhs, ::HashedString const& rhs);

MCAPI bool operator==(::HashedString const& lhs, ::HashedString const& rhs);
// NOLINTEND
