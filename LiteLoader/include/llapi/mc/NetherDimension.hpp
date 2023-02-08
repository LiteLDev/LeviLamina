/**
 * @file  NetherDimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherDimension.
 *
 */
class NetherDimension {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERDIMENSION
public:
    class NetherDimension& operator=(class NetherDimension const &) = delete;
    NetherDimension(class NetherDimension const &) = delete;
    NetherDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERDIMENSION
    /**
     * @hash   532334558
     * @symbol  ?_upgradeOldLimboEntity\@NetherDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @hash   1532043543
     * @symbol  ?_wrapStorageForVersionCompatibility\@NetherDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @hash   -1264520653
     * @symbol  ?createGenerator\@NetherDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @hash   -1424965986
     * @symbol  ?fixWallChunk\@NetherDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   -1678217993
     * @symbol  ?forceCheckAllNeighChunkSavedStat\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    /**
     * @hash   1104192056
     * @symbol  ?getDefaultBiome\@NetherDimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @hash   696261829
     * @symbol  ?getTimeOfDay\@NetherDimension\@\@UEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @hash   -1289690983
     * @symbol  ?init\@NetherDimension\@\@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @hash   1931269203
     * @symbol  ?isFoggyAt\@NetherDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @hash   1139400657
     * @symbol  ?isNaturalDimension\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @hash   701463571
     * @symbol  ?isValidSpawn\@NetherDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @hash   502942916
     * @symbol  ?levelChunkNeedsUpgrade\@NetherDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @hash   1132579104
     * @symbol  ?mayRespawnViaBed\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @hash   -1749662322
     * @symbol  ?showSky\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool showSky() const;
    /**
     * @hash   839836209
     * @symbol  ?translatePosAcrossDimension\@NetherDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   -934755378
     * @symbol  ?upgradeLevelChunk\@NetherDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @hash   2129951828
     * @symbol  ??0NetherDimension\@\@QEAA\@AEAVLevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI NetherDimension(class Level &, class Scheduler &);

//private:
    /**
     * @hash   921310521
     * @symbol  ?makeStructureFeatures\@NetherDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@IAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(unsigned int, class BaseGameVersion const &);

private:

};