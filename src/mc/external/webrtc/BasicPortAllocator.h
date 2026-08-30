#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PortAllocator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class LocalNetworkAccessPermissionFactoryInterface; }
namespace webrtc { class NetworkManager; }
namespace webrtc { class NetworkMask; }
namespace webrtc { class PacketSocketFactory; }
namespace webrtc { class PortAllocatorSession; }
namespace webrtc { class RelayPortFactoryInterface; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace webrtc {

class BasicPortAllocator : public ::webrtc::PortAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk72d215;
    ::ll::UntypedStorage<8, 8>  mUnkde1744;
    ::ll::UntypedStorage<8, 8>  mUnk1749ce;
    ::ll::UntypedStorage<4, 4>  mUnk9bae5d;
    ::ll::UntypedStorage<8, 16> mUnkb81f45;
    ::ll::UntypedStorage<8, 8>  mUnk2ae5c8;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicPortAllocator& operator=(BasicPortAllocator const&);
    BasicPortAllocator(BasicPortAllocator const&);
    BasicPortAllocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicPortAllocator() /*override*/ = default;

    virtual void SetNetworkIgnoreMask(int network_ignore_mask) /*override*/;

    virtual ::webrtc::PortAllocatorSession* CreateSessionInternal(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    ) /*override*/;

    virtual void SetVpnList(::std::vector<::webrtc::NetworkMask> const& vpn_list) /*override*/;

    virtual bool MdnsObfuscationEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicPortAllocator(
        ::webrtc::Environment const&                                              env,
        ::webrtc::NetworkManager*                                                 network_manager,
        ::webrtc::PacketSocketFactory*                                            socket_factory,
        ::webrtc::TurnCustomizer*                                                 turn_customizer,
        ::webrtc::RelayPortFactoryInterface*                                      relay_port_factory,
        ::std::unique_ptr<::webrtc::LocalNetworkAccessPermissionFactoryInterface> lna_permission_factory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&                                              env,
        ::webrtc::NetworkManager*                                                 network_manager,
        ::webrtc::PacketSocketFactory*                                            socket_factory,
        ::webrtc::TurnCustomizer*                                                 turn_customizer,
        ::webrtc::RelayPortFactoryInterface*                                      relay_port_factory,
        ::std::unique_ptr<::webrtc::LocalNetworkAccessPermissionFactoryInterface> lna_permission_factory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetNetworkIgnoreMask(int network_ignore_mask);

    MCNAPI ::webrtc::PortAllocatorSession* $CreateSessionInternal(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    );

    MCNAPI void $SetVpnList(::std::vector<::webrtc::NetworkMask> const& vpn_list);

    MCNAPI bool $MdnsObfuscationEnabled() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
