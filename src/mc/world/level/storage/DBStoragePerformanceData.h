#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DBStoragePerformanceData {
public:
    // DBStoragePerformanceData inner types declare
    // clang-format off
    class AtomicAccumulator;
    // clang-format on

    // DBStoragePerformanceData inner types define
    class AtomicAccumulator {
    public:
        // prevent constructor by default
        AtomicAccumulator& operator=(AtomicAccumulator const&);
        AtomicAccumulator(AtomicAccumulator const&);
        AtomicAccumulator();

    public:
        // NOLINTBEGIN
        MCAPI void reset();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DBStoragePerformanceData& operator=(DBStoragePerformanceData const&);
    DBStoragePerformanceData(DBStoragePerformanceData const&);
    DBStoragePerformanceData();

public:
    // NOLINTBEGIN
    MCAPI void resetAll();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::array<char const*, 13>& CATEGORY_NAMES();

    MCAPI static std::array<char const*, 4>& OPERATION_NAMES();

    // NOLINTEND
};
