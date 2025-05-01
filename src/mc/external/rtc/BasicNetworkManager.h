#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/NetworkBinderInterface.h"
#include "mc/external/rtc/NetworkBindingResult.h"
#include "mc/external/rtc/NetworkManagerBase.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class NetworkMask; }
namespace rtc { class NetworkMonitorFactory; }
namespace rtc { class SocketFactory; }
namespace sigslot { class single_threaded; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace rtc {

class BasicNetworkManager : public ::rtc::NetworkManagerBase,
                            public ::rtc::NetworkBinderInterface,
                            public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd41830;
    ::ll::UntypedStorage<1, 1>  mUnk449975;
    ::ll::UntypedStorage<4, 4>  mUnk568f24;
    ::ll::UntypedStorage<8, 16> mUnk24ab87;
    ::ll::UntypedStorage<8, 24> mUnk7b0d29;
    ::ll::UntypedStorage<8, 8>  mUnk58bcb8;
    ::ll::UntypedStorage<8, 8>  mUnkec27fb;
    ::ll::UntypedStorage<8, 8>  mUnk4ff08d;
    ::ll::UntypedStorage<1, 1>  mUnk45de38;
    ::ll::UntypedStorage<1, 1>  mUnk631047;
    ::ll::UntypedStorage<8, 24> mUnk31878a;
    ::ll::UntypedStorage<8, 8>  mUnkf2a3b0;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicNetworkManager& operator=(BasicNetworkManager const&);
    BasicNetworkManager(BasicNetworkManager const&);
    BasicNetworkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~BasicNetworkManager() /*override*/ = default;

    // vIndex: 3
    virtual void StartUpdating() /*override*/;

    // vIndex: 4
    virtual void StopUpdating() /*override*/;

    // vIndex: 8
    virtual void DumpNetworks() /*override*/;

    // vIndex: 9
    virtual void set_vpn_list(::std::vector<::rtc::NetworkMask> const&) /*override*/;

    // vIndex: 0
    virtual ::rtc::NetworkBindingResult BindSocketToNetwork(int, ::rtc::IPAddress const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicNetworkManager(::rtc::NetworkMonitorFactory*, ::rtc::SocketFactory*, ::webrtc::FieldTrialsView const*);

    MCNAPI bool CreateNetworks(bool, ::std::vector<::std::unique_ptr<::rtc::Network>>*) const;

    MCNAPI bool IsConfiguredVpn(::rtc::IPAddress, int) const;

    MCNAPI bool IsIgnoredNetwork(::rtc::Network const&) const;

    MCNAPI void OnNetworksChanged();

    MCNAPI ::rtc::IPAddress QueryDefaultLocalAddress(int) const;

    MCNAPI void StartNetworkMonitor();

    MCNAPI void StopNetworkMonitor();

    MCNAPI void UpdateNetworksContinually();

    MCNAPI void UpdateNetworksOnce();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::NetworkMonitorFactory*, ::rtc::SocketFactory*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMdnsResponderProvider();

    MCNAPI static void** $vftableForNetworkBinderInterface();

    MCNAPI static void** $vftableForDefaultLocalAddressProvider();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
