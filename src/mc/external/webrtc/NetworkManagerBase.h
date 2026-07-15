#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkManager.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
namespace webrtc { class Network; }
// clang-format on

namespace webrtc {

class NetworkManagerBase : public ::webrtc::NetworkManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk353eea;
    ::ll::UntypedStorage<8, 24> mUnkca587a;
    ::ll::UntypedStorage<8, 16> mUnk7b0ea9;
    ::ll::UntypedStorage<8, 8>  mUnke257ab;
    ::ll::UntypedStorage<8, 8>  mUnk3cbcc5;
    ::ll::UntypedStorage<8, 32> mUnk7c3c2f;
    ::ll::UntypedStorage<8, 32> mUnkf224a4;
    ::ll::UntypedStorage<2, 2>  mUnk85de49;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkManagerBase& operator=(NetworkManagerBase const&);
    NetworkManagerBase(NetworkManagerBase const&);
    NetworkManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Network const*> GetNetworks() const /*override*/;

    virtual ::std::vector<::webrtc::Network const*> GetAnyAddressNetworks() /*override*/;

    virtual ::webrtc::NetworkManager::EnumerationPermission enumeration_permission() const /*override*/;

    virtual bool GetDefaultLocalAddress(int family, ::webrtc::IPAddress* ipaddr) const /*override*/;

    virtual ~NetworkManagerBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Network* GetNetworkFromAddress(::webrtc::IPAddress const& ip) const;

    MCNAPI void MergeNetworkList(
        ::std::vector<::std::unique_ptr<::webrtc::Network>> new_networks,
        bool*                                               changed,
        ::webrtc::NetworkManager::Stats*                    stats
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
    MCNAPI ::std::vector<::webrtc::Network const*> $GetNetworks() const;

    MCNAPI ::std::vector<::webrtc::Network const*> $GetAnyAddressNetworks();

    MCNAPI ::webrtc::NetworkManager::EnumerationPermission $enumeration_permission() const;

    MCNAPI bool $GetDefaultLocalAddress(int family, ::webrtc::IPAddress* ipaddr) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMdnsResponderProvider();

    MCNAPI static void** $vftableForDefaultLocalAddressProvider();
    // NOLINTEND
};

} // namespace webrtc
