#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

namespace NetherNet {

class TcpClientSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpClientSignalingInterfaceImpl inner types declare
    // clang-format off
    struct ClientHandshake;
    // clang-format on

    // TcpClientSignalingInterfaceImpl inner types define
    struct ClientHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk82dcf2;
        ::ll::UntypedStorage<8, 48> mUnkba5a34;
        ::ll::UntypedStorage<8, 8>  mUnkb38d8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientHandshake& operator=(ClientHandshake const&);
        ClientHandshake(ClientHandshake const&);
        ClientHandshake();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ClientHandshake() /*override*/ = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8bb762;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpClientSignalingInterfaceImpl& operator=(TcpClientSignalingInterfaceImpl const&);
    TcpClientSignalingInterfaceImpl(TcpClientSignalingInterfaceImpl const&);
    TcpClientSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpClientSignalingInterfaceImpl() /*override*/ = default;
    // NOLINTEND
};

} // namespace NetherNet
