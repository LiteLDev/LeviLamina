/**
 * @file  TheEndDimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -491647152
     * @symbol ?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion);
    /**
     * @hash   126654601
     * @symbol ?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @hash   1224723221
     * @symbol ?createGenerator@TheEndDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @hash   -1629717760
     * @symbol ?deserialize@TheEndDimension@@UEAAXAEBVCompoundTag@@@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   1318145520
     * @symbol ?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   -15093208
     * @symbol ?getCloudHeight@TheEndDimension@@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @symbol ?getDefaultBiome@TheEndDimension@@UEBA?AVHashedString@@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @hash   1702770667
     * @symbol ?getSpawnPos@TheEndDimension@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @hash   -683080900
     * @symbol ?getSpawnYPosition@TheEndDimension@@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @hash   -1786373231
     * @symbol ?getSunIntensity@TheEndDimension@@UEBAMMAEBVVec3@@M@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @hash   1468366567
     * @symbol ?getTimeOfDay@TheEndDimension@@UEBAMHM@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @hash   -1775350243
     * @symbol ?hasGround@TheEndDimension@@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @hash   492853371
     * @symbol ?init@TheEndDimension@@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @hash   2107214094
     * @symbol ?isDay@TheEndDimension@@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @hash   -465795659
     * @symbol ?isFoggyAt@TheEndDimension@@UEBA_NHH@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @hash   1554817891
     * @symbol ?isNaturalDimension@TheEndDimension@@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @hash   -1703058651
     * @symbol ?isValidSpawn@TheEndDimension@@UEBA_NHH@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @hash   -849585950
     * @symbol ?levelChunkNeedsUpgrade@TheEndDimension@@UEBA_NAEBVLevelChunk@@@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const &) const;
    /**
     * @hash   1547996338
     * @symbol ?mayRespawnViaBed@TheEndDimension@@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @hash   1033505249
     * @symbol ?serialize@TheEndDimension@@UEBAXAEAVCompoundTag@@@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   444653202
     * @symbol ?startLeaveGame@TheEndDimension@@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   -1160787528
     * @symbol ?tick@TheEndDimension@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   -1347358701
     * @symbol ?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   171539740
     * @symbol ?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &, class LevelChunk &);
#endif
    /**
     * @hash   -1426053918
     * @symbol ??0TheEndDimension@@QEAA@AEAVLevel@@AEAVScheduler@@@Z
     */
    MCAPI TheEndDimension(class Level &, class Scheduler &);
    /**
     * @hash   1688483875
     * @symbol ?AMBIENT_MULTIPLIER@TheEndDimension@@2MB
     */
    MCAPI static float const AMBIENT_MULTIPLIER;

//private:
    /**
     * @hash   -1197721227
     * @symbol ?makeStructureFeatures@TheEndDimension@@CA?AV?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@AEAVDimension@@I@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(class Dimension &, unsigned int);

private:

};