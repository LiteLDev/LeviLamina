#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CRASHMANAGER
public:
    CrashManager& operator=(CrashManager const&) = delete;
    CrashManager(CrashManager const&)            = delete;
    CrashManager()                               = delete;
#endif

public:
};

}; // namespace Bedrock
