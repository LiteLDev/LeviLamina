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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk954db5;
        ::ll::UntypedStorage<8, 8> mUnk3c6902;
        // NOLINTEND

    public:
        // prevent constructor by default
        Duration& operator=(Duration const&);
        Duration(Duration const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Duration();

        // vIndex: 1
        virtual void reset();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Duration();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class Timer : public ::PerfContextTracker::Duration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk93228d;
        ::ll::UntypedStorage<8, 8> mUnk5ef954;
        // NOLINTEND

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void reset() /*override*/;

        // vIndex: 0
        virtual ~Timer() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class EventScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkad1144;
        ::ll::UntypedStorage<8, 40> mUnk7fb3d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        EventScope& operator=(EventScope const&);
        EventScope(EventScope const&);
        EventScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit EventScope(::PerfContextEvent eventType);

        MCNAPI ~EventScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::PerfContextEvent eventType);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk7bb973;
    ::ll::UntypedStorage<1, 1>   mUnkee6e42;
    ::ll::UntypedStorage<8, 32>  mUnkc120fe;
    ::ll::UntypedStorage<8, 40>  mUnkeefdc7;
    ::ll::UntypedStorage<8, 288> mUnk7e0308;
    ::ll::UntypedStorage<8, 200> mUnk8e863b;
    ::ll::UntypedStorage<4, 4>   mUnkf2b035;
    ::ll::UntypedStorage<4, 4>   mUnke5955e;
    ::ll::UntypedStorage<4, 4>   mUnk4f5d25;
    ::ll::UntypedStorage<4, 4>   mUnkaed369;
    ::ll::UntypedStorage<4, 4>   mUnkccc016;
    ::ll::UntypedStorage<4, 4>   mUnk66f8d6;
    ::ll::UntypedStorage<4, 4>   mUnk800a03;
    // NOLINTEND

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&);
    PerfContextTracker(PerfContextTracker const&);
    PerfContextTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _reset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PerfContextTracker& getInstance();
    // NOLINTEND
};
