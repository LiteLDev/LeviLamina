#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/nether_net/ILanEventHandler.h"
#include "mc/deps/nether_net/ISignalingEventHandler.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
namespace NetherNet::SignalingEvents { struct ErrorReceived; }
namespace NetherNet::SignalingEvents { struct MessageAccepted; }
namespace NetherNet::SignalingEvents { struct MessageDelivered; }
namespace NetherNet::SignalingEvents { struct MessageReceived; }
namespace NetherNet::SignalingEvents { struct MessageSent; }
namespace NetherNet::SignalingEvents { struct PingSent; }
// clang-format on

class FranchiseSignalServiceSigninJob : public ::NetherNet::ISignalingEventHandler,
                                        public ::NetherNet::ILanEventHandler,
                                        public ::Bedrock::Threading::EnableQueueForMainThread,
                                        public ::std::enable_shared_from_this<::FranchiseSignalServiceSigninJob> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf92ba4;
    ::ll::UntypedStorage<8, 16> mUnk23468d;
    ::ll::UntypedStorage<8, 16> mUnk587e35;
    ::ll::UntypedStorage<8, 16> mUnk5f28e9;
    ::ll::UntypedStorage<8, 64> mUnk620878;
    ::ll::UntypedStorage<8, 64> mUnk84afca;
    // NOLINTEND

public:
    // prevent constructor by default
    FranchiseSignalServiceSigninJob& operator=(FranchiseSignalServiceSigninJob const&);
    FranchiseSignalServiceSigninJob(FranchiseSignalServiceSigninJob const&);
    FranchiseSignalServiceSigninJob();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FranchiseSignalServiceSigninJob() /*override*/ = default;

    // vIndex: 7
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageSent const&) /*override*/;

    // vIndex: 6
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const&) /*override*/;

    // vIndex: 5
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::PingSent const&) /*override*/;

    // vIndex: 4
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageAccepted const&) /*override*/;

    // vIndex: 3
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageDelivered const&) /*override*/;

    // vIndex: 1
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::ErrorReceived const&) /*override*/;

    // vIndex: 4
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&) /*override*/;

    // vIndex: 3
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&) /*override*/;
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
