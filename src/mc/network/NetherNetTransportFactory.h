#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class NetherNetTransportFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk78837c;
    ::ll::UntypedStorage<8, 104> mUnk3e43d6;
    ::ll::UntypedStorage<4, 4>   mUnkda3cbc;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetTransportFactory& operator=(NetherNetTransportFactory const&);
    NetherNetTransportFactory(NetherNetTransportFactory const&);
    NetherNetTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherNetTransportFactory() = default;

    virtual ::std::unique_ptr<
        ::NetherNet::INetherNetTransportInterface,
        ::std::function<void(::NetherNet::INetherNetTransportInterface*)>>
    createTransport(
        ::NetherNet::NetworkID const&                       id,
        ::NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void setLoggingVerbosity(::Option const& loggingOption);
#endif
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
