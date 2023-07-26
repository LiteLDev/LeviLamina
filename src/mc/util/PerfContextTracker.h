#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTracker {
public:
    // PerfContextTracker inner types declare
    // clang-format off
    class Duration;
    class EventScope;
    class Timer;
    // clang-format on

    // PerfContextTracker inner types define
    class Duration {

    public:
        // prevent constructor by default
        Duration& operator=(Duration const&) = delete;
        Duration(Duration const&)            = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol ?reset\@Duration\@PerfContextTracker\@\@UEAAXXZ
         */
        virtual void reset(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERFCONTEXTTRACKER_DURATION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Duration(); // NOLINT
#endif
        /**
         * @symbol ??0Duration\@PerfContextTracker\@\@QEAA\@XZ
         */
        MCAPI Duration(); // NOLINT
    };

    class EventScope {

    public:
        // prevent constructor by default
        EventScope& operator=(EventScope const&) = delete;
        EventScope(EventScope const&)            = delete;
        EventScope()                             = delete;

    public:
        /**
         * @symbol ??0EventScope\@PerfContextTracker\@\@QEAA\@W4PerfContextEvent\@\@\@Z
         */
        MCAPI EventScope(enum class PerfContextEvent); // NOLINT
        /**
         * @symbol ??1EventScope\@PerfContextTracker\@\@QEAA\@XZ
         */
        MCAPI ~EventScope(); // NOLINT
    };

    class Timer {

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&) = delete;
        Timer(Timer const&)            = delete;
        Timer()                        = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol ?reset\@Timer\@PerfContextTracker\@\@UEAAXXZ
         */
        virtual void reset(); // NOLINT
    };

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&) = delete;
    PerfContextTracker(PerfContextTracker const&)            = delete;

public:
    /**
     * @symbol ??0PerfContextTracker\@\@QEAA\@XZ
     */
    MCAPI PerfContextTracker(); // NOLINT
    /**
     * @symbol ?incrementPacketReceivedInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketReceivedInfo(unsigned int); // NOLINT
    /**
     * @symbol ?incrementPacketSentInfo\@PerfContextTracker\@\@QEAAXI\@Z
     */
    MCAPI void incrementPacketSentInfo(unsigned int); // NOLINT
    /**
     * @symbol ?getInstance\@PerfContextTracker\@\@SAAEAV1\@XZ
     */
    MCAPI static class PerfContextTracker& getInstance(); // NOLINT

    // private:
    /**
     * @symbol ?_resetStats\@PerfContextTracker\@\@AEAAXXZ
     */
    MCAPI void _resetStats(); // NOLINT

private:
};
