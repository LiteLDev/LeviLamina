#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashManager {
public:
    // prevent constructor by default
    CrashManager& operator=(CrashManager const&);
    CrashManager(CrashManager const&);
    CrashManager();
};

}; // namespace Bedrock
