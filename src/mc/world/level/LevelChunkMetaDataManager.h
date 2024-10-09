#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/GeneratorType.h"

class LevelChunkMetaDataManager {
public:
    // prevent constructor by default
    LevelChunkMetaDataManager& operator=(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager();

public:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerOnNewDimensionCreated(class DimensionManager& dimensionManager);

    MCAPI void tick();

    MCAPI void updateLevelChunkMetaDataForSaving(
        class LevelChunk&                 lc,
        class BaseGameVersion const&      currentBaseGameVersion,
        class DimensionHeightRange const& dimensionHeightRange
    );

    MCAPI ~LevelChunkMetaDataManager();

    MCAPI static void inferInitialMetaDataAfterDeserialization(
        class LevelChunk&                 lc,
        class LevelSeed64                 generationSeed,
        ::GeneratorType                   generatorType,
        std::string const&                dimensionName,
        DimensionType                     dimensionId,
        class DimensionHeightRange const& dimensionHeightRange,
        class BaseGameVersion const&      currentBaseGameVersion,
        class LevelChunkMetaData&         metaData
    );

    MCAPI static void inferTargetMetaData(
        class BaseGameVersion const& version,
        DimensionType                dimensionID,
        class LevelChunkMetaData&    metaData
    );

    MCAPI static std::shared_ptr<class LevelChunkMetaData> initializeLevelChunkMetaData(
        DimensionType                     dimensionId,
        std::string const&                dimensionName,
        class DimensionHeightRange const& dimensionHeightRange,
        bool                              use3DBiomeMaps,
        class LevelSeed64                 levelSeed,
        ::GeneratorType                   generatorType,
        class BaseGameVersion const&      baseGameVersion
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _consolidateLevelChunkMetaData(class LevelChunk& levelChunk);

    MCAPI void _onNewDimensionCreated(class Dimension& dimension);

    // NOLINTEND
};
