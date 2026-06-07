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
    MCNAPI CallbackToken();

    MCNAPI explicit CallbackToken(::std::weak_ptr<::CallbackTokenCancelState> cancelState);

    MCNAPI void cancelCallback();

    MCNAPI ::CallbackToken& operator=(::CallbackToken&& rhs);

    MCNAPI void release();

    MCNAPI ~CallbackToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::weak_ptr<::CallbackTokenCancelState> cancelState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
