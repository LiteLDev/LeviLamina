#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class InterceptRequestStatus : int {
    Allow    = 0,
    Restrict = 1,
};

}
