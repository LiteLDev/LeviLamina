#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/JoinTeamType.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TM_Team; }
// clang-format on

namespace RakNet {

struct TeamSelection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::JoinTeamType> joinTeamType;
    union {
        ::ll::TypedStorage<8, 8, ::RakNet::TM_Team*> specificTeamToJoin;
        ::ll::TypedStorage<1, 8, uchar>              noTeamSubcategory;
    } teamParameter;
    // NOLINTEND
};

} // namespace RakNet
