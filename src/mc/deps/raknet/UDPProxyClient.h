#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class UDPProxyClient : public ::RakNet::PluginInterface2 {
public:
    // UDPProxyClient inner types declare
    // clang-format off
    struct SenderAndTargetAddress;
    struct ServerWithPing;
    struct PingServerGroup;
    // clang-format on

    // UDPProxyClient inner types define
    struct SenderAndTargetAddress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk29cc9a;
        ::ll::UntypedStorage<8, 136> mUnk884631;
        // NOLINTEND

    public:
        // prevent constructor by default
        SenderAndTargetAddress& operator=(SenderAndTargetAddress const&);
        SenderAndTargetAddress(SenderAndTargetAddress const&);
        SenderAndTargetAddress();
    };

    struct ServerWithPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>   mUnk5c59c4;
        ::ll::UntypedStorage<8, 136> mUnka34e46;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerWithPing& operator=(ServerWithPing const&);
        ServerWithPing(ServerWithPing const&);
        ServerWithPing();
    };

    struct PingServerGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 272> mUnkee4b18;
        ::ll::UntypedStorage<4, 4>   mUnk238a65;
        ::ll::UntypedStorage<8, 136> mUnk42a701;
        ::ll::UntypedStorage<8, 16>  mUnk38a9ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingServerGroup& operator=(PingServerGroup const&);
        PingServerGroup(PingServerGroup const&);
        PingServerGroup();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka3de75;
    ::ll::UntypedStorage<8, 8>  mUnk337ebd;
    // NOLINTEND

public:
    // prevent constructor by default
    UDPProxyClient& operator=(UDPProxyClient const&);
    UDPProxyClient(UDPProxyClient const&);
    UDPProxyClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UDPProxyClient() /*override*/ = default;

    virtual void Update() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
