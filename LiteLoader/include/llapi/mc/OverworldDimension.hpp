/**
 * @file  OverworldDimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldDimension.
 *
 */
class OverworldDimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDDIMENSION
public:
    class OverworldDimension& operator=(class OverworldDimension const &) = delete;
    OverworldDimension(class OverworldDimension const &) = delete;
    OverworldDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDDIMENSION
    /**
     * @hash   286141572
     * @symbol  ?_upgradeOldLimboEntity\@OverworldDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @hash   246815245
     * @symbol  ?_wrapStorageForVersionCompatibility\@OverworldDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @hash   1451916841
     * @symbol  ?createGenerator\@OverworldDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @hash   567522628
     * @symbol  ?fixWallChunk\@OverworldDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   -561281419
     * @symbol  ?getBrightnessDependentFogColor\@OverworldDimension\@\@UEBA?AVColor\@mce\@\@AEBV23\@M\@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    /**
     * @hash   -307669412
     * @symbol  ?getCloudHeight\@OverworldDimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @hash   -10495275
     * @symbol  ?hasPrecipitationFog\@OverworldDimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasPrecipitationFog() const;
    /**
     * @hash   -852051234
     * @symbol  ?levelChunkNeedsUpgrade\@OverworldDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @hash   -993706937
     * @symbol  ?translatePosAcrossDimension\@OverworldDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   1433828456
     * @symbol  ?upgradeLevelChunk\@OverworldDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @hash   911912270
     * @symbol  ??0OverworldDimension\@\@QEAA\@AEAVLevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI OverworldDimension(class Level &, class Scheduler &);

//private:
    /**
     * @hash   -186278146
     * @symbol  ?makeStructureFeatures\@OverworldDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@I_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(unsigned int, bool, class BaseGameVersion const &, class Experiments const &);

private:

};