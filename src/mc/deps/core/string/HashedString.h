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
#ifdef LL_PLAT_C
    MCAPI explicit HashedString(nullptr_t);
#endif

    MCAPI HashedString(::HashedString&& rhs);

    MCAPI HashedString(::HashedString const& rhs);

    MCAPI explicit HashedString(::std::string const& str);

    MCAPI explicit HashedString(char const* str);

    MCAPI explicit HashedString(::std::string_view str);

    MCAPI HashedString(uint64 hash, char const* str);

    MCFOLD char const* c_str() const;

    MCAPI void clear();

    MCFOLD bool empty() const;

    MCFOLD uint64 getHash() const;

    MCFOLD uint getHash32Bits() const;

    MCFOLD ::std::string const& getString() const;

    MCFOLD bool isEmpty() const;

    MCAPI ::HashedString& operator=(::HashedString&& rhs);

    MCAPI ::HashedString& operator=(::HashedString const& rhs);

    MCAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 computeHash(::std::string const& str);

    MCAPI static uint64 computeHash(char const* str);

    MCAPI static ::HashedString const& getEmptyString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(nullptr_t);
#endif

    MCAPI void* $ctor(::HashedString&& rhs);

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

MCAPI bool operator<(::HashedString const& lhs, ::HashedString const& rhs);

MCAPI bool operator==(::HashedString const& lhs, ::HashedString const& rhs);
// NOLINTEND
