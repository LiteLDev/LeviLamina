#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

class ChunkViewOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mNetworkIdentifier;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSubClientId;
    // NOLINTEND
};
