/**
 * @file  LevelChunkMetaDataManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LevelChunkMetaDataManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATAMANAGER
public:
    class LevelChunkMetaDataManager& operator=(class LevelChunkMetaDataManager const &) = delete;
    LevelChunkMetaDataManager(class LevelChunkMetaDataManager const &) = delete;
    LevelChunkMetaDataManager() = delete;
#endif

public:
    /**
     * @symbol ?consolidateLevelChunkMetaData\@LevelChunkMetaDataManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol ?getLevelChunkMetaDataDictionary\@LevelChunkMetaDataManager\@\@QEBA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @symbol ?registerOnNewDimensionCreated\@LevelChunkMetaDataManager\@\@QEAAXAEAVDimensionManager\@\@\@Z
     */
    MCAPI void registerOnNewDimensionCreated(class DimensionManager &);
    /**
     * @symbol ?tick\@LevelChunkMetaDataManager\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ?updateLevelChunkMetaDataForSaving\@LevelChunkMetaDataManager\@\@QEAAXAEAVLevelChunk\@\@AEBVBaseGameVersion\@\@AEBVDimensionHeightRange\@\@\@Z
     */
    MCAPI void updateLevelChunkMetaDataForSaving(class LevelChunk &, class BaseGameVersion const &, class DimensionHeightRange const &);
    /**
     * @symbol ??1LevelChunkMetaDataManager\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkMetaDataManager();
    /**
     * @symbol ?inferInitialMetaDataAfterDeserialization\@LevelChunkMetaDataManager\@\@SAXAEAVLevelChunk\@\@VLevelSeed64\@\@W4GeneratorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVDimensionHeightRange\@\@AEBVBaseGameVersion\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI static void inferInitialMetaDataAfterDeserialization(class LevelChunk &, class LevelSeed64, enum class GeneratorType, std::string const &, class AutomaticID<class Dimension, int>, class DimensionHeightRange const &, class BaseGameVersion const &, class LevelChunkMetaData &);
    /**
     * @symbol ?inferTargetMetaData\@LevelChunkMetaDataManager\@\@SAXAEBVBaseGameVersion\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI static void inferTargetMetaData(class BaseGameVersion const &, class AutomaticID<class Dimension, int>, class LevelChunkMetaData &);
    /**
     * @symbol ?initializeLevelChunkMetaData\@LevelChunkMetaDataManager\@\@SA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVDimensionHeightRange\@\@_NVLevelSeed64\@\@W4GeneratorType\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class LevelChunkMetaData> initializeLevelChunkMetaData(class AutomaticID<class Dimension, int>, std::string const &, class DimensionHeightRange const &, bool, class LevelSeed64, enum class GeneratorType, class BaseGameVersion const &);

//private:
    /**
     * @symbol ?_onNewDimensionCreated\@LevelChunkMetaDataManager\@\@AEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void _onNewDimensionCreated(class Dimension &);

private:

};
