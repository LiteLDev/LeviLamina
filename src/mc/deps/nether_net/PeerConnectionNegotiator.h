#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RefCountedObject.h"
#include "mc/external/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/external/webrtc/SetRemoteDescriptionObserverInterface.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class PeerConnectionNegotiator : public ::NetherNet::ContextProxy {
public:
    // PeerConnectionNegotiator inner types declare
    // clang-format off
    struct CreateSessionObserver;
    struct SetLocalDescriptionObserver;
    struct SetRemoteDescriptionObserver;
    // clang-format on

    // PeerConnectionNegotiator inner types define
    struct CreateSessionObserver : public ::webrtc::RefCountedObject<::webrtc::CreateSessionDescriptionObserver> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnk9601da;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateSessionObserver& operator=(CreateSessionObserver const&);
        CreateSessionObserver(CreateSessionObserver const&);
        CreateSessionObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnSuccess(::webrtc::SessionDescriptionInterface*) /*override*/;

        virtual void OnFailure(::webrtc::RTCError) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct SetLocalDescriptionObserver
    : public ::webrtc::RefCountedObject<::webrtc::SetLocalDescriptionObserverInterface> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnkdb34ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetLocalDescriptionObserver& operator=(SetLocalDescriptionObserver const&);
        SetLocalDescriptionObserver(SetLocalDescriptionObserver const&);
        SetLocalDescriptionObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct SetRemoteDescriptionObserver
    : public ::webrtc::RefCountedObject<::webrtc::SetRemoteDescriptionObserverInterface> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnk1e160a;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetRemoteDescriptionObserver& operator=(SetRemoteDescriptionObserver const&);
        SetRemoteDescriptionObserver(SetRemoteDescriptionObserver const&);
        SetRemoteDescriptionObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf91d5d;
    ::ll::UntypedStorage<8, 8>  mUnkae16cc;
    ::ll::UntypedStorage<8, 64> mUnk7c4ecf;
    ::ll::UntypedStorage<8, 8>  mUnk26e020;
    ::ll::UntypedStorage<8, 16> mUnk5cf15d;
    ::ll::UntypedStorage<8, 8>  mUnk56df10;
    ::ll::UntypedStorage<8, 8>  mUnk6816fa;
    ::ll::UntypedStorage<8, 8>  mUnkea39ee;
    ::ll::UntypedStorage<8, 8>  mUnk32cbed;
    ::ll::UntypedStorage<8, 48> mUnk7fb2e4;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionNegotiator& operator=(PeerConnectionNegotiator const&);
    PeerConnectionNegotiator(PeerConnectionNegotiator const&);
    PeerConnectionNegotiator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PeerConnectionNegotiator() /*override*/ = default;

    virtual ::NetherNet::ESessionError checkTimeout(::std::chrono::seconds) const;

    virtual void onRemoteAnswer(::NetherNet::ConnectResponse const&);

    virtual void onRemoteError(::NetherNet::ConnectError const&);

    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const&) = 0;

    virtual void _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const&) = 0;

    virtual void _onSetLocalDescription(::webrtc::RTCError) = 0;

    virtual void _onSetRemoteDescription(::webrtc::RTCError) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
