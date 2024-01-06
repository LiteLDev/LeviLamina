#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

class ChunkViewOwner {
public:
    // prevent constructor by default
    ChunkViewOwner& operator=(ChunkViewOwner const&);
    ChunkViewOwner();

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkViewOwner@@QEAA@AEBV0@@Z
    MCAPI ChunkViewOwner(class ChunkViewOwner const& copy);

    // symbol: ??0ChunkViewOwner@@QEAA@AEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI ChunkViewOwner(class NetworkIdentifier const&, ::SubClientId id);

    // symbol: ?getHash@ChunkViewOwner@@QEBA_KXZ
    MCAPI uint64 getHash() const;

    // NOLINTEND
};
