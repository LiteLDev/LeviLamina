#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class NetworkChunkPublisherUpdatePacket;
class NetworkIdentifier;
// clang-format on

class ChunkGenerationManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd9b47e;
    ::ll::UntypedStorage<8, 64> mUnk6f57f5;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkGenerationManager& operator=(ChunkGenerationManager const&);
    ChunkGenerationManager(ChunkGenerationManager const&);
    ChunkGenerationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addServerChunksToPacket(
        ::NetworkIdentifier const&           player,
        ::SubClientId                        clientId,
        ::NetworkChunkPublisherUpdatePacket& updatePacket
    );

    MCAPI void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);
    // NOLINTEND
};
