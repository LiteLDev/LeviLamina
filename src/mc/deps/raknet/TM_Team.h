#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TM_TeamMember; }
namespace RakNet { class TM_World; }
// clang-format on

namespace RakNet {

class TM_Team {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                            ID;
    ::ll::TypedStorage<8, 8, ::RakNet::TM_World*>                               world;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TM_TeamMember*>> teamMembers;
    ::ll::TypedStorage<1, 1, uchar>                                             joinPermissions;
    ::ll::TypedStorage<1, 1, bool>                                              balancingApplies;
    ::ll::TypedStorage<2, 2, ushort>                                            teamMemberLimit;
    ::ll::TypedStorage<8, 8, void*>                                             owner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_Team() = default;
    // NOLINTEND
};

} // namespace RakNet
