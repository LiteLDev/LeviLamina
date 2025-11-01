#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReadyEvent : public ::RakNet::PluginInterface2 {
public:
    // ReadyEvent inner types declare
    // clang-format off
    struct ReadyEventNode;
    struct RemoteSystem;
    // clang-format on
    
    // ReadyEvent inner types define
    struct RemoteSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk958ed8;
        ::ll::UntypedStorage<1, 1> mUnka18232;
        ::ll::UntypedStorage<8, 16> mUnk728df4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RemoteSystem& operator=(RemoteSystem const&);
        RemoteSystem(RemoteSystem const&);
        RemoteSystem();
    
    };
    
    struct ReadyEventNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk813f84;
        ::ll::UntypedStorage<1, 1> mUnkd13a28;
        ::ll::UntypedStorage<8, 16> mUnk95d354;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ReadyEventNode& operator=(ReadyEventNode const&);
        ReadyEventNode(ReadyEventNode const&);
        ReadyEventNode();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkec8a46;
    ::ll::UntypedStorage<1, 1> mUnkf932a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ReadyEvent& operator=(ReadyEvent const&);
    ReadyEvent(ReadyEvent const&);
    ReadyEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReadyEvent() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
