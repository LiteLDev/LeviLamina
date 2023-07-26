#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct JSON {

public:
    // prevent constructor by default
    JSON& operator=(JSON const&) = delete;
    JSON(JSON const&)            = delete;
    JSON()                       = delete;
};

}; // namespace Scripting
