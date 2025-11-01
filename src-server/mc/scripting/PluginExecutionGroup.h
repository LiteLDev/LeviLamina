#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PluginExecutionGroup : uchar {
    PrePackLoadExecution = 0,
    ServerStartExecution = 1,
    ClientLevelCreation = 2,
    All = 3,
};
