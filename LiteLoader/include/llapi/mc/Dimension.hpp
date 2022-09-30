/**
 * @file  Dimension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -837841720
     * @symbol ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
    /**
     * @hash   -224921462
     * @symbol ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
     */
    MCVAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   -777319729
     * @symbol ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    /**
     * @hash   -591277913
     * @symbol ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    /**
     * @hash   216367295
     * @symbol ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
     */
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;
    /**
     * @hash   -1977508361
     * @symbol ?getClearColorScale@Dimension@@UEAAMXZ
     */
    MCVAPI float getClearColorScale();
    /**
     * @hash   -1291530962
     * @symbol ?getCloudHeight@Dimension@@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @symbol ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const;
    /**
     * @hash   -2021914533
     * @symbol ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
     */
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;
    /**
     * @hash   -88860623
     * @symbol ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const;
    /**
     * @hash   1629399410
     * @symbol ?getSpawnYPosition@Dimension@@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const;
    /**
     * @hash   -1549546405
     * @symbol ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    /**
     * @hash   104086134
     * @symbol ?getTimeOfDay@Dimension@@MEBAMHM@Z
     */
    MCVAPI float getTimeOfDay(int, float) const;
    /**
     * @hash   -1616446363
     * @symbol ?hasBedrockFog@Dimension@@UEAA_NXZ
     */
    MCVAPI bool hasBedrockFog();
    /**
     * @hash   111553203
     * @symbol ?hasGround@Dimension@@UEBA_NXZ
     */
    MCVAPI bool hasGround() const;
    /**
     * @symbol ?hasPrecipitationFog@Dimension@@UEBA_NXZ
     */
    MCVAPI bool hasPrecipitationFog() const;
    /**
     * @hash   -320080943
     * @symbol ?init@Dimension@@UEAAXXZ
     */
    MCVAPI void init();
    /**
     * @hash   -1351246893
     * @symbol ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
     */
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const &, class Player &) const;
    /**
     * @hash   -1885542283
     * @symbol ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
     */
    MCVAPI bool isActorRelevantForPlayer(class Player &, class Actor const &) const;
    /**
     * @hash   1642099668
     * @symbol ?isDay@Dimension@@UEBA_NXZ
     */
    MCVAPI bool isDay() const;
    /**
     * @hash   -2009317333
     * @symbol ?isFoggyAt@Dimension@@UEBA_NHH@Z
     */
    MCVAPI bool isFoggyAt(int, int) const;
    /**
     * @hash   -914497543
     * @symbol ?isNaturalDimension@Dimension@@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const;
    /**
     * @hash   -1587843685
     * @symbol ?isValidSpawn@Dimension@@UEBA_NHH@Z
     */
    MCVAPI bool isValidSpawn(int, int) const;
    /**
     * @hash   1678881096
     * @symbol ?mayRespawnViaBed@Dimension@@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const;
    /**
     * @hash   -762731377
     * @symbol ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @hash   828419752
     * @symbol ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
     */
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    /**
     * @hash   -406873669
     * @symbol ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   561924910
     * @symbol ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onLevelDestruction(std::string const &);
    /**
     * @hash   -1129310032
     * @symbol ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
     */
    MCVAPI void sendBroadcast(class Packet const &, class Player *);
    /**
     * @hash   -1033737285
     * @symbol ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
     */
    MCVAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   -1308643914
     * @symbol ?showSky@Dimension@@UEBA_NXZ
     */
    MCVAPI bool showSky() const;
    /**
     * @hash   1805265608
     * @symbol ?startLeaveGame@Dimension@@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   948207118
     * @symbol ?tick@Dimension@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   1198050162
     * @symbol ?tickRedstone@Dimension@@UEAAXXZ
     */
    MCVAPI void tickRedstone();
    /**
     * @hash   1528904200
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Dimension();
#endif
    /**
     * @hash   -1619365805
     * @symbol ??0Dimension@@QEAA@AEAVILevel@@V?$AutomaticID@VDimension@@H@@VDimensionHeightRange@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI Dimension(class ILevel &, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler &, std::string);
    /**
     * @hash   -2097649035
     * @symbol ?addActorUnloadedChunkTransferToQueue@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
     */
    MCAPI void addActorUnloadedChunkTransferToQueue(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?addPlayerToReplication@Dimension@@QEAAXAEBVWeakEntityRef@@@Z
     */
    MCAPI void addPlayerToReplication(class WeakEntityRef const &);
    /**
     * @hash   460395400
     * @symbol ?addWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void addWither(struct ActorUniqueID const &);
    /**
     * @symbol ?clearPlayerReplicationList@Dimension@@QEAAXXZ
     */
    MCAPI void clearPlayerReplicationList();
    /**
     * @hash   209385055
     * @symbol ?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z
     */
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    /**
     * @hash   -1273874559
     * @symbol ?fetchAnyInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @hash   95462113
     * @symbol ?fetchAnyPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchAnyPlayer(class Vec3 const &, float) const;
    /**
     * @hash   1755958625
     * @symbol ?fetchEntity@Dimension@@QEAAPEAVActor@@UActorUniqueID@@_N@Z
     */
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool);
    /**
     * @hash   1915782749
     * @symbol ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);
    /**
     * @hash   -1605467381
     * @symbol ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z
     */
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);
    /**
     * @hash   -2059331203
     * @symbol ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Actor &, float) const;
    /**
     * @hash   107538933
     * @symbol ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
     */
    MCAPI class Player * fetchNearestInteractablePlayer(class Vec3 const &, float) const;
    /**
     * @symbol ?fetchNearestPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M_NV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCAPI class Player * fetchNearestPlayer(class Vec3 const &, float, bool, class std::function<bool (class Player const &)>) const;
    /**
     * @hash   851883228
     * @symbol ?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   -1229905340
     * @symbol ?flagEntityforChunkMove@Dimension@@QEAAXAEAVActor@@@Z
     */
    MCAPI void flagEntityforChunkMove(class Actor &);
    /**
     * @hash   1761568719
     * @symbol ?flushLevelChunkGarbageCollector@Dimension@@QEAAXXZ
     */
    MCAPI void flushLevelChunkGarbageCollector();
    /**
     * @hash   343056115
     * @symbol ?flushRunTimeLighting@Dimension@@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @hash   1283255232
     * @symbol ?forEachPlayer@Dimension@@QEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
     */
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>) const;
    /**
     * @hash   -468693945
     * @symbol ?forceSaveVillageManager@Dimension@@QEAAXXZ
     */
    MCAPI void forceSaveVillageManager();
    /**
     * @hash   -42105048
     * @symbol ?getBlockEventDispatcher@Dimension@@QEAAAEAVBlockEventDispatcher@@XZ
     */
    MCAPI class BlockEventDispatcher & getBlockEventDispatcher();
    /**
     * @hash   2071993452
     * @symbol ?getBlockSourceFromMainChunkSource@Dimension@@QEBAAEAVBlockSource@@XZ
     */
    MCAPI class BlockSource & getBlockSourceFromMainChunkSource() const;
    /**
     * @hash   846321224
     * @symbol ?getChunkBuildOrderPolicy@Dimension@@QEAAAEAVChunkBuildOrderPolicyBase@@XZ
     */
    MCAPI class ChunkBuildOrderPolicyBase & getChunkBuildOrderPolicy();
    /**
     * @hash   507485983
     * @symbol ?getChunkLoadActionList@Dimension@@QEAA?AV?$not_null@PEAVChunkLoadActionList@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class ChunkLoadActionList *> getChunkLoadActionList();
    /**
     * @hash   -1735053624
     * @symbol ?getChunkSource@Dimension@@QEBAAEAVChunkSource@@XZ
     */
    MCAPI class ChunkSource & getChunkSource() const;
    /**
     * @hash   -439734742
     * @symbol ?getCircuitSystem@Dimension@@QEAAAEAVCircuitSystem@@XZ
     */
    MCAPI class CircuitSystem & getCircuitSystem();
    /**
     * @hash   274391935
     * @symbol ?getDelayActionList@Dimension@@QEAA?AV?$not_null@PEAVDelayActionList@@@gsl@@XZ
     */
    MCAPI class gsl::not_null<class DelayActionList *> getDelayActionList();
    /**
     * @hash   -242567582
     * @symbol ?getDimensionId@Dimension@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -96336910
     * @symbol ?getDisplayEntities@Dimension@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getDisplayEntities();
    /**
     * @hash   1455872595
     * @symbol ?getEntityIdMap@Dimension@@QEAAAEAV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>> & getEntityIdMap();
    /**
     * @hash   -2013663851
     * @symbol ?getEntityIdMapConst@Dimension@@QEBAAEBV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, class WeakEntityRef, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>> const & getEntityIdMapConst() const;
    /**
     * @hash   2138955402
     * @symbol ?getFeatureTerrainAdjustments@Dimension@@QEAAAEAVFeatureTerrainAdjustments@@XZ
     */
    MCAPI class FeatureTerrainAdjustments & getFeatureTerrainAdjustments();
    /**
     * @hash   40518341
     * @symbol ?getGameEventDispatcher@Dimension@@QEBAPEAVGameEventDispatcher@@XZ
     */
    MCAPI class GameEventDispatcher * getGameEventDispatcher() const;
    /**
     * @hash   604629143
     * @symbol ?getHeight@Dimension@@QEBAFXZ
     */
    MCAPI short getHeight() const;
    /**
     * @hash   1000255485
     * @symbol ?getHeightInSubchunks@Dimension@@QEBAGXZ
     */
    MCAPI unsigned short getHeightInSubchunks() const;
    /**
     * @hash   -764050528
     * @symbol ?getHeightRange@Dimension@@QEBAAEBVDimensionHeightRange@@XZ
     */
    MCAPI class DimensionHeightRange const & getHeightRange() const;
    /**
     * @hash   -1510709928
     * @symbol ?getLevel@Dimension@@QEBAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   941399108
     * @symbol ?getLevelConst@Dimension@@QEBAAEBVLevel@@XZ
     */
    MCAPI class Level const & getLevelConst() const;
    /**
     * @hash   2050958721
     * @symbol ?getMinHeight@Dimension@@QEBAFXZ
     */
    MCAPI short getMinHeight() const;
    /**
     * @hash   1453573558
     * @symbol ?getMoonBrightness@Dimension@@QEBAMXZ
     */
    MCAPI float getMoonBrightness() const;
    /**
     * @hash   1692780190
     * @symbol ?getMoonPhase@Dimension@@QEBAHXZ
     */
    MCAPI int getMoonPhase() const;
    /**
     * @hash   -168000510
     * @symbol ?getPopCap@Dimension@@QEBAMH_N@Z
     */
    MCAPI float getPopCap(int, bool) const;
    /**
     * @hash   2068398826
     * @symbol ?getSeasons@Dimension@@QEAAAEAVSeasons@@XZ
     */
    MCAPI class Seasons & getSeasons();
    /**
     * @hash   1216595022
     * @symbol ?getSkyDarken@Dimension@@QEBA?AUBrightness@@XZ
     */
    MCAPI struct Brightness getSkyDarken() const;
    /**
     * @hash   -99394489
     * @symbol ?getSunAngle@Dimension@@QEBAMM@Z
     */
    MCAPI float getSunAngle(float) const;
    /**
     * @hash   770493654
     * @symbol ?getTickingAreas@Dimension@@QEAAAEAVTickingAreaList@@XZ
     */
    MCAPI class TickingAreaList & getTickingAreas();
    /**
     * @hash   3885144
     * @symbol ?getTickingAreasConst@Dimension@@QEBAAEBVTickingAreaList@@XZ
     */
    MCAPI class TickingAreaList const & getTickingAreasConst() const;
    /**
     * @hash   -1130636481
     * @symbol ?getTimeOfDay@Dimension@@QEBAMM@Z
     */
    MCAPI float getTimeOfDay(float) const;
    /**
     * @hash   -1685190194
     * @symbol ?getVillageManager@Dimension@@QEBAAEBV?$unique_ptr@VVillageManager@@U?$default_delete@VVillageManager@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class VillageManager> const & getVillageManager() const;
    /**
     * @hash   263992536
     * @symbol ?getWeather@Dimension@@QEBAAEAVWeather@@XZ
     */
    MCAPI class Weather & getWeather() const;
    /**
     * @hash   1992455161
     * @symbol ?getWorldGenerator@Dimension@@QEBAPEAVWorldGenerator@@XZ
     */
    MCAPI class WorldGenerator * getWorldGenerator() const;
    /**
     * @hash   385685572
     * @symbol ?hasCeiling@Dimension@@QEBA_NXZ
     */
    MCAPI bool hasCeiling() const;
    /**
     * @hash   1888276498
     * @symbol ?hasSkylight@Dimension@@QEBA_NXZ
     */
    MCAPI bool hasSkylight() const;
    /**
     * @hash   -660332381
     * @symbol ?isChunkKnown@Dimension@@QEBA_NAEBVChunkPos@@@Z
     */
    MCAPI bool isChunkKnown(class ChunkPos const &) const;
    /**
     * @symbol ?isClientSideGenerationEnabled@Dimension@@QEBA?B_NXZ
     */
    MCAPI bool const isClientSideGenerationEnabled() const;
    /**
     * @hash   761300066
     * @symbol ?isLeaveGameDone@Dimension@@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone();
    /**
     * @hash   -1704572332
     * @symbol ?isRedstoneTick@Dimension@@QEAA_NXZ
     */
    MCAPI bool isRedstoneTick();
    /**
     * @hash   -283686173
     * @symbol ?isSubChunkHeightWithinRange@Dimension@@QEBA_NAEBF@Z
     */
    MCAPI bool isSubChunkHeightWithinRange(short const &) const;
    /**
     * @hash   -113707614
     * @symbol ?isUltraWarm@Dimension@@QEBA_NXZ
     */
    MCAPI bool isUltraWarm() const;
    /**
     * @hash   -1392256456
     * @symbol ?onStaticTickingAreaAdded@Dimension@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void onStaticTickingAreaAdded(std::string const &);
    /**
     * @symbol ?processPlayerReplication@Dimension@@QEAAXXZ
     */
    MCAPI void processPlayerReplication();
    /**
     * @hash   329104107
     * @symbol ?registerDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void registerDisplayEntity(class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   1192553210
     * @symbol ?registerEntity@Dimension@@QEAAXAEBUActorUniqueID@@V?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void registerEntity(struct ActorUniqueID const &, class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   -904974934
     * @symbol ?removeActorByID@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void removeActorByID(struct ActorUniqueID const &);
    /**
     * @hash   867386868
     * @symbol ?removeWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void removeWither(struct ActorUniqueID const &);
    /**
     * @hash   -449554329
     * @symbol ?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z
     */
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);
    /**
     * @hash   673605313
     * @symbol ?sendPacketForPosition@Dimension@@QEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
     */
    MCAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);
    /**
     * @hash   -1157052645
     * @symbol ?sendPacketToClients@Dimension@@QEAAXAEBVPacket@@V?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@@Z
     */
    MCAPI void sendPacketToClients(class Packet const &, std::vector<struct NetworkIdentifierWithSubId>);
    /**
     * @hash   -320775944
     * @symbol ?setCeiling@Dimension@@QEAAX_N@Z
     */
    MCAPI void setCeiling(bool);
    /**
     * @hash   -571643670
     * @symbol ?setSkylight@Dimension@@QEAAX_N@Z
     */
    MCAPI void setSkylight(bool);
    /**
     * @hash   792666840
     * @symbol ?setUltraWarm@Dimension@@QEAAX_N@Z
     */
    MCAPI void setUltraWarm(bool);
    /**
     * @hash   1911753999
     * @symbol ?transferEntity@Dimension@@QEAAXAEBVChunkPos@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
     */
    MCAPI void transferEntity(class ChunkPos const &, class Vec3 const &, std::unique_ptr<class CompoundTag>, bool);
    /**
     * @hash   1390212320
     * @symbol ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEAVActor@@PEAVLevelChunk@@@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class Actor &, class LevelChunk *);
    /**
     * @hash   -1396422041
     * @symbol ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class ChunkPos const &, class ChunkPos const &, class AutomaticID<class Dimension, int>, std::string &, std::unique_ptr<class CompoundTag>);
    /**
     * @hash   -1095378459
     * @symbol ?tryGarbageCollectStructures@Dimension@@QEAAXXZ
     */
    MCAPI void tryGarbageCollectStructures();
    /**
     * @hash   1827764506
     * @symbol ?tryGetClosestPublicRegion@Dimension@@QEBAPEAVBlockSource@@AEBVChunkPos@@@Z
     */
    MCAPI class BlockSource * tryGetClosestPublicRegion(class ChunkPos const &) const;
    /**
     * @hash   208510326
     * @symbol ?tryLoadLimboEntities@Dimension@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);
    /**
     * @hash   -2124221925
     * @symbol ?unregisterDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   -400929436
     * @symbol ?unregisterEntity@Dimension@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void unregisterEntity(struct ActorUniqueID const &);
    /**
     * @hash   -523206728
     * @symbol ?updateBlockLight@Dimension@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @hash   755206387
     * @symbol ?updateDimensionBlockSourceTick@Dimension@@QEAAXXZ
     */
    MCAPI void updateDimensionBlockSourceTick();
    /**
     * @hash   -1120954111
     * @symbol ?CurrentLimboEntitiesVersion@Dimension@@2W4LimboEntitiesVersion@@B
     */
    MCAPI static enum class LimboEntitiesVersion const CurrentLimboEntitiesVersion;
    /**
     * @hash   -1102638065
     * @symbol ?LOW_CPU_PACKET_BLOCK_LIMIT@Dimension@@2IB
     */
    MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT;
    /**
     * @hash   -958066792
     * @symbol ?MOON_BRIGHTNESS_PER_PHASE@Dimension@@2QBMB
     */
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];
    /**
     * @hash   172752257
     * @symbol ?STRUCTURE_PRUNE_INTERVAL@Dimension@@2V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

//protected:
    /**
     * @hash   -1175900637
     * @symbol ?_completeEntityTransfer@Dimension@@IEAAXAEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
     */
    MCAPI void _completeEntityTransfer(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>, bool);

//private:
    /**
     * @hash   -1829912604
     * @symbol ?_processEntityChunkTransfers@Dimension@@AEAAXXZ
     */
    MCAPI void _processEntityChunkTransfers();
    /**
     * @hash   -1018889519
     * @symbol ?_sendBlockEntityUpdatePacket@Dimension@@AEAAXAEBVNetworkBlockPosition@@@Z
     */
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const &);
    /**
     * @hash   620989994
     * @symbol ?_sendBlocksChangedPackets@Dimension@@AEAAXXZ
     */
    MCAPI void _sendBlocksChangedPackets();
    /**
     * @hash   30962986
     * @symbol ?_tickEntityChunkMoves@Dimension@@AEAAXXZ
     */
    MCAPI void _tickEntityChunkMoves();

protected:

private:

};