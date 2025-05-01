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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HashedString(nullptr_t);

    MCNAPI HashedString(::HashedString&& rhs);

    MCNAPI HashedString(::HashedString const& rhs);

    MCNAPI explicit HashedString(::std::string const& str);

    MCNAPI explicit HashedString(char const* str);

    MCNAPI HashedString(uint64 hash, char const* str);

    MCNAPI char const* c_str() const;

    MCNAPI bool empty() const;

    MCNAPI explicit operator ::std::string_view() const;

    MCNAPI ::HashedString& operator=(::HashedString const& rhs);

    MCNAPI ::HashedString& operator=(::HashedString&& rhs);

    MCNAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 computeHash(::std::string const& str);

    MCNAPI static ::HashedString const& getEmptyString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(nullptr_t);

    MCNAPI void* $ctor(::HashedString&& rhs);

    MCNAPI void* $ctor(::HashedString const& rhs);

    MCNAPI void* $ctor(::std::string const& str);

    MCNAPI void* $ctor(char const* str);

    MCNAPI void* $ctor(uint64 hash, char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
