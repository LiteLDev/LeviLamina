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
    // vIndex: 0, symbol: __gen_??1LevelChunkEventManager@@UEAA@XZ
    virtual ~LevelChunkEventManager() = default;

    // vIndex: 1, symbol:
    // ?getOnChunkLoadedConnector@LevelChunkEventManager@@UEAAAEAV?$Connector@$$A6AXAEAVChunkSource@@AEAVLevelChunk@@H@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&, int)>&
    getOnChunkLoadedConnector();

    // vIndex: 2, symbol:
    // ?getOnChunkReloadedConnector@LevelChunkEventManager@@UEAAAEAV?$Connector@$$A6AXAEAVChunkSource@@AEAVLevelChunk@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(class ChunkSource&, class LevelChunk&)>&
    getOnChunkReloadedConnector();

    // vIndex: 3, symbol:
    // ?getOnChunkDiscardedConnector@LevelChunkEventManager@@UEAAAEAV?$Connector@$$A6AXAEAVLevelChunk@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(class LevelChunk&)>& getOnChunkDiscardedConnector();

    // symbol:
    // ??0LevelChunkEventManager@@QEAA@V?$unique_ptr@VILevelChunkEventManagerProxy@@U?$default_delete@VILevelChunkEventManagerProxy@@@std@@@std@@@Z
    MCAPI explicit LevelChunkEventManager(std::unique_ptr<class ILevelChunkEventManagerProxy>);

    // symbol: ?onChunkDiscarded@LevelChunkEventManager@@QEAAXAEAVLevelChunk@@@Z
    MCAPI void onChunkDiscarded(class LevelChunk&);

    // symbol: ?onChunkLoaded@LevelChunkEventManager@@QEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?onChunkReloaded@LevelChunkEventManager@@QEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // NOLINTEND
};
