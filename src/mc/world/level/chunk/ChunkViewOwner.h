#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

class ChunkViewOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mNetworkIdentifier;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSubClientId;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewOwner& operator=(ChunkViewOwner const&);
    ChunkViewOwner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkViewOwner(::ChunkViewOwner const& copy);

    MCAPI ChunkViewOwner(::NetworkIdentifier const& networkId, ::SubClientId id);

    MCAPI uint64 getHash() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkViewOwner const& copy);

    MCAPI void* $ctor(::NetworkIdentifier const& networkId, ::SubClientId id);
    // NOLINTEND
};
