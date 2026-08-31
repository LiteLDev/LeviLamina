#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/NetworkBinderInterface.h"
#include "mc/external/webrtc/NetworkBindingResult.h"
#include "mc/external/webrtc/NetworkManagerBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class IPAddress; }
namespace webrtc { class Network; }
namespace webrtc { class NetworkMask; }
namespace webrtc { class NetworkMonitorFactory; }
namespace webrtc { class SocketFactory; }
// clang-format on

namespace webrtc {

class BasicNetworkManager : public ::webrtc::NetworkManagerBase,
                            public ::webrtc::NetworkBinderInterface,
                            public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb970bd;
    ::ll::UntypedStorage<8, 8>  mUnk2a4e23;
    ::ll::UntypedStorage<1, 1>  mUnk560b6c;
    ::ll::UntypedStorage<4, 4>  mUnkc2c26c;
    ::ll::UntypedStorage<8, 24> mUnk8f6830;
    ::ll::UntypedStorage<8, 8>  mUnk576a24;
    ::ll::UntypedStorage<8, 8>  mUnk9943df;
    ::ll::UntypedStorage<8, 8>  mUnkd5d9d2;
    ::ll::UntypedStorage<1, 1>  mUnk893d11;
    ::ll::UntypedStorage<1, 1>  mUnkb9c939;
    ::ll::UntypedStorage<8, 24> mUnk17367f;
    ::ll::UntypedStorage<8, 8>  mUnkac16a9;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicNetworkManager& operator=(BasicNetworkManager const&);
    BasicNetworkManager(BasicNetworkManager const&);
    BasicNetworkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicNetworkManager() /*override*/ = default;

    virtual void StartUpdating() /*override*/;

    virtual void StopUpdating() /*override*/;

    virtual void DumpNetworks() /*override*/;

    virtual void set_vpn_list(::std::vector<::webrtc::NetworkMask> const& vpn) /*override*/;

    virtual ::webrtc::NetworkBindingResult
    BindSocketToNetwork(int socket_fd, ::webrtc::IPAddress const& address) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicNetworkManager(
        ::webrtc::Environment const&     env,
        ::webrtc::SocketFactory*         socket_factory,
        ::webrtc::NetworkMonitorFactory* network_monitor_factory
    );

    MCNAPI bool
    CreateNetworks(bool include_ignored, ::std::vector<::std::unique_ptr<::webrtc::Network>>* networks) const;

    MCNAPI ::webrtc::IPAddress QueryDefaultLocalAddress(int family) const;

    MCNAPI void StartNetworkMonitor();

    MCNAPI void UpdateNetworksContinually();

    MCNAPI void UpdateNetworksOnce();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&     env,
        ::webrtc::SocketFactory*         socket_factory,
        ::webrtc::NetworkMonitorFactory* network_monitor_factory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $StartUpdating();

    MCNAPI void $StopUpdating();

    MCNAPI void $DumpNetworks();

    MCNAPI void $set_vpn_list(::std::vector<::webrtc::NetworkMask> const& vpn);

    MCNAPI ::webrtc::NetworkBindingResult $BindSocketToNetwork(int socket_fd, ::webrtc::IPAddress const& address);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNetworkBinderInterface();

    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForMdnsResponderProvider();

    MCNAPI static void** $vftableForDefaultLocalAddressProvider();
    // NOLINTEND
};

} // namespace webrtc
