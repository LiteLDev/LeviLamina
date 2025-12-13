#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class RTCStatsReport; }
// clang-format on

namespace NetherNet {

class NetworkSession : public ::NetherNet::ContextProxy {
public:
    // NetworkSession inner types define
    enum class Direction : int {
        Incoming = 0,
        Outgoing = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk2aae3b;
    ::ll::UntypedStorage<1, 1>   mUnk3ebc21;
    ::ll::UntypedStorage<1, 1>   mUnk266d1b;
    ::ll::UntypedStorage<8, 24>  mUnkb2ad91;
    ::ll::UntypedStorage<8, 8>   mUnk75c52e;
    ::ll::UntypedStorage<8, 8>   mUnk464e88;
    ::ll::UntypedStorage<8, 8>   mUnkea75f3;
    ::ll::UntypedStorage<4, 4>   mUnk4e1a8f;
    ::ll::UntypedStorage<8, 8>   mUnk11904d;
    ::ll::UntypedStorage<8, 72>  mUnk3ecbc0;
    ::ll::UntypedStorage<8, 72>  mUnk905b39;
    ::ll::UntypedStorage<8, 728> mUnkd1f02b;
    ::ll::UntypedStorage<8, 344> mUnk38831a;
    ::ll::UntypedStorage<8, 32>  mUnk577b94;
    ::ll::UntypedStorage<8, 32>  mUnk48d429;
    ::ll::UntypedStorage<8, 24>  mUnkdad896;
    ::ll::UntypedStorage<8, 24>  mUnk1fc5ca;
    ::ll::UntypedStorage<8, 32>  mUnk369ba7;
    ::ll::UntypedStorage<8, 32>  mUnkb1ff22;
    ::ll::UntypedStorage<4, 8>   mUnk6ac63a;
    ::ll::UntypedStorage<8, 8>   mUnk5e8ac3;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSession() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CheckUpdateStats();

    MCNAPI void CloseWithReason(::NetherNet::ESessionError error) const;

    MCNAPI void _onDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> dataChannel);

    MCNAPI void _onStatsDelivered(::webrtc::RTCStatsReport const& report);

    MCNAPI void onIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState newState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
