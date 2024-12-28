#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

enum class JSONType : int {
    NullType = 0,
    Boolean  = 1,
    Number   = 2,
    String   = 3,
    Array    = 4,
    Object   = 5,
};

}
