#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
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
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> memberGuid;
        ::ll::TypedStorage<8, 8, uint64>                memberId;
        ::ll::TypedStorage<1, 1, uchar>                 currentTeam;
        ::ll::TypedStorage<1, 1, uchar>                 requestedTeam;
        // NOLINTEND
    };

    struct MyTeamMembers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> memberId;
        ::ll::TypedStorage<1, 1, uchar>  currentTeam;
        ::ll::TypedStorage<1, 1, uchar>  requestedTeam;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                          hostGuid;
    ::ll::TypedStorage<4, 4, ::RakNet::TeamBalancer::DefaultAssigmentAlgorithm>              defaultAssigmentAlgorithm;
    ::ll::TypedStorage<1, 1, bool>                                                           forceTeamsToBeEven;
    ::ll::TypedStorage<1, 1, bool>                                                           lockTeams;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TeamBalancer::MyTeamMembers>> myTeamMembers;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<ushort>>                                teamLimits;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<ushort>>                                teamMemberCounts;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TeamBalancer::TeamMember>>    teamMembers;
    // NOLINTEND

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
