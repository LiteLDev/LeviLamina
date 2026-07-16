#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DefaultLocalAddressProvider.h"
#include "mc/external/webrtc/MdnsResponderProvider.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
namespace webrtc { class MdnsResponderInterface; }
namespace webrtc { class Network; }
namespace webrtc { class NetworkMask; }
// clang-format on

namespace webrtc {

class NetworkManager : public ::webrtc::DefaultLocalAddressProvider, public ::webrtc::MdnsResponderProvider {
public:
    // NetworkManager inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // NetworkManager inner types define
    enum class EnumerationPermission : int {
        Allowed = 0,
        Blocked = 1,
    };

    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk4807c6;
        ::ll::UntypedStorage<4, 4> mUnk62b8b1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk678bb0;
    ::ll::UntypedStorage<8, 48> mUnk314146;
    ::ll::UntypedStorage<8, 80> mUnk8cba27;
    ::ll::UntypedStorage<8, 80> mUnke27867;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkManager& operator=(NetworkManager const&);
    NetworkManager(NetworkManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Initialize();

    virtual void StartUpdating() = 0;

    virtual void StopUpdating() = 0;

    virtual ::std::vector<::webrtc::Network const*> GetNetworks() const = 0;

    virtual ::webrtc::NetworkManager::EnumerationPermission enumeration_permission() const;

    virtual ::std::vector<::webrtc::Network const*> GetAnyAddressNetworks() = 0;

    virtual void DumpNetworks();

    virtual bool GetDefaultLocalAddress(int family, ::webrtc::IPAddress* ipaddr) const /*override*/;

    virtual ::webrtc::MdnsResponderInterface* GetMdnsResponder() const /*override*/;

    virtual void set_vpn_list(::std::vector<::webrtc::NetworkMask> const& vpn);

    virtual ~NetworkManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Initialize();

    MCNAPI ::webrtc::NetworkManager::EnumerationPermission $enumeration_permission() const;

    MCNAPI void $DumpNetworks();

    MCNAPI bool $GetDefaultLocalAddress(int family, ::webrtc::IPAddress* ipaddr) const;

    MCNAPI ::webrtc::MdnsResponderInterface* $GetMdnsResponder() const;

    MCNAPI void $set_vpn_list(::std::vector<::webrtc::NetworkMask> const& vpn);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDefaultLocalAddressProvider();

    MCNAPI static void** $vftableForMdnsResponderProvider();
    // NOLINTEND
};

} // namespace webrtc
