#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/CallbackTokenCancelState.h"

// auto generated forward declare list
// clang-format off
class CallbackTokenCancelState;
// clang-format on

class CallbackToken {
public:
    // member variables
    // NOLINTBEGIN
    ::std::weak_ptr<::CallbackTokenCancelState> mCancelState;
    // NOLINTEND

    void cancelCallback() {
        if (auto cancelState = mCancelState.lock()) {
            cancelState->cancel();
        }
    }

    void release() { mCancelState.reset(); }

    bool isEmpty() const { return mCancelState.expired(); }
};
