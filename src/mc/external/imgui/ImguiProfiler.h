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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_MANUALTIMER
    public:
        ManualTimer& operator=(ManualTimer const&) = delete;
        ManualTimer(ManualTimer const&)            = delete;
        ManualTimer()                              = delete;
#endif

    public:
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
    };

    struct Record {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_RECORD
    public:
        Record& operator=(Record const&) = delete;
        Record(Record const&)            = delete;
        Record()                         = delete;
#endif

    public:
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_RECORDGROUP_FULLSTACKRECORD
        public:
            FullStackRecord& operator=(FullStackRecord const&) = delete;
            FullStackRecord(FullStackRecord const&)            = delete;
            FullStackRecord()                                  = delete;
#endif

        public:
            /**
             * @symbol ??0FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@$$QEAU012\@\@Z
             */
            MCAPI FullStackRecord(struct ImguiProfiler::RecordGroup::FullStackRecord&&);
            /**
             * @symbol ??1FullStackRecord\@RecordGroup\@ImguiProfiler\@\@QEAA\@XZ
             */
            MCAPI ~FullStackRecord();
        };

        struct Record {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_RECORDGROUP_RECORD
        public:
            Record& operator=(Record const&) = delete;
            Record()                         = delete;
#endif

        public:
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
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_RECORDGROUP
    public:
        RecordGroup& operator=(RecordGroup const&) = delete;
        RecordGroup(RecordGroup const&)            = delete;
        RecordGroup()                              = delete;
#endif

    public:
        /**
         * @symbol
         * ??ARecordGroup\@ImguiProfiler\@\@QEAAAEAUFullStackRecord\@01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI struct ImguiProfiler::RecordGroup::FullStackRecord& operator[](std::string const&);

        // private:
        /**
         * @symbol ?isGreaterThan\@RecordGroup\@ImguiProfiler\@\@AEAA_NAEBUFullStackRecord\@12\@0\@Z
         */
        MCAPI bool
        isGreaterThan(struct ImguiProfiler::RecordGroup::FullStackRecord const&, struct ImguiProfiler::RecordGroup::FullStackRecord const&);
    };

    class ScopedTimer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_SCOPEDTIMER
    public:
        ScopedTimer& operator=(ScopedTimer const&) = delete;
        ScopedTimer(ScopedTimer const&)            = delete;
        ScopedTimer()                              = delete;
#endif

    public:
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
    };

    class Timer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER_TIMER
    public:
        Timer& operator=(Timer const&) = delete;
        Timer(Timer const&)            = delete;
        Timer()                        = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER
public:
    ImguiProfiler& operator=(ImguiProfiler const&) = delete;
    ImguiProfiler(ImguiProfiler const&)            = delete;
    ImguiProfiler()                                = delete;
#endif

public:
    /**
     * @symbol
     * ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const&, std::string const&, bool);

    // private:
};
