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
            // symbol: ??0FullStackRecord@RecordGroup@ImguiProfiler@@QEAA@$$QEAU012@@Z
            MCAPI FullStackRecord(struct ImguiProfiler::RecordGroup::FullStackRecord&&);

            // symbol: ??1FullStackRecord@RecordGroup@ImguiProfiler@@QEAA@XZ
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
            // symbol: ??0Record@RecordGroup@ImguiProfiler@@QEAA@AEBU012@@Z
            MCAPI Record(struct ImguiProfiler::RecordGroup::Record const&);

            // symbol: ??4Record@RecordGroup@ImguiProfiler@@QEAAAEAU012@$$QEAU012@@Z
            MCAPI struct ImguiProfiler::RecordGroup::Record& operator=(struct ImguiProfiler::RecordGroup::Record&&);

            // symbol: ??1Record@RecordGroup@ImguiProfiler@@QEAA@XZ
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
        // symbol:
        // ??ARecordGroup@ImguiProfiler@@QEAAAEAUFullStackRecord@01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI struct ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const& name);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?isGreaterThan@RecordGroup@ImguiProfiler@@AEAA_NAEBUFullStackRecord@12@0@Z
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
        // vIndex: 0, symbol: ??1Timer@ImguiProfiler@@UEAA@XZ
        virtual ~Timer();

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
        // vIndex: 0, symbol: ??1ManualTimer@ImguiProfiler@@UEAA@XZ
        virtual ~ManualTimer();

        // symbol: ??0ManualTimer@ImguiProfiler@@QEAA@PEBD0_N@Z
        MCAPI ManualTimer(char const* group, char const* name, bool isClient);

        // symbol: ?mark@ManualTimer@ImguiProfiler@@QEAAXXZ
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
        // vIndex: 0, symbol: ??1ScopedTimer@ImguiProfiler@@UEAA@XZ
        virtual ~ScopedTimer();

        // symbol: ??0ScopedTimer@ImguiProfiler@@QEAA@PEBD0_N@Z
        MCAPI ScopedTimer(char const* group, char const* name, bool isClient);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&);
    ImguiProfiler(ImguiProfiler const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ImguiProfiler@@UEAA@XZ
    virtual ~ImguiProfiler() = default;

    // symbol: ??0ImguiProfiler@@QEAA@XZ
    MCAPI ImguiProfiler();

    // symbol:
    // ?getTimeAccumulator@ImguiProfiler@@QEAA?AVTimeAccumulator@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCAPI class TimeAccumulator
    getTimeAccumulator(std::string const& group, std::string const& name, bool isClientSide);

    // symbol: ?update@ImguiProfiler@@QEAAXXZ
    MCAPI void update();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?sPendingRecords@ImguiProfiler@@0V?$vector@URecord@ImguiProfiler@@V?$allocator@URecord@ImguiProfiler@@@std@@@std@@A
    MCAPI static std::vector<struct ImguiProfiler::Record> sPendingRecords;

    // symbol: ?sProduceRecords@ImguiProfiler@@0HA
    MCAPI static int sProduceRecords;

    // symbol: ?sRecordMutex@ImguiProfiler@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex sRecordMutex;

    // NOLINTEND
};
