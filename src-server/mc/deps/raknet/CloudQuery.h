#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudKey; }
// clang-format on

namespace RakNet {

struct CloudQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::CloudKey>> keys;
    ::ll::TypedStorage<4, 4, uint>                                        startingRowIndex;
    ::ll::TypedStorage<4, 4, uint>                                        maxRowsToReturn;
    ::ll::TypedStorage<1, 1, bool>                                        subscribeToResults;
    // NOLINTEND
};

} // namespace RakNet
