#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

class LevelChunkMetaDataManager {
public:
    // prevent constructor by default
    LevelChunkMetaDataManager& operator=(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getLevelChunkMetaDataDictionary@LevelChunkMetaDataManager@@QEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
    MCAPI std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    // symbol: ?registerForLevelChunkEvents@LevelChunkMetaDataManager@@QEAAXAEAVILevelChunkEventManagerConnector@@@Z
    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    // symbol: ?registerOnNewDimensionCreated@LevelChunkMetaDataManager@@QEAAXAEAVDimensionManager@@@Z
    MCAPI void registerOnNewDimensionCreated(class DimensionManager&);

    // symbol: ?tick@LevelChunkMetaDataManager@@QEAAXXZ
    MCAPI void tick();

    // symbol:
    // ?updateLevelChunkMetaDataForSaving@LevelChunkMetaDataManager@@QEAAXAEAVLevelChunk@@AEBVBaseGameVersion@@AEBVDimensionHeightRange@@@Z
    MCAPI void
    updateLevelChunkMetaDataForSaving(class LevelChunk&, class BaseGameVersion const&, class DimensionHeightRange const&);

    // symbol: ??1LevelChunkMetaDataManager@@QEAA@XZ
    MCAPI ~LevelChunkMetaDataManager();

    // symbol:
    // ?inferInitialMetaDataAfterDeserialization@LevelChunkMetaDataManager@@SAXAEAVLevelChunk@@VLevelSeed64@@W4GeneratorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@AEBVDimensionHeightRange@@AEBVBaseGameVersion@@AEAVLevelChunkMetaData@@@Z
    MCAPI static void
    inferInitialMetaDataAfterDeserialization(class LevelChunk&, class LevelSeed64, ::GeneratorType, std::string const&, DimensionType, class DimensionHeightRange const&, class BaseGameVersion const&, class LevelChunkMetaData&);

    // symbol:
    // ?inferTargetMetaData@LevelChunkMetaDataManager@@SAXAEBVBaseGameVersion@@V?$AutomaticID@VDimension@@H@@AEAVLevelChunkMetaData@@@Z
    MCAPI static void inferTargetMetaData(class BaseGameVersion const&, DimensionType, class LevelChunkMetaData&);

    // symbol:
    // ?initializeLevelChunkMetaData@LevelChunkMetaDataManager@@SA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVDimensionHeightRange@@_NVLevelSeed64@@W4GeneratorType@@AEBVBaseGameVersion@@@Z
    MCAPI static std::shared_ptr<class LevelChunkMetaData>
    initializeLevelChunkMetaData(DimensionType, std::string const&, class DimensionHeightRange const&, bool, class LevelSeed64, ::GeneratorType, class BaseGameVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_consolidateLevelChunkMetaData@LevelChunkMetaDataManager@@AEAAXAEAVLevelChunk@@@Z
    MCAPI void _consolidateLevelChunkMetaData(class LevelChunk&);

    // symbol: ?_onNewDimensionCreated@LevelChunkMetaDataManager@@AEAAXAEAVDimension@@@Z
    MCAPI void _onNewDimensionCreated(class Dimension&);

    // NOLINTEND
};
