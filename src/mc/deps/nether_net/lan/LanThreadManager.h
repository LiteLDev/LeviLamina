#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ILanDiscovery.h"
#include "mc/deps/nether_net/lan/Controller.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Thread.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class LanThreadManager : public ::NetherNet::ContextProxy,
                         public ::webrtc::Thread,
                         public ::sigslot::has_slots<::sigslot::single_threaded>,
                         public ::NetherNet::ILanDiscovery,
                         public ::NetherNet::RunLoop::Controller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk15d021;
    ::ll::UntypedStorage<8, 16>  mUnk481fa8;
    ::ll::UntypedStorage<8, 8>   mUnk494678;
    ::ll::UntypedStorage<8, 128> mUnk1aa682;
    ::ll::UntypedStorage<8, 8>   mUnkcacbf5;
    ::ll::UntypedStorage<8, 80>  mUnk4d2572;
    ::ll::UntypedStorage<8, 8>   mUnka36a37;
    ::ll::UntypedStorage<8, 8>   mUnk449e9b;
    ::ll::UntypedStorage<2, 2>   mUnk94a6fe;
    ::ll::UntypedStorage<8, 8>   mUnkb98911;
    ::ll::UntypedStorage<8, 16>  mUnk2ba3a7;
    ::ll::UntypedStorage<8, 16>  mUnk472898;
    // NOLINTEND

public:
    // prevent constructor by default
    LanThreadManager& operator=(LanThreadManager const&);
    LanThreadManager(LanThreadManager const&);
    LanThreadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanThreadManager() /*override*/ = default;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) /*override*/;

    virtual bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID) /*override*/;

    virtual void EnableBroadcastDiscovery(::NetherNet::NetworkID) /*override*/;

    virtual void DisableBroadcastDiscovery(::NetherNet::NetworkID) /*override*/;

    virtual void AddLanHost(::NetherNet::NetworkID, ::std::string const&, int) /*override*/;

    virtual void RemoveLanHost(::NetherNet::NetworkID) /*override*/;

    virtual void SendLanBroadcastResponse(
        ::webrtc::SocketAddress const&,
        ::NetherNet::NetworkID,
        ::std::vector<::std::byte>
    ) /*override*/;

    virtual void
        SendSignalingMessageTo(::NetherNet::NetworkID, ::NetherNet::NetworkID, ::std::vector<::std::byte>) /*override*/;

    virtual bool IsNetworkIdOnLan(::NetherNet::NetworkID) /*override*/;

    virtual void Suspend() /*override*/;

    virtual void Resume() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
