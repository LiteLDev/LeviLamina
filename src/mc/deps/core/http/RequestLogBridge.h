#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock::Http {

class RequestLogBridge {
public:
    // RequestLogBridge inner types declare
    // clang-format off
    struct CompleteEvent;
    struct FailEvent;
    struct InFlight;
    struct ProgressEvent;
    struct StartEvent;
    struct DrainedEvents;
    struct SharedState;
    // clang-format on

    // RequestLogBridge inner types define
    struct CompleteEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkfc9db9;
        ::ll::UntypedStorage<4, 4>  mUnk96efe5;
        ::ll::UntypedStorage<8, 24> mUnk3f476a;
        ::ll::UntypedStorage<8, 32> mUnk385792;
        ::ll::UntypedStorage<1, 1>  mUnk30121b;
        ::ll::UntypedStorage<8, 8>  mUnk5c236b;
        ::ll::UntypedStorage<8, 8>  mUnke6ebf9;
        // NOLINTEND

    public:
        // prevent constructor by default
        CompleteEvent& operator=(CompleteEvent const&);
        CompleteEvent(CompleteEvent const&);
        CompleteEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CompleteEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FailEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9c7342;
        ::ll::UntypedStorage<8, 32> mUnk60a828;
        ::ll::UntypedStorage<8, 8>  mUnke575c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        FailEvent& operator=(FailEvent const&);
        FailEvent(FailEvent const&);
        FailEvent();
    };

    struct InFlight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk6acf18;
        ::ll::UntypedStorage<8, 8>  mUnk283e13;
        ::ll::UntypedStorage<8, 8>  mUnk90ac1e;
        ::ll::UntypedStorage<8, 32> mUnk6951c0;
        ::ll::UntypedStorage<1, 1>  mUnkabe8a0;
        ::ll::UntypedStorage<1, 1>  mUnk8594aa;
        ::ll::UntypedStorage<8, 8>  mUnkdeeb09;
        // NOLINTEND

    public:
        // prevent constructor by default
        InFlight& operator=(InFlight const&);
        InFlight(InFlight const&);
        InFlight();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InFlight();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ProgressEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc3dd02;
        ::ll::UntypedStorage<8, 8> mUnk5b7caf;
        ::ll::UntypedStorage<8, 8> mUnk52039c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProgressEvent& operator=(ProgressEvent const&);
        ProgressEvent(ProgressEvent const&);
        ProgressEvent();
    };

    struct StartEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkddcff8;
        ::ll::UntypedStorage<8, 32> mUnk3b0d2b;
        ::ll::UntypedStorage<8, 32> mUnkafe800;
        ::ll::UntypedStorage<8, 24> mUnk631953;
        ::ll::UntypedStorage<4, 4>  mUnk10ab41;
        ::ll::UntypedStorage<8, 32> mUnk8ebe7f;
        ::ll::UntypedStorage<1, 1>  mUnkd926c2;
        ::ll::UntypedStorage<8, 8>  mUnk83406c;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartEvent& operator=(StartEvent const&);
        StartEvent(StartEvent const&);
        StartEvent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StartEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DrainedEvents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkf8c72a;
        ::ll::UntypedStorage<8, 24> mUnka8a6cf;
        ::ll::UntypedStorage<8, 24> mUnk3355fc;
        ::ll::UntypedStorage<8, 24> mUnk652a8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        DrainedEvents& operator=(DrainedEvents const&);
        DrainedEvents(DrainedEvents const&);
        DrainedEvents();
    };

    struct SharedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 3600> mUnk509790;
        ::ll::UntypedStorage<8, 64>   mUnk2be308;
        ::ll::UntypedStorage<8, 24>   mUnkd268ed;
        ::ll::UntypedStorage<8, 24>   mUnkf14373;
        ::ll::UntypedStorage<8, 24>   mUnk4eb26a;
        ::ll::UntypedStorage<8, 24>   mUnk89d535;
        ::ll::UntypedStorage<1, 1>    mUnk394272;
        // NOLINTEND

    public:
        // prevent constructor by default
        SharedState& operator=(SharedState const&);
        SharedState(SharedState const&);
        SharedState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SharedState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::
        BasicLockbox<::Bedrock::Http::RequestLogBridge::SharedState, ::Bedrock::Threading::Mutex>&
        s_state();
    // NOLINTEND
};

} // namespace Bedrock::Http
