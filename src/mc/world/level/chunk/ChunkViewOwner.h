#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

class ChunkViewOwner {
public:
    // prevent constructor by default
    ChunkViewOwner& operator=(ChunkViewOwner const&);
    ChunkViewOwner();

public:
    // NOLINTBEGIN
    MCAPI ChunkViewOwner(class ChunkViewOwner const& copy);

    MCAPI ChunkViewOwner(class NetworkIdentifier const& networkId, ::SubClientId id);

    MCAPI uint64 getHash() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class NetworkIdentifier const& networkId, ::SubClientId id);

    MCAPI void* ctor$(class ChunkViewOwner const& copy);

    // NOLINTEND
};
