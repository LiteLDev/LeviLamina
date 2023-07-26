#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImguiProfiler {
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
    class ManualTimer {

    public:
        // prevent constructor by default
        ManualTimer& operator=(ManualTimer const&) = delete;
        ManualTimer(ManualTimer const&)            = delete;
        ManualTimer()                              = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMGUIPROFILER_MANUALTIMER
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~ManualTimer(); // NOLINT
#endif
        /**
         * @symbol ?mark\@ManualTimer\@ImguiProfiler\@\@QEAAXXZ
         */
        MCAPI void mark(); // NOLINT
    };

    struct Record {

    public:
        // prevent constructor by default
        Record& operator=(Record const&) = delete;
        Record(Record const&)            = delete;
        Record()                         = delete;
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
            FullStackRecord& operator=(FullStackRecord const&) = delete;
            FullStackRecord(FullStackRecord const&)            = delete;
            FullStackRecord()                                  = delete;

        public:
            /**
             * @symbol ??0FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@$$QEAU012\@\@Z
             */
            MCAPI FullStackRecord(struct ImguiProfiler::RecordGroup::FullStackRecord&&); // NOLINT
            /**
             * @symbol ??1FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@XZ
             */
            MCAPI ~FullStackRecord(); // NOLINT
        };

        struct Record {

        public:
            // prevent constructor by default
            Record& operator=(Record const&) = delete;
            Record()                         = delete;

        public:
            /**
             * @symbol ??0Record\@RecordGroup\@ImguiProfiler\@\@QEAA\@AEBU012\@\@Z
             */
            MCAPI Record(struct ImguiProfiler::RecordGroup::Record const&); // NOLINT
            /**
             * @symbol ??4Record\@RecordGroup\@ImguiProfiler\@\@QEAAAEAU012\@$$QEAU012\@\@Z
             */
            MCAPI struct ImguiProfiler::RecordGroup::Record&
            operator=(struct ImguiProfiler::RecordGroup::Record&&); // NOLINT
            /**
             * @symbol ??1Record\@RecordGroup\@ImguiProfiler\@\@QEAA\@XZ
             */
            MCAPI ~Record(); // NOLINT
        };

    public:
        // prevent constructor by default
        RecordGroup& operator=(RecordGroup const&) = delete;
        RecordGroup(RecordGroup const&)            = delete;
        RecordGroup()                              = delete;

    public:
        /**
         * @symbol
         * ??ARecordGroup\@ImguiProfiler\@\@QEAAAEAUFullStackRecord\@01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI struct ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const&); // NOLINT

        // private:
        /**
         * @symbol ?isGreaterThan\@RecordGroup\@ImguiProfiler\@\@AEAA_NAEBUFullStackRecord\@12\@0\@Z
         */
        MCAPI bool
        isGreaterThan(struct ImguiProfiler::RecordGroup::FullStackRecord const&, struct ImguiProfiler::RecordGroup::FullStackRecord const&); // NOLINT
    };

    class ScopedTimer {

    public:
        // prevent constructor by default
        ScopedTimer& operator=(ScopedTimer const&) = delete;
        ScopedTimer(ScopedTimer const&)            = delete;
        ScopedTimer()                              = delete;

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMGUIPROFILER_SCOPEDTIMER
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~ScopedTimer(); // NOLINT
#endif
        /**
         * @symbol ??0ScopedTimer\@ImguiProfiler\@\@QEAA\@PEBD0_N\@Z
         */
        MCAPI ScopedTimer(char const*, char const*, bool); // NOLINT
    };

    class Timer {

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&) = delete;
        Timer(Timer const&)            = delete;
        Timer()                        = delete;
    };

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&) = delete;
    ImguiProfiler(ImguiProfiler const&)            = delete;
    ImguiProfiler()                                = delete;

public:
    /**
     * @symbol
     * ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const&, std::string const&, bool); // NOLINT

    // private:
};
