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
        // vIndex: 0
        virtual ~Duration();

        // vIndex: 1
        virtual void reset();

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
        MCAPI explicit EventScope(::PerfContextEvent eventType);

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
        // vIndex: 0
        virtual ~Timer() = default;

        // vIndex: 1
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
    MCAPI void incrementPacketReceivedInfo(uint);

    MCAPI void incrementPacketSentInfo(uint);

    MCAPI static class PerfContextTracker& getInstance();

    // NOLINTEND
};
