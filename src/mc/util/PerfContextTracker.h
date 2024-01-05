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
        Duration& operator=(Duration const&);
        Duration(Duration const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Duration@PerfContextTracker@@UEAA@XZ
        virtual ~Duration();

        // vIndex: 1, symbol: ?reset@Duration@PerfContextTracker@@UEAAXXZ
        virtual void reset();

        // symbol: ??0Duration@PerfContextTracker@@QEAA@XZ
        MCAPI Duration();

        // NOLINTEND
    };

    class EventScope {
    public:
        // prevent constructor by default
        EventScope& operator=(EventScope const&);
        EventScope(EventScope const&);
        EventScope();

    public:
        // NOLINTBEGIN
        // symbol: ??0EventScope@PerfContextTracker@@QEAA@W4PerfContextEvent@@@Z
        MCAPI explicit EventScope(::PerfContextEvent eventType);

        // symbol: ??1EventScope@PerfContextTracker@@QEAA@XZ
        MCAPI ~EventScope();

        // NOLINTEND
    };

    class Timer : public ::PerfContextTracker::Duration {
    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Timer@PerfContextTracker@@UEAA@XZ
        virtual ~Timer() = default;

        // vIndex: 1, symbol: ?reset@Timer@PerfContextTracker@@UEAAXXZ
        virtual void reset();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&);
    PerfContextTracker(PerfContextTracker const&);
    PerfContextTracker();

public:
    // NOLINTBEGIN
    // symbol: ?incrementPacketReceivedInfo@PerfContextTracker@@QEAAXI@Z
    MCAPI void incrementPacketReceivedInfo(uint);

    // symbol: ?incrementPacketSentInfo@PerfContextTracker@@QEAAXI@Z
    MCAPI void incrementPacketSentInfo(uint);

    // symbol: ?getInstance@PerfContextTracker@@SAAEAV1@XZ
    MCAPI static class PerfContextTracker& getInstance();

    // NOLINTEND
};
