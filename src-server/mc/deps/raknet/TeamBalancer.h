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

class TeamBalancer : public ::RakNet::PluginInterface2 {
public:
    // TeamBalancer inner types declare
    // clang-format off
    struct MyTeamMembers;
    struct TeamMember;
    // clang-format on

    // TeamBalancer inner types define
    enum class DefaultAssigmentAlgorithm : int {
        SmallestTeam = 0,
        FillInOrder  = 1,
    };

    struct TeamMember {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkb62cdd;
        ::ll::UntypedStorage<8, 8>  mUnka31673;
        ::ll::UntypedStorage<1, 1>  mUnke76e24;
        ::ll::UntypedStorage<1, 1>  mUnkbf4433;
        // NOLINTEND

    public:
        // prevent constructor by default
        TeamMember& operator=(TeamMember const&);
        TeamMember(TeamMember const&);
        TeamMember();
    };

    struct MyTeamMembers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk12a3ab;
        ::ll::UntypedStorage<1, 1> mUnkf3d3ae;
        ::ll::UntypedStorage<1, 1> mUnk9d2edf;
        // NOLINTEND

    public:
        // prevent constructor by default
        MyTeamMembers& operator=(MyTeamMembers const&);
        MyTeamMembers(MyTeamMembers const&);
        MyTeamMembers();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb6544a;
    ::ll::UntypedStorage<4, 4>  mUnka3287b;
    ::ll::UntypedStorage<1, 1>  mUnk90570d;
    ::ll::UntypedStorage<1, 1>  mUnk9de96e;
    ::ll::UntypedStorage<8, 16> mUnk1b029e;
    ::ll::UntypedStorage<8, 16> mUnkd3efd5;
    ::ll::UntypedStorage<8, 16> mUnkd702bf;
    ::ll::UntypedStorage<8, 16> mUnk85b0f4;
    // NOLINTEND

public:
    // prevent constructor by default
    TeamBalancer& operator=(TeamBalancer const&);
    TeamBalancer(TeamBalancer const&);
    TeamBalancer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TeamBalancer() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 1
    virtual void OnAttach() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
