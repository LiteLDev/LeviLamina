#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

enum class SignInMode : uchar {
    ForcePrompt = 0,
    AttemptSSO  = 1,
    Refresh     = 2,
};

}
