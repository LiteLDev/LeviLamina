#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetworkBindingResult.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
// clang-format on

namespace webrtc {

class NetworkMonitorInterface {
public:
    // NetworkMonitorInterface inner types declare
    // clang-format off
    struct InterfaceInfo;
    // clang-format on

    // NetworkMonitorInterface inner types define
    struct InterfaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd5e7a6;
        ::ll::UntypedStorage<4, 4> mUnk633967;
        ::ll::UntypedStorage<4, 4> mUnkd39bf2;
        ::ll::UntypedStorage<1, 1> mUnk95ed64;
        // NOLINTEND

    public:
        // prevent constructor by default
        InterfaceInfo& operator=(InterfaceInfo const&);
        InterfaceInfo(InterfaceInfo const&);
        InterfaceInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc57e63;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkMonitorInterface& operator=(NetworkMonitorInterface const&);
    NetworkMonitorInterface(NetworkMonitorInterface const&);
    NetworkMonitorInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkMonitorInterface() = default;

    virtual void Start() = 0;

    virtual void Stop() = 0;

    virtual ::webrtc::NetworkMonitorInterface::InterfaceInfo GetInterfaceInfo(::std::string_view) = 0;

    virtual bool SupportsBindSocketToNetwork() const;

    virtual ::webrtc::NetworkBindingResult BindSocketToNetwork(int, ::webrtc::IPAddress const&, ::std::string_view);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
