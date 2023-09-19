#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // prevent constructor by default
    Version& operator=(Version const&);
    Version(Version const&);
    Version();
};

}; // namespace Scripting
