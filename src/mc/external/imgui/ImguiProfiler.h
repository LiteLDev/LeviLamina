#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::Threading { class Mutex; }
// clang-format on

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
        struct FullStackRecord {
        public:
            // prevent constructor by default
            FullStackRecord& operator=(FullStackRecord const&);
            FullStackRecord(FullStackRecord const&);
            FullStackRecord();

        public:
            // NOLINTBEGIN
            MCAPI FullStackRecord(struct ImguiProfiler::RecordGroup::FullStackRecord&&);

            MCAPI ~FullStackRecord();

            // NOLINTEND
        };

        struct Record {
        public:
            // prevent constructor by default
            Record& operator=(Record const&);
            Record();

        public:
            // NOLINTBEGIN
            MCAPI Record(struct ImguiProfiler::RecordGroup::Record const&);

            MCAPI struct ImguiProfiler::RecordGroup::Record& operator=(struct ImguiProfiler::RecordGroup::Record&&);

            MCAPI ~Record();

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RecordGroup& operator=(RecordGroup const&);
        RecordGroup(RecordGroup const&);
        RecordGroup();

    public:
        // NOLINTBEGIN
        MCAPI struct ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const& name);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI bool isGreaterThan(
            struct ImguiProfiler::RecordGroup::FullStackRecord const& lhs,
            struct ImguiProfiler::RecordGroup::FullStackRecord const& rhs
        );

        // NOLINTEND
    };

    class Timer {
    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Timer() = default;

        // NOLINTEND
    };

    class ManualTimer : public ::ImguiProfiler::Timer {
    public:
        // prevent constructor by default
        ManualTimer& operator=(ManualTimer const&);
        ManualTimer(ManualTimer const&);
        ManualTimer();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ManualTimer();

        MCAPI void mark();

        // NOLINTEND
    };

    class ScopedTimer : public ::ImguiProfiler::Timer {
    public:
        // prevent constructor by default
        ScopedTimer& operator=(ScopedTimer const&);
        ScopedTimer(ScopedTimer const&);
        ScopedTimer();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ScopedTimer();

        MCAPI ScopedTimer(char const* group, char const* name, bool isClient);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&);
    ImguiProfiler(ImguiProfiler const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImguiProfiler() = default;

    MCAPI ImguiProfiler();

    MCAPI class TimeAccumulator
    getTimeAccumulator(std::string const& group, std::string const& name, bool isClientSide);

    MCAPI void update();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct ImguiProfiler::Record> sPendingRecords;

    MCAPI static int sProduceRecords;

    MCAPI static class Bedrock::Threading::Mutex sRecordMutex;

    // NOLINTEND
};
