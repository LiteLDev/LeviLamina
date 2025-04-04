#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/Controller.h"
#include "mc/external/rtc/Thread.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct ThreadInit; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace NetherNet {

class LanThreadManager : public ::NetherNet::ContextProxy,
                         public ::NetherNet::RunLoop::Controller,
                         public ::rtc::Thread,
                         public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk15d021;
    ::ll::UntypedStorage<8, 16>  mUnk1df5ad;
    ::ll::UntypedStorage<8, 8>   mUnkf60678;
    ::ll::UntypedStorage<8, 128> mUnk4506fd;
    ::ll::UntypedStorage<8, 8>   mUnk8c874b;
    ::ll::UntypedStorage<8, 80>  mUnk604495;
    ::ll::UntypedStorage<8, 8>   mUnk3774a6;
    ::ll::UntypedStorage<8, 8>   mUnk449e9b;
    ::ll::UntypedStorage<2, 2>   mUnk94a6fe;
    ::ll::UntypedStorage<8, 8>   mUnkb98911;
    ::ll::UntypedStorage<8, 16>  mUnk2ba3a7;
    ::ll::UntypedStorage<8, 16>  mUnkba8605;
    // NOLINTEND

public:
    // prevent constructor by default
    LanThreadManager& operator=(LanThreadManager const&);
    LanThreadManager(LanThreadManager const&);
    LanThreadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ~LanThreadManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void BeginNetworkDiscovery();

    MCAPI void BroadcastTask();

    MCAPI void CreateEncryptedBroadcastSocket();

    MCAPI void DestroyLanResources();

    MCAPI void DisableBroadcastDiscovery(::NetherNet::NetworkID id);

    MCAPI void EnableBroadcastDiscovery(::NetherNet::NetworkID id);

    MCAPI void Initialize(
        char const*                    threadInit,
        ::NetherNet::ThreadInit const& applicationId,
        uint64                         port,
        ushort                         interval,
        ::std::chrono::milliseconds    threadName
    );

    MCAPI bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID id);

    MCAPI explicit LanThreadManager(::NetherNet::ContextProxy const& ctx);

    MCAPI void OnNetworkDiscoveryComplete();

    MCAPI void OnPacket(::rtc::AsyncPacketSocket* packet, ::rtc::ReceivedPacket const&);

    MCAPI void SendLanBroadcastRequest(::std::unique_ptr<::rtc::AsyncPacketSocket>& socket, ::NetherNet::NetworkID id);

    MCAPI void SendLanBroadcastResponse(
        ::rtc::SocketAddress const&                 destination,
        ::NetherNet::DiscoveryResponsePacket const& packet
    );

    MCAPI void SendSignalingMessageTo(
        ::NetherNet::NetworkID networkIdFrom,
        ::NetherNet::NetworkID networkIdTo,
        ::std::string const&   message
    );

    MCAPI void SendSignalingMessageTo(
        ::std::unique_ptr<::rtc::AsyncPacketSocket>& socket,
        ::NetherNet::NetworkID                       networkIdFrom,
        ::NetherNet::NetworkID                       networkIdTo,
        ::std::string const&                         message
    );

    MCAPI ::std::error_code SendToHelper(
        ::std::unique_ptr<::rtc::AsyncPacketSocket>& socket,
        void const*                                  data,
        uint64                                       size,
        ::rtc::SocketAddress const&                  addr
    );

    MCAPI void Shutdown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::ContextProxy const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForThread();

    MCAPI static void** $vftableForContextProxy();
    // NOLINTEND
};

} // namespace NetherNet
