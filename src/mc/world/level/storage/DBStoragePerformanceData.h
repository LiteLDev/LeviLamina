#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class DBStoragePerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DBStoragePerformanceData inner types declare
    // clang-format off
    class AtomicAccumulator;
    struct DBStorageAccumulator;
    // clang-format on

    // DBStoragePerformanceData inner types define
    class AtomicAccumulator {
    public:
        // AtomicAccumulator inner types declare
        // clang-format off
        struct Snapshot;
        // clang-format on

        // AtomicAccumulator inner types define
        struct Snapshot {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnkd7bb17;
            ::ll::UntypedStorage<8, 8> mUnkca0f5b;
            // NOLINTEND

        public:
            // prevent constructor by default
            Snapshot& operator=(Snapshot const&);
            Snapshot(Snapshot const&);
            Snapshot();
        };
    };

    struct DBStorageAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 640> mUnk7892b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        DBStorageAccumulator& operator=(DBStorageAccumulator const&);
        DBStorageAccumulator(DBStorageAccumulator const&);
        DBStorageAccumulator();
    };

public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::UntypedStorage<8, 640>  mUnka7e208;
    ::ll::UntypedStorage<8, 8960> mUnk5cba27;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    DBStoragePerformanceData& operator=(DBStoragePerformanceData const&);
    DBStoragePerformanceData(DBStoragePerformanceData const&);
    DBStoragePerformanceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetAll();
    // NOLINTEND
};
