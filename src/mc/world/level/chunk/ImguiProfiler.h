#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class TimeAccumulator;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

struct ImguiProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ImguiProfiler inner types declare
    // clang-format off
    class ManualTimer;
    struct Record;
    struct RecordGroup;
    class ScopedTimer;
    class Timer;
    // clang-format on

    // ImguiProfiler inner types define
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
            ::ll::UntypedStorage<8, 8> mUnk4d5828;
            ::ll::UntypedStorage<8, 8> mUnkfe5c3e;
            // NOLINTEND

        public:
            // prevent constructor by default
            Signature& operator=(Signature const&);
            Signature(Signature const&);
            Signature();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk89b778;
        ::ll::UntypedStorage<8, 8> mUnkc6ac67;
        ::ll::UntypedStorage<1, 1> mUnkf7b3e1;
        ::ll::UntypedStorage<8, 8> mUnka440c2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Timer() = default;
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
        // vIndex: 0
        virtual ~ScopedTimer() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        ::ll::UntypedStorage<1, 1> mUnk309a6a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManualTimer& operator=(ManualTimer const&);
        ManualTimer(ManualTimer const&);
        ManualTimer();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ManualTimer() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void mark();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Record {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4babaf;
        ::ll::UntypedStorage<8, 8> mUnk1951ec;
        ::ll::UntypedStorage<1, 1> mUnk567e65;
        ::ll::UntypedStorage<8, 8> mUnk73e8db;
        // NOLINTEND

    public:
        // prevent constructor by default
        Record& operator=(Record const&);
        Record(Record const&);
        Record();
    };

    struct RecordGroup {
    public:
        // RecordGroup inner types declare
        // clang-format off
        struct FullStackRecord;
        struct Record;
        // clang-format on

        // RecordGroup inner types define
        struct Record {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 24> mUnk593129;
            ::ll::UntypedStorage<8, 48> mUnkdd6783;
            // NOLINTEND

        public:
            // prevent constructor by default
            Record& operator=(Record const&);
            Record();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI Record(::ImguiProfiler::RecordGroup::Record const&);

            MCNAPI ::ImguiProfiler::RecordGroup::Record& operator=(::ImguiProfiler::RecordGroup::Record&&);

            MCNAPI ~Record();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::ImguiProfiler::RecordGroup::Record const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

        struct FullStackRecord {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk99b2c9;
            ::ll::UntypedStorage<1, 1>  mUnk5fd0a9;
            ::ll::UntypedStorage<8, 72> mUnkfc04e9;
            ::ll::UntypedStorage<8, 72> mUnkc08c94;
            // NOLINTEND

        public:
            // prevent constructor by default
            FullStackRecord& operator=(FullStackRecord const&);
            FullStackRecord(FullStackRecord const&);
            FullStackRecord();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI FullStackRecord(::ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCNAPI ::ImguiProfiler::RecordGroup::FullStackRecord&
            operator=(::ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCNAPI ~FullStackRecord();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::ImguiProfiler::RecordGroup::FullStackRecord&&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

        enum class SortType : int {
            AverageTimeClient = 0,
            CountTimeClient   = 1,
            TotalTimeClient   = 2,
            AverageTimeServer = 3,
            CountTimeServer   = 4,
            TotalTimeServer   = 5,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk803bd9;
        ::ll::UntypedStorage<4, 4>  mUnk93e489;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecordGroup& operator=(RecordGroup const&);
        RecordGroup(RecordGroup const&);
        RecordGroup();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool isGreaterThan(
            ::ImguiProfiler::RecordGroup::FullStackRecord const& lhs,
            ::ImguiProfiler::RecordGroup::FullStackRecord const& rhs
        );

        MCNAPI ::ImguiProfiler::RecordGroup::FullStackRecord& operator[](::std::string const& name);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5210a3;
    ::ll::UntypedStorage<8, 80> mUnke06fd6;
    // NOLINTEND

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&);
    ImguiProfiler(ImguiProfiler const&);
    ImguiProfiler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImguiProfiler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TimeAccumulator
    getTimeAccumulator(::std::string const& group, ::std::string const& name, bool isClientSide);

    MCNAPI void update();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ImguiProfiler::Record>& sPendingRecords();

    MCNAPI static int& sProduceRecords();

    MCNAPI static ::Bedrock::Threading::Mutex& sRecordMutex();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
