#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BackgroundTaskBase {
public:
    // BackgroundTaskBase inner types declare
    // clang-format off
    struct CurrentTaskAutoScope;
    struct PendingComparer;
    struct PriorityComparer;
    // clang-format on

    // BackgroundTaskBase inner types define
    struct CurrentTaskAutoScope {};

    struct PendingComparer {};

    struct PriorityComparer {};
};
