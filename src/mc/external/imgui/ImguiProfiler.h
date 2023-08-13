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

    class Timer {

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&) = delete;
        Timer(Timer const&)            = delete;
        Timer()                        = delete;
    };

    class ManualTimer : public ::ImguiProfiler::Timer {

    public:
        // prevent constructor by default
        ManualTimer& operator=(ManualTimer const&) = delete;
        ManualTimer(ManualTimer const&)            = delete;
        ManualTimer()                              = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMGUIPROFILER_MANUALTIMER
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~ManualTimer();
#endif
        /**
         * @symbol ?mark\@ManualTimer\@ImguiProfiler\@\@QEAAXXZ
         */
        MCAPI void mark();
        // NOLINTEND
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
            // NOLINTBEGIN
            /**
             * @symbol ??0FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@$$QEAU012\@\@Z
             */
            MCAPI FullStackRecord(struct ImguiProfiler::RecordGroup::FullStackRecord&&);
            /**
             * @symbol ??1FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@XZ
             */
            MCAPI ~FullStackRecord();
            // NOLINTEND
        };

        struct Record {

        public:
            // prevent constructor by default
            Record& operator=(Record const&) = delete;
            Record()                         = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ??0Record\@RecordGroup\@ImguiProfiler\@\@QEAA\@AEBU012\@\@Z
             */
            MCAPI Record(struct ImguiProfiler::RecordGroup::Record const&);
            /**
             * @symbol ??4Record\@RecordGroup\@ImguiProfiler\@\@QEAAAEAU012\@$$QEAU012\@\@Z
             */
            MCAPI struct ImguiProfiler::RecordGroup::Record& operator=(struct ImguiProfiler::RecordGroup::Record&&);
            /**
             * @symbol ??1Record\@RecordGroup\@ImguiProfiler\@\@QEAA\@XZ
             */
            MCAPI ~Record();
            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RecordGroup& operator=(RecordGroup const&) = delete;
        RecordGroup(RecordGroup const&)            = delete;
        RecordGroup()                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??ARecordGroup\@ImguiProfiler\@\@QEAAAEAUFullStackRecord\@01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI struct ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const&);
        // NOLINTEND

        // private:
        // NOLINTBEGIN
        /**
         * @symbol ?isGreaterThan\@RecordGroup\@ImguiProfiler\@\@AEAA_NAEBUFullStackRecord\@12\@0\@Z
         */
        MCAPI bool
        isGreaterThan(struct ImguiProfiler::RecordGroup::FullStackRecord const&, struct ImguiProfiler::RecordGroup::FullStackRecord const&);
        // NOLINTEND
    };

    class ScopedTimer : public ::ImguiProfiler::Timer {

    public:
        // prevent constructor by default
        ScopedTimer& operator=(ScopedTimer const&) = delete;
        ScopedTimer(ScopedTimer const&)            = delete;
        ScopedTimer()                              = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMGUIPROFILER_SCOPEDTIMER
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~ScopedTimer();
#endif
        /**
         * @symbol ??0ScopedTimer\@ImguiProfiler\@\@QEAA\@PEBD0_N\@Z
         */
        MCAPI ScopedTimer(char const*, char const*, bool);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ImguiProfiler& operator=(ImguiProfiler const&) = delete;
    ImguiProfiler(ImguiProfiler const&)            = delete;
    ImguiProfiler()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const&, std::string const&, bool);
    // NOLINTEND
};
