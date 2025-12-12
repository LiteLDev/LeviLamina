#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/external/rtc/RefCountedObject.h"
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/external/webrtc/SetRemoteDescriptionObserverInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class PeerConnectionObserver; }
namespace webrtc { class PeerConnectionFactory; }
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
    struct SetLocalDescriptionObserver
    : public ::rtc::RefCountedObject<::webrtc::SetLocalDescriptionObserverInterface> {
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
        // vIndex: 3
        virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError result) /*override*/;

        // vIndex: 2
        virtual ~SetLocalDescriptionObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSetLocalDescriptionComplete(::webrtc::RTCError result);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct SetRemoteDescriptionObserver
    : public ::rtc::RefCountedObject<::webrtc::SetRemoteDescriptionObserverInterface> {
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
        // vIndex: 3
        virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError result) /*override*/;

        // vIndex: 2
        virtual ~SetRemoteDescriptionObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSetRemoteDescriptionComplete(::webrtc::RTCError result);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct CreateSessionObserver : public ::rtc::RefCountedObject<::webrtc::CreateSessionDescriptionObserver> {
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
        // vIndex: 3
        virtual void OnSuccess(::webrtc::SessionDescriptionInterface* description) /*override*/;

        // vIndex: 4
        virtual void OnFailure(::webrtc::RTCError error) /*override*/;

        // vIndex: 2
        virtual ~CreateSessionObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* description);

        MCNAPI void $OnFailure(::webrtc::RTCError error);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf91d5d;
    ::ll::UntypedStorage<8, 8>  mUnkae16cc;
    ::ll::UntypedStorage<8, 64> mUnk7c4ecf;
    ::ll::UntypedStorage<8, 8>  mUnk26e020;
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
    // vIndex: 0
    virtual ~PeerConnectionNegotiator() /*override*/;

    // vIndex: 10
    virtual ::NetherNet::ESessionError checkTimeout(::std::chrono::seconds) const;

    // vIndex: 11
    virtual void onRemoteAnswer(::NetherNet::ConnectResponse const&);

    // vIndex: 12
    virtual void onRemoteError(::NetherNet::ConnectError const&);

    // vIndex: 13
    virtual void onRemoteIceCandidate(::NetherNet::CandidateAdd const&) = 0;

    // vIndex: 14
    virtual void _onCreateSession(::webrtc::RTCErrorOr<::webrtc::SessionDescriptionInterface*> const&) = 0;

    // vIndex: 15
    virtual void _onSetLocalDescription(::webrtc::RTCError) = 0;

    // vIndex: 16
    virtual void _onSetRemoteDescription(::webrtc::RTCError) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PeerConnectionNegotiator(
        ::NetherNet::ContextProxy const&                                           ctx,
        ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory>                   factory,
        ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver>               observer,
        ::brstd::move_only_function<void(::std::variant<
                                         ::NetherNet::ConnectRequest,
                                         ::NetherNet::ConnectResponse,
                                         ::NetherNet::ConnectError,
                                         ::NetherNet::CandidateAdd> const&) const> sendMessage,
        uint64                                                                     sessionId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNet::ContextProxy const&                                           ctx,
        ::webrtc::scoped_refptr<::webrtc::PeerConnectionFactory>                   factory,
        ::webrtc::scoped_refptr<::NetherNet::PeerConnectionObserver>               observer,
        ::brstd::move_only_function<void(::std::variant<
                                         ::NetherNet::ConnectRequest,
                                         ::NetherNet::ConnectResponse,
                                         ::NetherNet::ConnectError,
                                         ::NetherNet::CandidateAdd> const&) const> sendMessage,
        uint64                                                                     sessionId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NetherNet::ESessionError $checkTimeout(::std::chrono::seconds) const;

    MCNAPI void $onRemoteAnswer(::NetherNet::ConnectResponse const&);

    MCNAPI void $onRemoteError(::NetherNet::ConnectError const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
