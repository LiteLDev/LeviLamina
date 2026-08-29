#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/util/Signal.h"

class TickingQueue {
public:
    // TickingQueue inner types declare
    // clang-format off
    class Stage;
    class OneshotStage;
    class PollingStage;
    class SleepStage;
    class WaitForCallbackStage;
    class WaitForSignalStage;
    // clang-format on

    // TickingQueue inner types define
    class Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mInitRan;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Stage();

        virtual void init() = 0;

        virtual bool tick() = 0;
        // NOLINTEND
    };

    class OneshotStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mInitFn;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class PollingStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mInitFn;
        ::ll::TypedStorage<8, 64, ::std::function<bool()>> mTickFn;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class SleepStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::BasicTimer> mBasicTimer;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class WaitForCallbackStage : public ::TickingQueue::Stage {
    public:
        // WaitForCallbackStage inner types define
        using Callback = ::std::function<void()>;

        using InitFunction = ::std::function<void(::std::function<void()>)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void()>)>> mInitFn;
        ::ll::TypedStorage<1, 1, ::Signal>                                        mSignal;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

    class WaitForSignalStage : public ::TickingQueue::Stage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Signal&> mSignal;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaitForSignalStage& operator=(WaitForSignalStage const&);
        WaitForSignalStage(WaitForSignalStage const&);
        WaitForSignalStage();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void init() /*override*/;

        virtual bool tick() /*override*/;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::TickingQueue::Stage>>> mStages;
    ::ll::TypedStorage<4, 4, uint>                                                     mCurrentStage;
    // NOLINTEND
};
