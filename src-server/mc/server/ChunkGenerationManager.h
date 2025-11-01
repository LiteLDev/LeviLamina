#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/versionless/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class ChunkViewOwner;
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
// clang-format on

class ChunkGenerationManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SpinLockImpl> mGenerationRequestLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkViewOwner, ::std::unordered_set<::ChunkPos>>> mGenerationRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addServerChunksToPacket(::NetworkIdentifier const& player, ::SubClientId clientId, ::NetworkChunkPublisherUpdatePacket& updatePacket);

    MCNAPI void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);

    MCNAPI bool hasPendingGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) const;
    // NOLINTEND

};
