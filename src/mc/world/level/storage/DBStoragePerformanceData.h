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

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkdfaa44;
        ::ll::UntypedStorage<8, 8>  mUnk8f7f93;
        ::ll::UntypedStorage<8, 8>  mUnk7e1320;
        ::ll::UntypedStorage<8, 8>  mUnk25731e;
        ::ll::UntypedStorage<4, 4>  mUnk543c4c;
        ::ll::UntypedStorage<8, 40> mUnk72cfc2;
        ::ll::UntypedStorage<8, 80> mUnkd17500;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtomicAccumulator& operator=(AtomicAccumulator const&);
        AtomicAccumulator(AtomicAccumulator const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C AtomicAccumulator();

        MCNAPI_S void reset();

        MCNAPI_C ~AtomicAccumulator();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C DBStorageAccumulator();

        MCNAPI_C ~DBStorageAccumulator();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 640>  mUnka7e208;
    ::ll::UntypedStorage<8, 8320> mUnk1b7a8f;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStoragePerformanceData& operator=(DBStoragePerformanceData const&);
    DBStoragePerformanceData(DBStoragePerformanceData const&);
    DBStoragePerformanceData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DBStoragePerformanceData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetAll();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
