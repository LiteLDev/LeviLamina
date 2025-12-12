#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

enum class FilterCollectionGroup : int {
    AllOf  = 0,
    All    = 1,
    And    = 2,
    AnyOf  = 3,
    Any    = 4,
    Or     = 5,
    NoneOf = 6,
    Not    = 7,
};

}
