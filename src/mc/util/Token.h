#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Token {
public:
    // Token inner types define
    enum class Type : int {
        String = 0,
        Number = 1,
        Bool   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk158c9a;
    union {
        ::ll::UntypedStorage<4, 4> mUnk773835;
        ::ll::UntypedStorage<1, 1> mUnkdd232c;
    };
    ::ll::UntypedStorage<4, 4> mUnk325bca;
    ::ll::UntypedStorage<1, 1> mUnk7bb1f0;
    // NOLINTEND

public:
    // prevent constructor by default
    Token& operator=(Token const&);
    Token(Token const&);
    Token();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Token(::std::string const& str);

    MCAPI bool _parseRandom();

    MCAPI ~Token();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Token> tokenize(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
