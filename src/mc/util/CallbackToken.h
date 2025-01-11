#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CallbackTokenCancelState;
// clang-format on

class CallbackToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4b0467;
    // NOLINTEND

public:
    // prevent constructor by default
    CallbackToken& operator=(CallbackToken const&);
    CallbackToken(CallbackToken const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CallbackToken();

    MCAPI explicit CallbackToken(::std::weak_ptr<::CallbackTokenCancelState> cancelState);

    MCAPI void cancelCallback();

    MCAPI ::CallbackToken& operator=(::CallbackToken&& rhs);

    MCAPI void release();

    MCAPI ~CallbackToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::std::weak_ptr<::CallbackTokenCancelState> cancelState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
