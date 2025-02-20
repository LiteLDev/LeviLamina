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
    MCAPI explicit HashedString(nullptr_t);

    MCAPI HashedString(::HashedString&& rhs);

    MCAPI HashedString(::HashedString const& rhs);

    MCAPI explicit HashedString(::std::string const& str);

    MCAPI explicit HashedString(char const* str);

    MCAPI HashedString(uint64 hash, char const* str);

    MCAPI char const* c_str() const;

    MCAPI bool empty() const;

    MCAPI explicit operator ::std::string_view() const;

    MCAPI ::HashedString& operator=(::HashedString const& rhs);

    MCAPI ::HashedString& operator=(::HashedString&& rhs);

    MCAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 computeHash(::std::string const& str);

    MCFOLD static ::HashedString const& getEmptyString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(nullptr_t);

    MCAPI void* $ctor(::HashedString&& rhs);

    MCAPI void* $ctor(::HashedString const& rhs);

    MCFOLD void* $ctor(::std::string const& str);

    MCAPI void* $ctor(char const* str);

    MCAPI void* $ctor(uint64 hash, char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
