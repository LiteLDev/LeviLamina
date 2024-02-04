#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangScriptArgType : int {
    Unset                  = -1,
    Float                  = 0,
    HashType64             = 1,
    MolangLoopBreak        = 2,
    MolangLoopContinue     = 3,
    MolangActorPtr         = 4,
    MolangActorIdPtr       = 5,
    MolangItemStackBasePtr = 6,
    Variant                = 7,
};
