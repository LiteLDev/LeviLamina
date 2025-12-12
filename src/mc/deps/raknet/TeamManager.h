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

class TeamManager : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 2040> mUnk1d9c6e;
    ::ll::UntypedStorage<8, 16>   mUnkc70320;
    ::ll::UntypedStorage<1, 1>    mUnk6ea09f;
    ::ll::UntypedStorage<4, 4>    mUnk74c07d;
    // NOLINTEND

public:
    // prevent constructor by default
    TeamManager& operator=(TeamManager const&);
    TeamManager(TeamManager const&);
    TeamManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TeamManager() /*override*/ = default;

    virtual void Update() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
