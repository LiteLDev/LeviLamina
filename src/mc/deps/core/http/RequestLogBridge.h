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
        ::ll::UntypedStorage<8, 24> mUnka86ce5;
        ::ll::UntypedStorage<8, 32> mUnk524cf8;
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
        ::ll::UntypedStorage<8, 32> mUnk6397c8;
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
        ::ll::UntypedStorage<8, 32> mUnkceccdb;
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
        ::ll::UntypedStorage<8, 32> mUnk34bfd7;
        ::ll::UntypedStorage<8, 32> mUnkd0fb03;
        ::ll::UntypedStorage<8, 24> mUnk8fbaa3;
        ::ll::UntypedStorage<4, 4>  mUnk10ab41;
        ::ll::UntypedStorage<8, 32> mUnk624a79;
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
        ::ll::UntypedStorage<8, 24> mUnkd1cb74;
        ::ll::UntypedStorage<8, 24> mUnka61c66;
        ::ll::UntypedStorage<8, 24> mUnka914c0;
        ::ll::UntypedStorage<8, 24> mUnk9d66f0;
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
        ::ll::UntypedStorage<8, 24>   mUnkbb4c35;
        ::ll::UntypedStorage<8, 24>   mUnk9f52bd;
        ::ll::UntypedStorage<8, 24>   mUnk3b9e30;
        ::ll::UntypedStorage<8, 24>   mUnk9eac23;
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
