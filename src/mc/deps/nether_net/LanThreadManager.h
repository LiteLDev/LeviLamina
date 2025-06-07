#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/Controller.h"
#include "mc/external/rtc/Thread.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct ThreadInit; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class LanThreadManager : public ::NetherNet::ContextProxy,
                         public ::rtc::Thread,
                         public ::sigslot::has_slots<::sigslot::single_threaded>,
                         public ::NetherNet::RunLoop::Controller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk15d021;
    ::ll::UntypedStorage<8, 16>  mUnk1df5ad;
    ::ll::UntypedStorage<8, 8>   mUnk91c766;
    ::ll::UntypedStorage<8, 128> mUnk1aa682;
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
    MCNAPI void BeginNetworkDiscovery();

    MCNAPI void BroadcastTask();

    MCNAPI void CreateEncryptedBroadcastSocket();

    MCNAPI void DestroyLanResources();

    MCNAPI void DisableBroadcastDiscovery(::NetherNet::NetworkID id);

    MCNAPI void EnableBroadcastDiscovery(::NetherNet::NetworkID id);

    MCNAPI void Initialize(
        char const*                    threadName,
        ::NetherNet::ThreadInit const& threadInit,
        uint64                         applicationId,
        ushort                         port,
        ::std::chrono::milliseconds    interval
    );

    MCNAPI bool IsBroadcastDiscoveryEnabled(::NetherNet::NetworkID id);

    MCNAPI explicit LanThreadManager(::NetherNet::ContextProxy const& ctx);

    MCNAPI void OnNetworkDiscoveryComplete();

    MCNAPI void OnPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const& packet);

    MCNAPI void SendLanBroadcastRequest(::std::unique_ptr<::rtc::AsyncPacketSocket>& socket, ::NetherNet::NetworkID id);

    MCNAPI void SendLanBroadcastResponse(
        ::rtc::SocketAddress const&                 destination,
        ::NetherNet::DiscoveryResponsePacket const& packet
    );

    MCNAPI void SendSignalingMessageTo(
        ::NetherNet::NetworkID networkIdFrom,
        ::NetherNet::NetworkID networkIdTo,
        ::std::string const&   message
    );

    MCNAPI void SendSignalingMessageTo(
        ::std::unique_ptr<::rtc::AsyncPacketSocket>& socket,
        ::NetherNet::NetworkID                       networkIdFrom,
        ::NetherNet::NetworkID                       networkIdTo,
        ::std::string const&                         message
    );

    MCNAPI ::std::error_code SendToHelper(
        ::std::unique_ptr<::rtc::AsyncPacketSocket>& socket,
        void const*                                  data,
        uint64                                       size,
        ::rtc::SocketAddress const&                  addr
    );

    MCNAPI void Shutdown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::ContextProxy const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForThread();

    MCNAPI static void** $vftableForContextProxy();
    // NOLINTEND
};

} // namespace NetherNet
