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
     * @hash   -282871824
     * @symbol  ?_upgradeOldLimboEntity\@TheEndDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @hash   335429929
     * @symbol  ?_wrapStorageForVersionCompatibility\@TheEndDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @hash   1433498549
     * @symbol  ?createGenerator\@TheEndDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @hash   -1420911680
     * @symbol  ?deserialize\@TheEndDimension\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   1526951600
     * @symbol  ?fixWallChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   193712872
     * @symbol  ?getCloudHeight\@TheEndDimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @hash   -1706721590
     * @symbol  ?getDefaultBiome\@TheEndDimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @hash   1911607499
     * @symbol  ?getSpawnPos\@TheEndDimension\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @hash   -474244068
     * @symbol  ?getSpawnYPosition\@TheEndDimension\@\@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @hash   -1488647743
     * @symbol  ?getSunIntensity\@TheEndDimension\@\@UEBAMMAEBVVec3\@\@M\@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @hash   1766092055
     * @symbol  ?getTimeOfDay\@TheEndDimension\@\@UEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @hash   -1674729699
     * @symbol  ?hasGround\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @hash   701705579
     * @symbol  ?init\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @hash   -2087132658
     * @symbol  ?isDay\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @hash   -365175115
     * @symbol  ?isFoggyAt\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @hash   1655438435
     * @symbol  ?isNaturalDimension\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @hash   -1602438107
     * @symbol  ?isValidSpawn\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @hash   -640702990
     * @symbol  ?levelChunkNeedsUpgrade\@TheEndDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @hash   1648616882
     * @symbol  ?mayRespawnViaBed\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @hash   1242342081
     * @symbol  ?serialize\@TheEndDimension\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   653490034
     * @symbol  ?startLeaveGame\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   -951950696
     * @symbol  ?tick\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   -1138521869
     * @symbol  ?translatePosAcrossDimension\@TheEndDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   380376572
     * @symbol  ?upgradeLevelChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @hash   -1217278590
     * @symbol  ??0TheEndDimension\@\@QEAA\@AEAVLevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI TheEndDimension(class Level &, class Scheduler &);
    /**
     * @hash   -1649385081
     * @symbol  ?AMBIENT_MULTIPLIER\@TheEndDimension\@\@2MB
     */
    MCAPI static float const AMBIENT_MULTIPLIER;

//private:
    /**
     * @hash   -988838267
     * @symbol  ?makeStructureFeatures\@TheEndDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@AEAVDimension\@\@I\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(class Dimension &, unsigned int);

private:

};