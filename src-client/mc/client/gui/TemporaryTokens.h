#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
class ExprToken;
// clang-format on

struct TemporaryTokens {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::LinearAllocator<::ExprToken>> mTemporaryTokenStorage;
    ::ll::TypedStorage<8, 16, ::gsl::span<::ExprToken>>       mTemporaryTokens;
    ::ll::TypedStorage<8, 8, uint64>                          mCurrentToken;
    ::ll::TypedStorage<8, 8, uint64>                          mAllocSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ExprToken& create();

    MCAPI ~TemporaryTokens();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
