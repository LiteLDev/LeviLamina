#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Connection_RM3; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReplicaManager3 : public ::RakNet::PluginInterface2 {
public:
    // ReplicaManager3 inner types declare
    // clang-format off
    struct RM3World;
    // clang-format on

    // ReplicaManager3 inner types define
    struct RM3World {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7d05cb;
        ::ll::UntypedStorage<8, 16> mUnk488ed8;
        ::ll::UntypedStorage<1, 1>  mUnk276acd;
        ::ll::UntypedStorage<8, 8>  mUnk897a58;
        // NOLINTEND

    public:
        // prevent constructor by default
        RM3World& operator=(RM3World const&);
        RM3World(RM3World const&);
        RM3World();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>   mUnke2a442;
    ::ll::UntypedStorage<8, 8>    mUnk5a07cb;
    ::ll::UntypedStorage<8, 8>    mUnkd01707;
    ::ll::UntypedStorage<1, 1>    mUnk1afc11;
    ::ll::UntypedStorage<1, 1>    mUnk4cf2be;
    ::ll::UntypedStorage<8, 8>    mUnk699238;
    ::ll::UntypedStorage<4, 4>    mUnk96de56;
    ::ll::UntypedStorage<8, 2040> mUnka1f83b;
    ::ll::UntypedStorage<8, 16>   mUnkc236ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplicaManager3& operator=(ReplicaManager3 const&);
    ReplicaManager3(ReplicaManager3 const&);
    ReplicaManager3();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReplicaManager3() /*override*/ = default;

    // vIndex: 17
    virtual ::RakNet::Connection_RM3* AllocConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID) const = 0;

    // vIndex: 18
    virtual void DeallocConnection(::RakNet::Connection_RM3*) const = 0;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
