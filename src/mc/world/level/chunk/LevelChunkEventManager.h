#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/chunk/ILevelChunkEventManagerConnector.h"

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

    MCAPI explicit LevelChunkEventManager(
        std::unique_ptr<class ILevelChunkEventManagerProxy> levelChunkEventManagerProxy
    );

    MCAPI void onChunkDiscarded(class LevelChunk& levelChunk);

    MCAPI void onChunkLoaded(class ChunkSource& chunkSource, class LevelChunk& levelChunk);

    MCAPI void onChunkReloaded(class ChunkSource& chunkSource, class LevelChunk& levelChunk);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::PubSub::Connector<void(class LevelChunk&)>& getOnChunkDiscardedConnector$();

    MCAPI class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&, int)>&
    getOnChunkLoadedConnector$();

    MCAPI class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&)>& getOnChunkReloadedConnector$();

    // NOLINTEND
};
