#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Router2MessageIdentifiers : int {
    QueryForwarding = 0,
    ReplyForwarding = 1,
    RequestForwarding = 2,
    IncreaseTimeout = 3,
};
