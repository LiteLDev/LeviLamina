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
    ::ll::UntypedStorage<8, 160> mUnkd9a3db;
    ::ll::UntypedStorage<1, 1>   mUnk948029;
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
