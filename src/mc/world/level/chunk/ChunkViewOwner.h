#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

class ChunkViewOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mNetworkIdentifier;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSubClientId;
    // NOLINTEND
};
