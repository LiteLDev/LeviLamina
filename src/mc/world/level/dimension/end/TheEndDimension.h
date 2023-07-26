#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class TheEndDimension {

public:
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&) = delete;
    TheEndDimension(TheEndDimension const&)            = delete;
    TheEndDimension()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDDIMENSION
    /**
     * @symbol ?_upgradeOldLimboEntity\@TheEndDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag&, enum class LimboEntitiesVersion); // NOLINT
    /**
     * @symbol
     * ?_wrapStorageForVersionCompatibility\@TheEndDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource>
           _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion); // NOLINT
    /**
     * @symbol
     * ?createGenerator\@TheEndDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator(); // NOLINT
    /**
     * @symbol ?deserialize\@TheEndDimension\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?fixWallChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?getCloudHeight\@TheEndDimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const; // NOLINT
    /**
     * @symbol ?getDefaultBiome\@TheEndDimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const; // NOLINT
    /**
     * @symbol ?getSpawnPos\@TheEndDimension\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const; // NOLINT
    /**
     * @symbol ?getSpawnYPosition\@TheEndDimension\@\@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const; // NOLINT
    /**
     * @symbol ?getSunIntensity\@TheEndDimension\@\@UEBAMMAEBVVec3\@\@M\@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?getTimeOfDay\@TheEndDimension\@\@UEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const; // NOLINT
    /**
     * @symbol ?hasGround\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasGround() const; // NOLINT
    /**
     * @symbol ?init\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void init(); // NOLINT
    /**
     * @symbol ?isDay\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isDay() const; // NOLINT
    /**
     * @symbol ?isFoggyAt\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const; // NOLINT
    /**
     * @symbol ?isNaturalDimension\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const; // NOLINT
    /**
     * @symbol ?isValidSpawn\@TheEndDimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const; // NOLINT
    /**
     * @symbol ?levelChunkNeedsUpgrade\@TheEndDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const&) const; // NOLINT
    /**
     * @symbol ?mayRespawnViaBed\@TheEndDimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const; // NOLINT
    /**
     * @symbol ?serialize\@TheEndDimension\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    MCVAPI void serialize(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?startLeaveGame\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame(); // NOLINT
    /**
     * @symbol ?tick\@TheEndDimension\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol
     * ?translatePosAcrossDimension\@TheEndDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3
    translatePosAcrossDimension(class Vec3 const&, class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol ?upgradeLevelChunk\@TheEndDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&); // NOLINT
#endif
    /**
     * @symbol ?AMBIENT_MULTIPLIER\@TheEndDimension\@\@2MB
     */
    MCAPI static float const AMBIENT_MULTIPLIER; // NOLINT

    // private:
    /**
     * @symbol
     * ?makeStructureFeatures\@TheEndDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@AEAVDimension\@\@I\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry>
    makeStructureFeatures(class Dimension&, unsigned int); // NOLINT

private:
};
