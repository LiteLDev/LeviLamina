#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AdapterType.h"
#include "mc/external/rtc/NetworkManager.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace rtc {

class NetworkManagerBase : public ::rtc::NetworkManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1113ec;
    ::ll::UntypedStorage<4, 4>  mUnkc8d6d3;
    ::ll::UntypedStorage<8, 24> mUnk4ecfbb;
    ::ll::UntypedStorage<8, 16> mUnk9f3f62;
    ::ll::UntypedStorage<8, 8>  mUnk75fc0f;
    ::ll::UntypedStorage<8, 8>  mUnkadefe5;
    ::ll::UntypedStorage<4, 32> mUnkf0d315;
    ::ll::UntypedStorage<4, 32> mUnk62a6c8;
    ::ll::UntypedStorage<2, 2>  mUnk24dd54;
    ::ll::UntypedStorage<1, 1>  mUnk5dfda4;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkManagerBase& operator=(NetworkManagerBase const&);
    NetworkManagerBase(NetworkManagerBase const&);
    NetworkManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::std::vector<::rtc::Network const*> GetNetworks() const /*override*/;

    // vIndex: 7
    virtual ::std::vector<::rtc::Network const*> GetAnyAddressNetworks() /*override*/;

    // vIndex: 6
    virtual ::rtc::NetworkManager::EnumerationPermission enumeration_permission() const /*override*/;

    // vIndex: 1
    virtual bool GetDefaultLocalAddress(int, ::rtc::IPAddress*) const /*override*/;

    // vIndex: 1
    virtual ~NetworkManagerBase() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::rtc::Network>
    CreateNetwork(::std::string_view, ::std::string_view, ::rtc::IPAddress const&, int, ::rtc::AdapterType) const;

    MCNAPI ::rtc::Network* GetNetworkFromAddress(::rtc::IPAddress const&) const;

    MCNAPI void
    MergeNetworkList(::std::vector<::std::unique_ptr<::rtc::Network>>, bool*, ::rtc::NetworkManager::Stats*);

    MCNAPI explicit NetworkManagerBase(::webrtc::FieldTrialsView const*);

    MCNAPI void set_default_local_addresses(::rtc::IPAddress const&, ::rtc::IPAddress const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool IsVpnMacAddress(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDefaultLocalAddressProvider();

    MCNAPI static void** $vftableForMdnsResponderProvider();
    // NOLINTEND
};

} // namespace rtc
