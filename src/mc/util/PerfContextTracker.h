#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/PerfContextEvent.h"

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
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();

        // vIndex: 1, symbol: ?reset@Duration@PerfContextTracker@@UEAAXXZ
        virtual void reset();

        // symbol: ??1Duration@PerfContextTracker@@UEAA@XZ
        MCVAPI ~Duration();

        // symbol: ??0Duration@PerfContextTracker@@QEAA@XZ
        MCAPI Duration();

        // NOLINTEND
    };

    class EventScope {
    public:
        // prevent constructor by default
        EventScope& operator=(EventScope const&) = delete;
        EventScope(EventScope const&)            = delete;
        EventScope()                             = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??0EventScope@PerfContextTracker@@QEAA@W4PerfContextEvent@@@Z
        MCAPI EventScope(::PerfContextEvent);

        // symbol: ??1EventScope@PerfContextTracker@@QEAA@XZ
        MCAPI ~EventScope();

        // NOLINTEND
    };

    class Timer : public ::PerfContextTracker::Duration {
    public:
        // prevent constructor by default
        Timer& operator=(Timer const&) = delete;
        Timer(Timer const&)            = delete;
        Timer()                        = delete;

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();

        // vIndex: 1, symbol: ?reset@Timer@PerfContextTracker@@UEAAXXZ
        virtual void reset();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&) = delete;
    PerfContextTracker(PerfContextTracker const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PerfContextTracker@@QEAA@XZ
    MCAPI PerfContextTracker();

    // symbol: ?incrementPacketReceivedInfo@PerfContextTracker@@QEAAXI@Z
    MCAPI void incrementPacketReceivedInfo(uint);

    // symbol: ?incrementPacketSentInfo@PerfContextTracker@@QEAAXI@Z
    MCAPI void incrementPacketSentInfo(uint);

    // symbol: ?getInstance@PerfContextTracker@@SAAEAV1@XZ
    MCAPI static class PerfContextTracker& getInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_resetStats@PerfContextTracker@@AEAAXXZ
    MCAPI void _resetStats();

    // NOLINTEND
};
