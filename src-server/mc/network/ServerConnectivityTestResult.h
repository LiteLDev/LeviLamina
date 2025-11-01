#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerConnectivityTestResult : int {
    Unknown = 0,
    Passed  = 1,
    Failed  = -1,
};
