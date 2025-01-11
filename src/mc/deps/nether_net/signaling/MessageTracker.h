#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingEventHandler.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet::SignalingEvents { struct ErrorReceived; }
namespace NetherNet::SignalingEvents { struct MessageAccepted; }
namespace NetherNet::SignalingEvents { struct MessageDelivered; }
namespace NetherNet::SignalingEvents { struct MessageSent; }
// clang-format on

namespace NetherNet {

class MessageTracker : public ::NetherNet::ISignalingEventHandler {
public:
    // MessageTracker inner types declare
    // clang-format off
    struct MessageStatus;
    // clang-format on

    // MessageTracker inner types define
    struct MessageStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk27eea1;
        ::ll::UntypedStorage<8, 8>  mUnk2726eb;
        ::ll::UntypedStorage<8, 64> mUnk2e3abb;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::NetherNet::MessageTracker::MessageStatus& operator=(::NetherNet::MessageTracker::MessageStatus&&);

        MCAPI ~MessageStatus();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk7df608;
    ::ll::UntypedStorage<8, 56> mUnkd758ff;
    ::ll::UntypedStorage<8, 16> mUnka072de;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageTracker& operator=(MessageTracker const&);
    MessageTracker(MessageTracker const&);
    MessageTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessageTracker() /*override*/;

    // vIndex: 7
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageSent const& event) /*override*/;

    // vIndex: 4
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageAccepted const& event) /*override*/;

    // vIndex: 3
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageDelivered const& event) /*override*/;

    // vIndex: 1
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::ErrorReceived const& event) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MessageTracker(::NetherNet::IWebRTCSignalingInterface* signalingChannel);

    MCAPI void _tryGetValue(
        ::std::string const&                                                 messageId,
        ::std::function<void(::NetherNet::MessageTracker::MessageStatus&)>&& fn
    );

    MCAPI void add(::std::string const& messageId, ::std::function<void(::NetherNet::ESessionError)>&& onComplete);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::IWebRTCSignalingInterface* signalingChannel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageSent const& event);

    MCAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageAccepted const& event);

    MCAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageDelivered const& event);

    MCAPI void $OnSignalingEvent(::NetherNet::SignalingEvents::ErrorReceived const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
