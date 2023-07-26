#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class NetherDimension {

public:
    // prevent constructor by default
    NetherDimension& operator=(NetherDimension const&) = delete;
    NetherDimension(NetherDimension const&)            = delete;
    NetherDimension()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERDIMENSION
    /**
     * @symbol ?_upgradeOldLimboEntity\@NetherDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag&, enum class LimboEntitiesVersion); // NOLINT
    /**
     * @symbol
     * ?_wrapStorageForVersionCompatibility\@NetherDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource>
           _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion); // NOLINT
    /**
     * @symbol
     * ?createGenerator\@NetherDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator(); // NOLINT
    /**
     * @symbol ?fixWallChunk\@NetherDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?forceCheckAllNeighChunkSavedStat\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const; // NOLINT
    /**
     * @symbol ?getDefaultBiome\@NetherDimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const; // NOLINT
    /**
     * @symbol ?getTimeOfDay\@NetherDimension\@\@UEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const; // NOLINT
    /**
     * @symbol ?init\@NetherDimension\@\@UEAAXXZ
     */
    MCVAPI void init(); // NOLINT
    /**
     * @symbol ?isFoggyAt\@NetherDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const; // NOLINT
    /**
     * @symbol ?isNaturalDimension\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const; // NOLINT
    /**
     * @symbol ?isValidSpawn\@NetherDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const; // NOLINT
    /**
     * @symbol ?levelChunkNeedsUpgrade\@NetherDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const&) const; // NOLINT
    /**
     * @symbol ?mayRespawnViaBed\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const; // NOLINT
    /**
     * @symbol ?showSky\@NetherDimension\@\@UEBA_NXZ
     */
    MCVAPI bool showSky() const; // NOLINT
    /**
     * @symbol
     * ?translatePosAcrossDimension\@NetherDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3
    translatePosAcrossDimension(class Vec3 const&, class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol ?upgradeLevelChunk\@NetherDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&); // NOLINT
#endif
    /**
     * @symbol ??0NetherDimension\@\@QEAA\@AEAVILevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI NetherDimension(class ILevel&, class Scheduler&); // NOLINT

    // private:
    /**
     * @symbol
     * ?makeStructureFeatures\@NetherDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@IAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry>
    makeStructureFeatures(unsigned int, class BaseGameVersion const&); // NOLINT

private:
};
