#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/PortAllocator.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class PortAllocatorSession; }
namespace cricket { class RelayPortFactoryInterface; }
namespace rtc { class NetworkManager; }
namespace rtc { class NetworkMask; }
namespace rtc { class PacketSocketFactory; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class BasicPortAllocator : public ::cricket::PortAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3f65a4;
    ::ll::UntypedStorage<8, 8> mUnkf9ef96;
    ::ll::UntypedStorage<8, 8> mUnke56f28;
    ::ll::UntypedStorage<4, 4> mUnk699700;
    ::ll::UntypedStorage<8, 8> mUnk8f9d1a;
    ::ll::UntypedStorage<8, 8> mUnkaf1051;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicPortAllocator& operator=(BasicPortAllocator const&);
    BasicPortAllocator(BasicPortAllocator const&);
    BasicPortAllocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicPortAllocator() /*override*/;

    // vIndex: 3
    virtual void SetNetworkIgnoreMask(int network_ignore_mask) /*override*/;

    // vIndex: 7
    virtual ::cricket::PortAllocatorSession* CreateSessionInternal(::std::string_view content_name, int component, ::std::string_view ice_ufrag, ::std::string_view ice_pwd) /*override*/;

    // vIndex: 5
    virtual void SetVpnList(::std::vector<::rtc::NetworkMask> const& vpn_list) /*override*/;

    // vIndex: 8
    virtual bool MdnsObfuscationEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicPortAllocator(::rtc::NetworkManager* network_manager, ::rtc::PacketSocketFactory* socket_factory, ::webrtc::TurnCustomizer* customizer, ::cricket::RelayPortFactoryInterface* relay_port_factory, ::webrtc::FieldTrialsView const* field_trials);

    MCNAPI int GetNetworkIgnoreMask() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::NetworkManager* network_manager, ::rtc::PacketSocketFactory* socket_factory, ::webrtc::TurnCustomizer* customizer, ::cricket::RelayPortFactoryInterface* relay_port_factory, ::webrtc::FieldTrialsView const* field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetNetworkIgnoreMask(int network_ignore_mask);

    MCNAPI ::cricket::PortAllocatorSession* $CreateSessionInternal(::std::string_view content_name, int component, ::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI void $SetVpnList(::std::vector<::rtc::NetworkMask> const& vpn_list);

    MCNAPI bool $MdnsObfuscationEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
