#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

namespace NetherNet {

class TcpServerSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpServerSignalingInterfaceImpl inner types declare
    // clang-format off
    class ServerHandshake;
    // clang-format on

    // TcpServerSignalingInterfaceImpl inner types define
    class ServerHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnkc52f00;
        ::ll::UntypedStorage<8, 48> mUnk5a4a4e;
        ::ll::UntypedStorage<8, 8>  mUnkebb123;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerHandshake& operator=(ServerHandshake const&);
        ServerHandshake(ServerHandshake const&);
        ServerHandshake();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ServerHandshake() /*override*/ = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkba9bf5;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpServerSignalingInterfaceImpl& operator=(TcpServerSignalingInterfaceImpl const&);
    TcpServerSignalingInterfaceImpl(TcpServerSignalingInterfaceImpl const&);
    TcpServerSignalingInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpServerSignalingInterfaceImpl() /*override*/ = default;
    // NOLINTEND
};

} // namespace NetherNet
