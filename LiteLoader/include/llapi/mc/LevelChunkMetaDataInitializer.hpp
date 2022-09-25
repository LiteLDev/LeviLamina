/**
 * @file  LevelChunkMetaDataInitializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace LevelChunkMetaDataInitializer.
 *
 */
namespace LevelChunkMetaDataInitializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   130379490
     * @symbol ?inferInitialMetaDataAfterDeserialization@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@AEAVLevelChunkMetaData@@@Z
     */
    MCAPI void inferInitialMetaDataAfterDeserialization(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @hash   585584285
     * @symbol ?inferTargetMetaData@LevelChunkMetaDataInitializer@@YAXAEBVBaseGameVersion@@V?$AutomaticID@VDimension@@H@@AEAVLevelChunkMetaData@@@Z
     */
    MCAPI void inferTargetMetaData(class BaseGameVersion const &, class AutomaticID<class Dimension, int>, class LevelChunkMetaData &);
    /**
     * @hash   1902538798
     * @symbol ?setupInitialMetaData@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@AEAVLevelChunkMetaData@@@Z
     */
    MCAPI void setupInitialMetaData(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @hash   1491834017
     * @symbol ?updateLevelChunkMetaDataForSaving@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@@Z
     */
    MCAPI void updateLevelChunkMetaDataForSaving(class LevelChunk &);

};