#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangVariableIndex : ushort {
    ContextAllAnimationsFinished = 1,
    ContextAnyAnimationFinished  = 2,
    ContextIsHidden              = 3,
    ContextMoveDistance          = 4,
    ContextStateTime             = 5,
    FirstDynamic                 = 6,
    Unknown                      = 65535,
};
