/**
 * @file  LevelChunkMetaDataInitializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?inferInitialMetaDataAfterDeserialization\@LevelChunkMetaDataInitializer\@\@YAXAEAVLevelChunk\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI void inferInitialMetaDataAfterDeserialization(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @symbol  ?inferTargetMetaData\@LevelChunkMetaDataInitializer\@\@YAXAEBVBaseGameVersion\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI void inferTargetMetaData(class BaseGameVersion const &, class AutomaticID<class Dimension, int>, class LevelChunkMetaData &);
    /**
     * @symbol  ?setupInitialMetaData\@LevelChunkMetaDataInitializer\@\@YAXAEAVLevelChunk\@\@AEAVLevelChunkMetaData\@\@\@Z
     */
    MCAPI void setupInitialMetaData(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @symbol  ?updateLevelChunkMetaDataForSaving\@LevelChunkMetaDataInitializer\@\@YAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void updateLevelChunkMetaDataForSaving(class LevelChunk &);

};