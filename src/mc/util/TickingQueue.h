#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickingQueue {
public:
    // TickingQueue inner types declare
    // clang-format off
    class OneshotStage;
    class PollingStage;
    class SleepStage;
    class Stage;
    class WaitForCallbackStage;
    class WaitForSignalStage;
    // clang-format on

    // TickingQueue inner types define
    class Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka8e8d0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stage& operator=(Stage const&);
        Stage(Stage const&);
        Stage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Stage() = default;

        // vIndex: 1
        virtual void init() = 0;

        // vIndex: 2
        virtual bool tick() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class OneshotStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkad904f;
        // NOLINTEND

    public:
        // prevent constructor by default
        OneshotStage& operator=(OneshotStage const&);
        OneshotStage(OneshotStage const&);
        OneshotStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void init() /*override*/;

        // vIndex: 2
        virtual bool tick() /*override*/;

        // vIndex: 0
        virtual ~OneshotStage() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class PollingStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkfd1804;
        ::ll::UntypedStorage<8, 64> mUnkf9c2b2;
        // NOLINTEND

    public:
        // prevent constructor by default
        PollingStage& operator=(PollingStage const&);
        PollingStage(PollingStage const&);
        PollingStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void init() /*override*/;

        // vIndex: 2
        virtual bool tick() /*override*/;

        // vIndex: 0
        virtual ~PollingStage() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class WaitForCallbackStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd65908;
        ::ll::UntypedStorage<1, 1>  mUnk91a803;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaitForCallbackStage& operator=(WaitForCallbackStage const&);
        WaitForCallbackStage(WaitForCallbackStage const&);
        WaitForCallbackStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void init() /*override*/;

        // vIndex: 2
        virtual bool tick() /*override*/;

        // vIndex: 0
        virtual ~WaitForCallbackStage() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class WaitForSignalStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdc7ca4;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaitForSignalStage& operator=(WaitForSignalStage const&);
        WaitForSignalStage(WaitForSignalStage const&);
        WaitForSignalStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void init() /*override*/;

        // vIndex: 2
        virtual bool tick() /*override*/;

        // vIndex: 0
        virtual ~WaitForSignalStage() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class SleepStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnkbe3fd7;
        // NOLINTEND

    public:
        // prevent constructor by default
        SleepStage& operator=(SleepStage const&);
        SleepStage(SleepStage const&);
        SleepStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual void init() /*override*/;

        // vIndex: 2
        virtual bool tick() /*override*/;

        // vIndex: 0
        virtual ~SleepStage() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5bc457;
    ::ll::UntypedStorage<4, 4>  mUnk174484;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingQueue& operator=(TickingQueue const&);
    TickingQueue(TickingQueue const&);
    TickingQueue();
};
