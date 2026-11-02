#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class AccountSystem {
public:
    // AccountSystem inner types declare
    // clang-format off
    struct SignInAttemptToken;
    // clang-format on

    // AccountSystem inner types define
    enum class Error : int {};

    enum class State : int {};

    struct SignInAttemptToken {};
};

} // namespace Social
