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
        AtomicAccumulator& operator=(AtomicAccumulator const&) = delete;
        AtomicAccumulator(AtomicAccumulator const&)            = delete;
        AtomicAccumulator()                                    = delete;

    public:
        /**
         * @symbol ?reset\@AtomicAccumulator\@DBStoragePerformanceData\@\@QEAAXXZ
         */
        MCAPI void reset(); // NOLINT
    };

public:
    // prevent constructor by default
    DBStoragePerformanceData& operator=(DBStoragePerformanceData const&) = delete;
    DBStoragePerformanceData(DBStoragePerformanceData const&)            = delete;
    DBStoragePerformanceData()                                           = delete;

public:
    /**
     * @symbol ?resetAll\@DBStoragePerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll(); // NOLINT
    /**
     * @symbol ?CATEGORY_NAMES\@DBStoragePerformanceData\@\@2V?$array\@PEBD$0N\@\@std\@\@A
     */
    MCAPI static class std::array<char const*, 13> CATEGORY_NAMES; // NOLINT
    /**
     * @symbol ?OPERATION_NAMES\@DBStoragePerformanceData\@\@2V?$array\@PEBD$03\@std\@\@A
     */
    MCAPI static class std::array<char const*, 4> OPERATION_NAMES; // NOLINT
};
