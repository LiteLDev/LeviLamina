#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class MetaElement : int {
    RootType   = 0,
    Member     = 1,
    ConstValue = 2,
    Component  = 3,
    Function   = 4,
};

}
