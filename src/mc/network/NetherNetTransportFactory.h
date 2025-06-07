#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/LogSeverity.h"

// auto generated forward declare list
// clang-format off
struct NetworkSystemToggles;
struct PortMappingInfo;
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk78837c;
    ::ll::UntypedStorage<8, 56> mUnkdaf441;
    ::ll::UntypedStorage<4, 4>  mUnkda3cbc;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetTransportFactory& operator=(NetherNetTransportFactory const&);
    NetherNetTransportFactory(NetherNetTransportFactory const&);
    NetherNetTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherNetTransportFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<
        ::NetherNet::INetherNetTransportInterface,
        ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>
    createTransport(
        ::NetherNet::NetworkID const&                       id,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetTransportFactory(
        ::NetworkSystemToggles const& toggles,
        ::PortMappingInfo             portMappingInfo,
        ::NetherNet::LogSeverity      defaultLogSeverity
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetworkSystemToggles const& toggles,
        ::PortMappingInfo             portMappingInfo,
        ::NetherNet::LogSeverity      defaultLogSeverity
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
    MCNAPI ::std::unique_ptr<
        ::NetherNet::INetherNetTransportInterface,
        ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>
    $createTransport(
        ::NetherNet::NetworkID const&                       id,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
