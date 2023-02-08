/**
 * @file  Dimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class DimensionHeightRange
{
public:
    short min;
    short max;
};
#undef BEFORE_EXTRA

/**
 * @brief MC class Dimension.
 *
 */
class Dimension {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_DIMENSION
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSION
public:
    class Dimension& operator=(class Dimension const &) = delete;
    Dimension(class Dimension const &) = delete;
    Dimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSION
    /**
     * @hash   -34660984
     * @symbol  ?_createChunkBuildOrderPolicy\@Dimension\@\@EEAA?AV?$unique_ptr\@VChunkBuildOrderPolicyBase\@\@U?$default_delete\@VChunkBuildOrderPolicyBase\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
    /**
     * @hash   578320778
     * @symbol  ?deserialize\@Dimension\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   -676699185
     * @symbol  ?forceCheckAllNeighChunkSavedStat\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    /**
     * @hash   211595303
     * @symbol  ?getBrightnessDependentFogColor\@Dimension\@\@UEBA?AVColor\@mce\@\@AEBV23\@M\@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    /**
     * @hash   1019240511
     * @symbol  ?getBrightnessRamp\@Dimension\@\@UEBAAEBVDimensionBrightnessRamp\@\@XZ
     */
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;
    /**
     * @hash   -1174619769
     * @symbol  ?getClearColorScale\@Dimension\@\@UEAAMXZ
     */
    MCVAPI float getClearColorScale();
    /**
     * @hash   -1042547394
     * @symbol  ?getCloudHeight\@Dimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @hash   671543504
     * @symbol  ?getDefaultBiome\@Dimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @hash   -1353890751
     * @symbol  ?getDimensionId\@Dimension\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCVAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -1218979813
     * @symbol  ?getLightTextureImageBuilder\@Dimension\@\@UEBAPEAVBaseLightTextureImageBuilder\@\@XZ
     */
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;
    /**
     * @hash   -824556095
     * @symbol  ?getSpawnPos\@Dimension\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @hash   1726022194
     * @symbol  ?getSpawnYPosition\@Dimension\@\@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @hash   -746596309
     * @symbol  ?getSunIntensity\@Dimension\@\@UEBAMMAEBVVec3\@\@M\@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @hash   907036230
     * @symbol  ?getTimeOfDay\@Dimension\@\@MEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @hash   -1515825819
     * @symbol  ?hasBedrockFog\@Dimension\@\@UEAA_NXZ
     */
    MCVAPI bool hasBedrockFog();
    /**
     * @hash   211451075
     * @symbol  ?hasGround\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @hash   1705293767
     * @symbol  ?hasPrecipitationFog\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasPrecipitationFog() const;
    /**
     * @hash   482992161
     * @symbol  ?init\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @hash   -547727885
     * @symbol  ?is2DPositionRelevantForPlayer\@Dimension\@\@UEBA_NAEBVBlockPos\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const &, class Player &) const;
    /**
     * @hash   -1082023275
     * @symbol  ?isActorRelevantForPlayer\@Dimension\@\@UEBA_NAEAVPlayer\@\@AEBVActor\@\@\@Z
     */
    MCVAPI bool isActorRelevantForPlayer(class Player &, class Actor const &) const;
    /**
     * @hash   -1849287116
     * @symbol  ?isDay\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @hash   -1908696789
     * @symbol  ?isFoggyAt\@Dimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @hash   -814599671
     * @symbol  ?isNaturalDimension\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @hash   -1487223141
     * @symbol  ?isValidSpawn\@Dimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @hash   1778778968
     * @symbol  ?mayRespawnViaBed\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @hash   40910639
     * @symbol  ?onBlockChanged\@Dimension\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @hash   1632077144
     * @symbol  ?onBlockEvent\@Dimension\@\@UEAAXAEAVBlockSource\@\@HHHHH\@Z
     */
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    /**
     * @hash   396799099
     * @symbol  ?onChunkLoaded\@Dimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   1365659182
     * @symbol  ?onLevelDestruction\@Dimension\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const &);
    /**
     * @hash   -324484064
     * @symbol  ?sendBroadcast\@Dimension\@\@UEAAXAEBVPacket\@\@PEAVPlayer\@\@\@Z
     */
    MCVAPI void sendBroadcast(class Packet const &, class Player *);
    /**
     * @hash   -228803685
     * @symbol  ?serialize\@Dimension\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   -1208746042
     * @symbol  ?showSky\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool showSky() const;
    /**
     * @hash   -1684768088
     * @symbol  ?startLeaveGame\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   1753171470
     * @symbol  ?tick\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   2003091394
     * @symbol  ?tickRedstone\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void tickRedstone();
    /**
     * @hash   -1964235448
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~Dimension();
#endif
    /**
     * @hash   -817199885
     * @symbol  ??0Dimension\@\@QEAA\@AEAVILevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@VDimensionHeightRange\@\@AEAVScheduler\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Dimension(class ILevel &, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler &, std::string);
    /**
     * @hash   -1294622059
     * @symbol  ?addActorUnloadedChunkTransferToQueue\@Dimension\@\@QEAAXAEBVChunkPos\@\@0V?$AutomaticID\@VDimension\@\@H\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void addActorUnloadedChunkTransferToQueue(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @hash   -741435340
     * @symbol  ?addPlayerToReplication\@Dimension\@\@QEAAXAEBVWeakEntityRef\@\@\@Z
     */
    MCAPI void addPlayerToReplication(class WeakEntityRef const &);
    /**
     * @hash   1263514632
     * @symbol  ?addWither\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addWither(struct ActorUniqueID const &);
    /**
     * @hash   -1517134453
     * @symbol  ?clearPlayerReplicationList\@Dimension\@\@QEAAXXZ
     */
    MCAPI void clearPlayerReplicationList();
    /**
     * @hash   1012658047
     * @symbol  ?distanceToNearestPlayerSqr2D\@Dimension\@\@QEAAMVVec3\@\@\@Z
     */
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    /**
     * @hash   -471293487
     * @symbol  ?fetchAnyInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @hash   -710951937
     * @symbol  ?fetchEntity\@Dimension\@\@QEBAPEAVActor\@\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;
    /**
     * @hash   -1576649603
     * @symbol  ?fetchNearestAttackablePlayer\@Dimension\@\@QEAAPEAVPlayer\@\@AEAVActor\@\@M\@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);
    /**
     * @hash   -802932437
     * @symbol  ?fetchNearestAttackablePlayer\@Dimension\@\@QEAAPEAVPlayer\@\@VBlockPos\@\@MPEAVActor\@\@\@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);
    /**
     * @hash   910073877
     * @symbol  ?fetchNearestInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @hash   -1256796259
     * @symbol  ?fetchNearestInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEAVActor\@\@M\@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Actor &, float) const;
    /**
     * @hash   442173361
     * @symbol  ?fetchNearestPlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M_NV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Player * fetchNearestPlayer(class Vec3 const &, float, bool, class std::function<bool (class Player const &)>) const;
    /**
     * @hash   1654679564
     * @symbol  ?findPlayer\@Dimension\@\@QEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   -427078252
     * @symbol  ?flagEntityforChunkMove\@Dimension\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void flagEntityforChunkMove(class Actor &);
    /**
     * @hash   -1730571489
     * @symbol  ?flushLevelChunkGarbageCollector\@Dimension\@\@QEAAXXZ
     */
    MCAPI void flushLevelChunkGarbageCollector();
    /**
     * @hash   1145883203
     * @symbol  ?flushRunTimeLighting\@Dimension\@\@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @hash   2086082320
     * @symbol  ?forEachPlayer\@Dimension\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>) const;
    /**
     * @hash   334163895
     * @symbol  ?forceSaveVillageManager\@Dimension\@\@QEAAXXZ
     */
    MCAPI void forceSaveVillageManager();
    /**
     * @hash   760752792
     * @symbol  ?getBlockEventDispatcher\@Dimension\@\@QEAAAEAVBlockEventDispatcher\@\@XZ
     */
    MCAPI class BlockEventDispatcher & getBlockEventDispatcher();
    /**
     * @hash   -1997801508
     * @symbol  ?getBlockSourceFromMainChunkSource\@Dimension\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource & getBlockSourceFromMainChunkSource() const;
    /**
     * @hash   1649194440
     * @symbol  ?getChunkBuildOrderPolicy\@Dimension\@\@QEAAAEAVChunkBuildOrderPolicyBase\@\@XZ
     */
    MCAPI class ChunkBuildOrderPolicyBase & getChunkBuildOrderPolicy();
    /**
     * @hash   1310359199
     * @symbol  ?getChunkLoadActionList\@Dimension\@\@QEAA?AV?$not_null\@PEAVChunkLoadActionList\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class ChunkLoadActionList *> getChunkLoadActionList();
    /**
     * @hash   -1921896584
     * @symbol  ?getChunkSource\@Dimension\@\@QEBAAEAVChunkSource\@\@XZ
     */
    MCAPI class ChunkSource & getChunkSource() const;
    /**
     * @hash   -537935062
     * @symbol  ?getCircuitSystem\@Dimension\@\@QEAAAEAVCircuitSystem\@\@XZ
     */
    MCAPI class CircuitSystem & getCircuitSystem();
    /**
     * @hash   1077326655
     * @symbol  ?getDelayActionList\@Dimension\@\@QEAA?AV?$not_null\@PEAVDelayActionList\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class DelayActionList *> getDelayActionList();
    /**
     * @hash   706582434
     * @symbol  ?getDisplayEntities\@Dimension\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getDisplayEntities();
    /**
     * @hash   -1295724109
     * @symbol  ?getEntityIdMap\@Dimension\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@VWeakEntityRef\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@4\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@VWeakEntityRef\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>> & getEntityIdMap();
    /**
     * @hash   -1353092550
     * @symbol  ?getFeatureTerrainAdjustments\@Dimension\@\@QEAAAEAVFeatureTerrainAdjustments\@\@XZ
     */
    MCAPI class FeatureTerrainAdjustments & getFeatureTerrainAdjustments();
    /**
     * @hash   -1756939051
     * @symbol  ?getGameEventDispatcher\@Dimension\@\@QEBAPEAVGameEventDispatcher\@\@XZ
     */
    MCAPI class GameEventDispatcher * getGameEventDispatcher() const;
    /**
     * @hash   1407563863
     * @symbol  ?getHeight\@Dimension\@\@QEBAFXZ
     */
    MCAPI short getHeight() const;
    /**
     * @hash   1803190205
     * @symbol  ?getHeightInSubchunks\@Dimension\@\@QEBAGXZ
     */
    MCAPI unsigned short getHeightInSubchunks() const;
    /**
     * @hash   670883920
     * @symbol  ?getHeightRange\@Dimension\@\@QEBAAEBVDimensionHeightRange\@\@XZ
     */
    MCAPI class DimensionHeightRange const & getHeightRange() const;
    /**
     * @hash   1866725320
     * @symbol  ?getLevel\@Dimension\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   23867060
     * @symbol  ?getLevelConst\@Dimension\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @hash   -1441073855
     * @symbol  ?getMinHeight\@Dimension\@\@QEBAFXZ
     */
    MCAPI short getMinHeight() const;
    /**
     * @hash   -2038459018
     * @symbol  ?getMoonBrightness\@Dimension\@\@QEBAMXZ
     */
    MCAPI float getMoonBrightness() const;
    /**
     * @hash   -1799237010
     * @symbol  ?getMoonPhase\@Dimension\@\@QEBAHXZ
     */
    MCAPI int getMoonPhase() const;
    /**
     * @hash   634949586
     * @symbol  ?getPopCap\@Dimension\@\@QEBAMH_N\@Z
     */
    MCAPI float getPopCap(int, bool) const;
    /**
     * @hash   -118385078
     * @symbol  ?getSeasons\@Dimension\@\@QEAAAEAVSeasons\@\@XZ
     */
    MCAPI class Seasons & getSeasons();
    /**
     * @hash   2019545118
     * @symbol  ?getSkyDarken\@Dimension\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getSkyDarken() const;
    /**
     * @hash   703555607
     * @symbol  ?getSunAngle\@Dimension\@\@QEBAMM\@Z
     */
    MCAPI float getSunAngle(float) const;
    /**
     * @hash   1573443750
     * @symbol  ?getTickingAreas\@Dimension\@\@QEAAAEAVTickingAreaList\@\@XZ
     */
    MCAPI class TickingAreaList & getTickingAreas();
    /**
     * @hash   806835240
     * @symbol  ?getTickingAreasConst\@Dimension\@\@QEBAAEBVTickingAreaList\@\@XZ
     */
    MCAPI class TickingAreaList const & getTickingAreasConst() const;
    /**
     * @hash   -327686385
     * @symbol  ?getTimeOfDay\@Dimension\@\@QEBAMM\@Z
     */
    MCAPI float getTimeOfDay(float) const;
    /**
     * @hash   -882224722
     * @symbol  ?getVillageManager\@Dimension\@\@QEBAAEBV?$unique_ptr\@VVillageManager\@\@U?$default_delete\@VVillageManager\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class VillageManager> const & getVillageManager() const;
    /**
     * @hash   860361224
     * @symbol  ?getWeakRef\@Dimension\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getWeakRef();
    /**
     * @hash   -1729665816
     * @symbol  ?getWeather\@Dimension\@\@QEBAAEAVWeather\@\@XZ
     */
    MCAPI class Weather & getWeather() const;
    /**
     * @hash   -1419211655
     * @symbol  ?getWorldGenerator\@Dimension\@\@QEBAPEAVWorldGenerator\@\@XZ
     */
    MCAPI class WorldGenerator * getWorldGenerator() const;
    /**
     * @hash   -1905914924
     * @symbol  ?hasCeiling\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool hasCeiling() const;
    /**
     * @hash   -402801214
     * @symbol  ?hasSkylight\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool hasSkylight() const;
    /**
     * @hash   143202003
     * @symbol  ?isChunkKnown\@Dimension\@\@QEBA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool isChunkKnown(class ChunkPos const &) const;
    /**
     * @hash   644104716
     * @symbol  ?isClientSideGenerationEnabled\@Dimension\@\@QEBA?B_NXZ
     */
    MCAPI bool const isClientSideGenerationEnabled() const;
    /**
     * @hash   1271551945
     * @symbol  ?isHeightWithinRange\@Dimension\@\@QEBA_NAEBF\@Z
     */
    MCAPI bool isHeightWithinRange(short const &) const;
    /**
     * @hash   1564911330
     * @symbol  ?isLeaveGameDone\@Dimension\@\@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone();
    /**
     * @hash   -900945692
     * @symbol  ?isRedstoneTick\@Dimension\@\@QEAA_NXZ
     */
    MCAPI bool isRedstoneTick();
    /**
     * @hash   519940467
     * @symbol  ?isSubChunkHeightWithinRange\@Dimension\@\@QEBA_NAEBF\@Z
     */
    MCAPI bool isSubChunkHeightWithinRange(short const &) const;
    /**
     * @hash   1894056722
     * @symbol  ?isUltraWarm\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool isUltraWarm() const;
    /**
     * @hash   -588522184
     * @symbol  ?onStaticTickingAreaAdded\@Dimension\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void onStaticTickingAreaAdded(std::string const &);
    /**
     * @hash   -1945886293
     * @symbol  ?processPlayerReplication\@Dimension\@\@QEAAXXZ
     */
    MCAPI void processPlayerReplication();
    /**
     * @hash   1997363802
     * @symbol  ?registerEntity\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void registerEntity(struct ActorUniqueID const &, class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   -100164342
     * @symbol  ?removeActorByID\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeActorByID(struct ActorUniqueID const &);
    /**
     * @hash   1672212836
     * @symbol  ?removeWither\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeWither(struct ActorUniqueID const &);
    /**
     * @hash   355302391
     * @symbol  ?sendPacketForEntity\@Dimension\@\@QEAAXAEBVActor\@\@AEBVPacket\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);
    /**
     * @hash   1478492785
     * @symbol  ?sendPacketForPosition\@Dimension\@\@QEAAXAEBVBlockPos\@\@AEBVPacket\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);
    /**
     * @hash   -352134421
     * @symbol  ?sendPacketToClients\@Dimension\@\@QEAAXAEBVPacket\@\@V?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void sendPacketToClients(class Packet const &, std::vector<struct NetworkIdentifierWithSubId>);
    /**
     * @hash   484157656
     * @symbol  ?setCeiling\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setCeiling(bool);
    /**
     * @hash   233289930
     * @symbol  ?setSkylight\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setSkylight(bool);
    /**
     * @hash   1597600440
     * @symbol  ?setUltraWarm\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setUltraWarm(bool);
    /**
     * @hash   -1578172065
     * @symbol  ?transferEntity\@Dimension\@\@QEAAXAEBVChunkPos\@\@AEBVVec3\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void transferEntity(class ChunkPos const &, class Vec3 const &, std::unique_ptr<class CompoundTag>, bool);
    /**
     * @hash   -2099667616
     * @symbol  ?transferEntityToUnloadedChunk\@Dimension\@\@QEAAXAEAVActor\@\@PEAVLevelChunk\@\@\@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class Actor &, class LevelChunk *);
    /**
     * @hash   -591288553
     * @symbol  ?transferEntityToUnloadedChunk\@Dimension\@\@QEAAXAEBVChunkPos\@\@0V?$AutomaticID\@VDimension\@\@H\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @hash   -290244971
     * @symbol  ?tryGarbageCollectStructures\@Dimension\@\@QEAAXXZ
     */
    MCAPI void tryGarbageCollectStructures();
    /**
     * @hash   1013751446
     * @symbol  ?tryLoadLimboEntities\@Dimension\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);
    /**
     * @hash   -1318965429
     * @symbol  ?unregisterDisplayEntity\@Dimension\@\@QEAAXV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   404357812
     * @symbol  ?unregisterEntity\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void unregisterEntity(struct ActorUniqueID const &);
    /**
     * @hash   282080520
     * @symbol  ?updateBlockLight\@Dimension\@\@QEAAXAEBVBlockPos\@\@UBrightness\@\@111_N\@Z
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @hash   1560493635
     * @symbol  ?updateDimensionBlockSourceTick\@Dimension\@\@QEAAXXZ
     */
    MCAPI void updateDimensionBlockSourceTick();
    /**
     * @hash   -79122479
     * @symbol  ?CurrentLimboEntitiesVersion\@Dimension\@\@2W4LimboEntitiesVersion\@\@B
     */
    MCAPI static enum class LimboEntitiesVersion const CurrentLimboEntitiesVersion;
    /**
     * @hash   -60806433
     * @symbol  ?LOW_CPU_PACKET_BLOCK_LIMIT\@Dimension\@\@2IB
     */
    MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT;
    /**
     * @hash   83764840
     * @symbol  ?MOON_BRIGHTNESS_PER_PHASE\@Dimension\@\@2QBMB
     */
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];
    /**
     * @hash   1214583889
     * @symbol  ?STRUCTURE_PRUNE_INTERVAL\@Dimension\@\@2V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

//protected:
    /**
     * @symbol  ?_completeEntityTransfer\@Dimension\@\@IEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI void _completeEntityTransfer(class OwnerPtrT<struct EntityRefTraits>, bool);

//private:
    /**
     * @hash   -1026977884
     * @symbol  ?_processEntityChunkTransfers\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _processEntityChunkTransfers();
    /**
     * @hash   -215924047
     * @symbol  ?_sendBlockEntityUpdatePacket\@Dimension\@\@AEAAXAEBVNetworkBlockPosition\@\@\@Z
     */
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const &);
    /**
     * @hash   1423955466
     * @symbol  ?_sendBlocksChangedPackets\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _sendBlocksChangedPackets();
    /**
     * @hash   833974586
     * @symbol  ?_tickEntityChunkMoves\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _tickEntityChunkMoves();

protected:

private:

};