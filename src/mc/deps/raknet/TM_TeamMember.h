#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/JoinTeamType.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TM_Team; }
namespace RakNet { class TM_World; }
// clang-format on

namespace RakNet {

class TM_TeamMember {
public:
    // TM_TeamMember inner types declare
    // clang-format off
    struct RequestedTeam;
    // clang-format on

    // TM_TeamMember inner types define
    struct RequestedTeam {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>             whenRequested;
        ::ll::TypedStorage<4, 4, uint>               requestIndex;
        ::ll::TypedStorage<8, 8, ::RakNet::TM_Team*> requested;
        ::ll::TypedStorage<1, 1, bool>               isTeamSwitch;
        ::ll::TypedStorage<8, 8, ::RakNet::TM_Team*> teamToLeave;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                          networkId;
    ::ll::TypedStorage<8, 8, ::RakNet::TM_World*>                                             world;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_Team*>>                     teams;
    ::ll::TypedStorage<1, 1, uchar>                                                           noTeamSubcategory;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_TeamMember::RequestedTeam>> teamsRequested;
    ::ll::TypedStorage<4, 4, ::RakNet::JoinTeamType>                                          joinTeamType;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_Team*>>                     lastTeams;
    ::ll::TypedStorage<8, 8, uint64>                                                          whenJoinAnyRequested;
    ::ll::TypedStorage<4, 4, uint>                                                            joinAnyRequestIndex;
    ::ll::TypedStorage<8, 8, void*>                                                           owner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_TeamMember() = default;
    // NOLINTEND
};

} // namespace RakNet
