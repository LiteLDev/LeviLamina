#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/PerfContextEvent.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        MCAPI void reset$();

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

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void reset$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&);
    PerfContextTracker(PerfContextTracker const&);
    PerfContextTracker();

public:
    // NOLINTBEGIN
    MCAPI void incrementPacketReceivedInfo(uint packetSize);

    MCAPI void incrementPacketSentInfo(uint packetSize);

    MCAPI static class PerfContextTracker& getInstance();

    // NOLINTEND
};
