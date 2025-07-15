#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloudProxy {

enum class Operation : int {
    User = 0,
    List = 1,
    Get  = 2,
    Set  = 3,
    Del  = 4,
};

}
