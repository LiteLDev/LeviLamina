#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/chunk/AverageTracker.h"
#include "mc/world/level/chunk/TimeAccumulator.h"

struct ImguiProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ImguiProfiler inner types declare
    // clang-format off
    struct Record;
    struct RecordGroup;
    class Timer;
    class ManualTimer;
    class ScopedTimer;
    // clang-format on

    // ImguiProfiler inner types define
    struct Record {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                mGroup;
        ::ll::TypedStorage<8, 8, char const*>                mName;
        ::ll::TypedStorage<1, 1, bool>                       mIsClient;
        ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mElapsed;
        // NOLINTEND
    };

    struct RecordGroup {
    public:
        // RecordGroup inner types declare
        // clang-format off
        struct Record;
        struct FullStackRecord;
        // clang-format on

        // RecordGroup inner types define
        enum class SortType : int {
            AverageTimeClient = 0,
            CountTimeClient   = 1,
            TotalTimeClient   = 2,
            AverageTimeServer = 3,
            CountTimeServer   = 4,
            TotalTimeServer   = 5,
        };

        struct Record {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::TimeAccumulator> mTimeAccumulator;
            ::ll::TypedStorage<8, 48, ::AverageTracker>  mAverageTracker;
            // NOLINTEND

        public:
            // prevent constructor by default
            Record& operator=(Record const&);
            Record();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI_S Record(::ImguiProfiler::RecordGroup::Record const&);

            MCAPI ::ImguiProfiler::RecordGroup::Record& operator=(::ImguiProfiler::RecordGroup::Record&&);

            MCAPI ~Record();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCAPI_S void* $ctor(::ImguiProfiler::RecordGroup::Record const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

        struct FullStackRecord {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::std::string>                        mName;
            ::ll::TypedStorage<1, 1, bool>                                  bUseAverageTracker;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mClient;
            ::ll::TypedStorage<8, 72, ::ImguiProfiler::RecordGroup::Record> mServer;
            // NOLINTEND

        public:
            // prevent constructor by default
            FullStackRecord& operator=(FullStackRecord const&);
            FullStackRecord();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI FullStackRecord(::ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCAPI_C FullStackRecord(::ImguiProfiler::RecordGroup::FullStackRecord const&);

            MCAPI ::ImguiProfiler::RecordGroup::FullStackRecord&
            operator=(::ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCAPI ~FullStackRecord();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCAPI void* $ctor(::ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCAPI_C void* $ctor(::ImguiProfiler::RecordGroup::FullStackRecord const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::ImguiProfiler::RecordGroup::FullStackRecord>> mRecords;
        ::ll::TypedStorage<4, 4, ::ImguiProfiler::RecordGroup::SortType>                        mSortType;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool isGreaterThan(
            ::ImguiProfiler::RecordGroup::FullStackRecord const& lhs,
            ::ImguiProfiler::RecordGroup::FullStackRecord const& rhs
        );

        MCAPI ::ImguiProfiler::RecordGroup::FullStackRecord& operator[](::std::string const& name);
        // NOLINTEND
    };

    class Timer {
    public:
        // Timer inner types declare
        // clang-format off
        struct Signature;
        // clang-format on

        // Timer inner types define
        struct Signature {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 8, char const*> mGroup;
            ::ll::TypedStorage<8, 8, char const*> mName;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                             mGroup;
        ::ll::TypedStorage<8, 8, char const*>                             mName;
        ::ll::TypedStorage<1, 1, bool>                                    mIsClient;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStart;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Timer() = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ManualTimer : public ::ImguiProfiler::Timer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mHasAddedRecord;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        virtual ~ManualTimer() /*override*/ = default;
#else // LL_PLAT_C
        virtual ~ManualTimer() /*override*/;
#endif

        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C void mark();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ScopedTimer : public ::ImguiProfiler::Timer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ScopedTimer() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ImguiProfiler::RecordGroup>> mRecordGroups;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                             mRecordGroupMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImguiProfiler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TimeAccumulator
    getTimeAccumulator(::std::string const& group, ::std::string const& name, bool isClientSide);

    MCAPI void update();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ImguiProfiler::Record>& sPendingRecords();

    MCAPI static int& sProduceRecords();

    MCAPI static ::Bedrock::Threading::Mutex& sRecordMutex();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
