#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CloudQuery.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudQueryRow; }
// clang-format on

namespace RakNet {

struct CloudQueryResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::RakNet::CloudQuery>                             cloudQuery;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::CloudQueryRow*>> rowsReturned;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<uint>>                     resultKeyIndices;
    ::ll::TypedStorage<1, 1, bool>                                              subscribeToResults;
    // NOLINTEND
};

} // namespace RakNet
