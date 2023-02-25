/**
 * @file  TheEndDimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TheEndDimension.
 *
 */
class TheEndDimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDDIMENSION
public:
    class TheEndDimension& operator=(class TheEndDimension const &) = delete;
    TheEndDimension(class TheEndDimension const &) = delete;
    TheEndDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDDIMENSION
    /**
     * @symbol  ?_upgradeOldLimboEntity\@TheEndDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @symbol  ?_wrapStorageForVersionCompatibility\@TheEndDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @symbol  ?createGenerator\@TheEndDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @symbol  ?deserialize\@TheEndDimension\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @symbol  ?fixWallChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol  ?getCloudHeight\@TheEndDimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @symbol  ?getDefaultBiome\@TheEndDimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @symbol  ?getSpawnPos\@TheEndDimension\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @symbol  ?getSpawnYPosition\@TheEndDimension\@\@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @symbol  ?getSunIntensity\@TheEndDimension\@\@UEBAMMAEBVVec3\@\@M\@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @symbol  ?getTimeOfDay\@TheEndDimension\@\@UEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @symbol  ?hasGround\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @symbol  ?init\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @symbol  ?isDay\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @symbol  ?isFoggyAt\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @symbol  ?isNaturalDimension\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @symbol  ?isValidSpawn\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @symbol  ?levelChunkNeedsUpgrade\@TheEndDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @symbol  ?mayRespawnViaBed\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @symbol  ?serialize\@TheEndDimension\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @symbol  ?startLeaveGame\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @symbol  ?tick\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol  ?translatePosAcrossDimension\@TheEndDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?upgradeLevelChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @symbol  ??0TheEndDimension\@\@QEAA\@AEAVLevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI TheEndDimension(class Level &, class Scheduler &);
    /**
     * @symbol  ?AMBIENT_MULTIPLIER\@TheEndDimension\@\@2MB
     */
    MCAPI static float const AMBIENT_MULTIPLIER;

//private:
    /**
     * @symbol  ?makeStructureFeatures\@TheEndDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@AEAVDimension\@\@I\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(class Dimension &, unsigned int);

private:

};