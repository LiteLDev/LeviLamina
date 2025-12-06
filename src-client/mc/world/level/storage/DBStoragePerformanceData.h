#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStoragePerformanceData {
public:
    // DBStoragePerformanceData inner types declare
    // clang-format off
    struct AtomicAccumulator;
    struct DBStorageAccumulator;
    // clang-format on

    // DBStoragePerformanceData inner types define
    struct AtomicAccumulator {
    public:
        // AtomicAccumulator inner types declare
        // clang-format off
        struct Snapshot;
        // clang-format on

        // AtomicAccumulator inner types define
        struct Snapshot {};
    };

    struct DBStorageAccumulator {};
};
