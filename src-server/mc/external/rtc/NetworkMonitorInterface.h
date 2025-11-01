#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/NetworkBindingResult.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

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
        ::ll::UntypedStorage<4, 4> mUnk504c05;
        ::ll::UntypedStorage<4, 4> mUnk7189b3;
        ::ll::UntypedStorage<4, 4> mUnk462e85;
        ::ll::UntypedStorage<1, 1> mUnk5be5dc;
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
    ::ll::UntypedStorage<8, 64> mUnkc54cb5;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkMonitorInterface& operator=(NetworkMonitorInterface const&);
    NetworkMonitorInterface(NetworkMonitorInterface const&);
    NetworkMonitorInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkMonitorInterface() = default;

    // vIndex: 1
    virtual void Start() = 0;

    // vIndex: 2
    virtual void Stop() = 0;

    // vIndex: 3
    virtual ::rtc::NetworkMonitorInterface::InterfaceInfo GetInterfaceInfo(::std::string_view) = 0;

    // vIndex: 4
    virtual bool SupportsBindSocketToNetwork() const;

    // vIndex: 5
    virtual ::rtc::NetworkBindingResult BindSocketToNetwork(int, ::rtc::IPAddress const&, ::std::string_view);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
