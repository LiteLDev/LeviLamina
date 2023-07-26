#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class LevelChunkMetaDataManager {

public:
    // prevent constructor by default
    LevelChunkMetaDataManager& operator=(LevelChunkMetaDataManager const&) = delete;
    LevelChunkMetaDataManager(LevelChunkMetaDataManager const&)            = delete;
    LevelChunkMetaDataManager()                                            = delete;

public:
    /**
     * @symbol ?consolidateLevelChunkMetaData\@LevelChunkMetaDataManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void consolidateLevelChunkMetaData(class LevelChunk&); // NOLINT
    /**
     * @symbol
     * ?getLevelChunkMetaDataDictionary\@LevelChunkMetaDataManager\@\@QEBA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const; // NOLINT
    /**
     * @symbol ?registerOnNewDimensionCreated\@LevelChunkMetaDataManager\@\@QEAAXAEAVDimensionManager\@\@\@Z
     */
    MCAPI void registerOnNewDimensionCreated(class DimensionManager&); // NOLINT
    /**
     * @symbol ?tick\@LevelChunkMetaDataManager\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol
     * ?updateLevelChunkMetaDataForSaving\@LevelChunkMetaDataManager\@\@QEAAXAEAVLevelChunk\@\@AEBVBaseGameVersion\@\@AEBVDimensionHeightRange\@\@\@Z
     */
    MCAPI void
    updateLevelChunkMetaDataForSaving(class LevelChunk&, class BaseGameVersion const&, class DimensionHeightRange const&); // NOLINT
    /**
     * @symbol ??1LevelChunkMetaDataManager\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkMetaDataManager(); // NOLINT
    /**
     * @symbol
     * ?inferInitialMetaDataAfterDeserialization\@LevelChunkMetaDataManager\@\@SAXAEAVLevelChunk\@\@VLevelSeed64\@\@W4GeneratorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVDimensionHeightRange\@\@AEBVBaseGameVersion\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI static void
    inferInitialMetaDataAfterDeserialization(class LevelChunk&, class LevelSeed64, enum class GeneratorType, std::string const&, class AutomaticID<class Dimension, int>, class DimensionHeightRange const&, class BaseGameVersion const&, class LevelChunkMetaData&); // NOLINT
    /**
     * @symbol
     * ?inferTargetMetaData\@LevelChunkMetaDataManager\@\@SAXAEBVBaseGameVersion\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI static void
    inferTargetMetaData(class BaseGameVersion const&, class AutomaticID<class Dimension, int>, class LevelChunkMetaData&); // NOLINT
    /**
     * @symbol
     * ?initializeLevelChunkMetaData\@LevelChunkMetaDataManager\@\@SA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVDimensionHeightRange\@\@_NVLevelSeed64\@\@W4GeneratorType\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class LevelChunkMetaData>
    initializeLevelChunkMetaData(class AutomaticID<class Dimension, int>, std::string const&, class DimensionHeightRange const&, bool, class LevelSeed64, enum class GeneratorType, class BaseGameVersion const&); // NOLINT

    // private:
    /**
     * @symbol ?_onNewDimensionCreated\@LevelChunkMetaDataManager\@\@AEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void _onNewDimensionCreated(class Dimension&); // NOLINT

private:
};
