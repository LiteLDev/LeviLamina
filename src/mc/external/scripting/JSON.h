#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct JSON {
public:
    // prevent constructor by default
    JSON& operator=(JSON const&);
    JSON(JSON const&);
    JSON();
};

}; // namespace Scripting
