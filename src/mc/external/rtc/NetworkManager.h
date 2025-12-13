#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/DefaultLocalAddressProvider.h"
#include "mc/external/rtc/MdnsResponderProvider.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class NetworkMask; }
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class NetworkManager : public ::rtc::DefaultLocalAddressProvider, public ::rtc::MdnsResponderProvider {
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
        ::ll::UntypedStorage<4, 4> mUnka7cbe9;
        ::ll::UntypedStorage<4, 4> mUnk6126d7;
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
    ::ll::UntypedStorage<8, 48> mUnk32ebb5;
    ::ll::UntypedStorage<8, 48> mUnk779b28;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkManager& operator=(NetworkManager const&);
    NetworkManager(NetworkManager const&);
    NetworkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void Initialize();

    // vIndex: 3
    virtual void StartUpdating() = 0;

    // vIndex: 4
    virtual void StopUpdating() = 0;

    // vIndex: 5
    virtual ::std::vector<::rtc::Network const*> GetNetworks() const = 0;

    // vIndex: 6
    virtual ::rtc::NetworkManager::EnumerationPermission enumeration_permission() const;

    // vIndex: 7
    virtual ::std::vector<::rtc::Network const*> GetAnyAddressNetworks() = 0;

    // vIndex: 8
    virtual void DumpNetworks();

    // vIndex: 1
    virtual bool GetDefaultLocalAddress(int family, ::rtc::IPAddress* addr) const /*override*/;

    // vIndex: 1
    virtual ::webrtc::MdnsResponderInterface* GetMdnsResponder() const /*override*/;

    // vIndex: 9
    virtual void set_vpn_list(::std::vector<::rtc::NetworkMask> const& vpn);

    // vIndex: 0
    virtual ~NetworkManager() /*override*/;
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

    MCNAPI ::rtc::NetworkManager::EnumerationPermission $enumeration_permission() const;

    MCNAPI void $DumpNetworks();

    MCNAPI bool $GetDefaultLocalAddress(int family, ::rtc::IPAddress* addr) const;

    MCNAPI ::webrtc::MdnsResponderInterface* $GetMdnsResponder() const;

    MCNAPI void $set_vpn_list(::std::vector<::rtc::NetworkMask> const& vpn);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMdnsResponderProvider();

    MCNAPI static void** $vftableForDefaultLocalAddressProvider();
    // NOLINTEND
};

} // namespace rtc
