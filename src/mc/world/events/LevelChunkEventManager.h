#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/world/events/ILevelChunkEventManagerConnector.h"

class LevelChunkEventManager : public ::ILevelChunkEventManagerConnector {
public:
    // prevent constructor by default
    LevelChunkEventManager& operator=(LevelChunkEventManager const&);
    LevelChunkEventManager(LevelChunkEventManager const&);
    LevelChunkEventManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkEventManager() = default;

    // vIndex: 1
    virtual class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&, int)>&
    getOnChunkLoadedConnector();

    // vIndex: 2
    virtual class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&)>&
    getOnChunkReloadedConnector();

    // vIndex: 3
    virtual class Bedrock::PubSub::Connector<void(class LevelChunk&)>& getOnChunkDiscardedConnector();

    MCAPI explicit LevelChunkEventManager(std::unique_ptr<class ILevelChunkEventManagerProxy>);

    MCAPI void onChunkDiscarded(class LevelChunk&);

    MCAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    MCAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // NOLINTEND
};
