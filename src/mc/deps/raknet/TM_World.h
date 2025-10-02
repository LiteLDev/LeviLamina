#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace RakNet { class TM_Team; }
namespace RakNet { class TM_TeamMember; }
namespace RakNet { class TeamManager; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TM_World {
public:
    // TM_World inner types declare
    // clang-format off
    struct JoinRequestHelper;
    // clang-format on

    // TM_World inner types define
    struct JoinRequestHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> whenRequestMade;
        ::ll::TypedStorage<4, 4, uint>   teamMemberIndex;
        ::ll::TypedStorage<4, 4, uint>   indexIntoTeamsRequested;
        ::ll::TypedStorage<4, 4, uint>   requestIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::Hash<uint64, ::RakNet::TM_Team*, 256, $unknown_type>> teamsHash;
    ::ll::TypedStorage<8, 16, ::DataStructures::Hash<uint64, ::RakNet::TM_TeamMember*, 256, $unknown_type>>
                                                                                teamMembersHash;
    ::ll::TypedStorage<8, 8, ::RakNet::TeamManager*>                            teamManager;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakNetGUID>>     participants;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_Team*>>       teams;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_TeamMember*>> teamMembers;
    ::ll::TypedStorage<1, 1, bool>                                              balanceTeamsIsActive;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                             hostGuid;
    ::ll::TypedStorage<1, 1, uchar>                                             worldId;
    ::ll::TypedStorage<1, 1, bool>                                              autoAddParticipants;
    ::ll::TypedStorage<4, 4, int>                                               teamRequestIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_World() = default;

    // vIndex: 1
    virtual void
    OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    // vIndex: 2
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
