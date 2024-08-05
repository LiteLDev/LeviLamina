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
    MCAPI std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    MCAPI void registerOnNewDimensionCreated(class DimensionManager&);

    MCAPI void tick();

    MCAPI void
    updateLevelChunkMetaDataForSaving(class LevelChunk&, class BaseGameVersion const&, class DimensionHeightRange const&);

    MCAPI ~LevelChunkMetaDataManager();

    MCAPI static void
    inferInitialMetaDataAfterDeserialization(class LevelChunk&, class LevelSeed64, ::GeneratorType, std::string const&, DimensionType, class DimensionHeightRange const&, class BaseGameVersion const&, class LevelChunkMetaData&);

    MCAPI static void inferTargetMetaData(class BaseGameVersion const&, DimensionType, class LevelChunkMetaData&);

    MCAPI static std::shared_ptr<class LevelChunkMetaData>
    initializeLevelChunkMetaData(DimensionType, std::string const&, class DimensionHeightRange const&, bool, class LevelSeed64, ::GeneratorType, class BaseGameVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _consolidateLevelChunkMetaData(class LevelChunk&);

    MCAPI void _onNewDimensionCreated(class Dimension&);

    // NOLINTEND
};
