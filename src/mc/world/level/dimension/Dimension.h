#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class Dimension {
public:
    // Dimension inner types declare
    // clang-format off
    struct PlayerReplicationStructures;
    // clang-format on

    // Dimension inner types define
    struct PlayerReplicationStructures {
    public:
        // prevent constructor by default
        PlayerReplicationStructures& operator=(PlayerReplicationStructures const&);
        PlayerReplicationStructures(PlayerReplicationStructures const&);
        PlayerReplicationStructures();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?processReplicationForPlayers@PlayerReplicationStructures@Dimension@@QEAAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@PEAV2@@Z
        MCAPI void
        processReplicationForPlayers(std::vector<class WeakEntityRef> const& playerList, class Dimension* owner);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&);
    Dimension(Dimension const&);
    Dimension();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // symbol: ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
    MCVAPI void deserialize(class CompoundTag const& tag);

    // symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    MCVAPI void flushLevelChunkGarbageCollector();

    // symbol: ?forEachPlayer@Dimension@@UEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    MCVAPI void forEachPlayer(std::function<bool(class Player&)> callback) const;

    // symbol: ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    // symbol: ?getBiomeRegistry@Dimension@@UEBAAEBVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

    // symbol: ?getBiomeRegistry@Dimension@@UEAAAEAVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry& getBiomeRegistry();

    // symbol: ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    // symbol: ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
    MCVAPI class DimensionBrightnessRamp const& getBrightnessRamp() const;

    // symbol: ?getClearColorScale@Dimension@@UEAAMXZ
    MCVAPI float getClearColorScale();

    // symbol: ?getCloudHeight@Dimension@@UEBAFXZ
    MCVAPI short getCloudHeight() const;

    // symbol: ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
    MCVAPI class HashedString getDefaultBiome() const;

    // symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCVAPI DimensionType getDimensionId() const;

    // symbol: ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
    MCVAPI class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // symbol: ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos getSpawnPos() const;

    // symbol: ?getSpawnYPosition@Dimension@@UEBAHXZ
    MCVAPI int getSpawnYPosition() const;

    // symbol: ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
    MCVAPI float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    // symbol: ?getTimeOfDay@Dimension@@MEBAMHM@Z
    MCVAPI float getTimeOfDay(int time, float a) const;

    // symbol: ?hasBedrockFog@Dimension@@UEAA_NXZ
    MCVAPI bool hasBedrockFog();

    // symbol: ?hasGround@Dimension@@UEBA_NXZ
    MCVAPI bool hasGround() const;

    // symbol: ?hasPrecipitationFog@Dimension@@UEBA_NXZ
    MCVAPI bool hasPrecipitationFog() const;

    // symbol: ?init@Dimension@@UEAAXAEBVStructureSetRegistry@worldgen@br@@@Z
    MCVAPI void init(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    MCVAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const& position, class Player& player) const;

    // symbol: ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
    MCVAPI bool isActorRelevantForPlayer(class Player& player, class Actor const& actor) const;

    // symbol: ?isDay@Dimension@@UEBA_NXZ
    MCVAPI bool isDay() const;

    // symbol: ?isFoggyAt@Dimension@@UEBA_NHH@Z
    MCVAPI bool isFoggyAt(int x, int z) const;

    // symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    MCVAPI bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@Dimension@@UEBA_NHH@Z
    MCVAPI bool isValidSpawn(int x, int z) const;

    // symbol: ?mayRespawnViaBed@Dimension@@UEBA_NXZ
    MCVAPI bool mayRespawnViaBed() const;

    // symbol:
    // ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void onBlockChanged(
        class BlockSource&                  source,
        class BlockPos const&               pos,
        uint                                layer,
        class Block const&                  block,
        class Block const&                  oldBlock,
        int                                 updateFlags,
        struct ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget           eventTarget,
        class Actor*                        blockChangeSource
    );

    // symbol: ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
    MCVAPI void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    // symbol: ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onLevelDestruction(std::string const&);

    // symbol: ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
    MCVAPI void sendBroadcast(class Packet const& packet, class Player* except);

    // symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    MCVAPI void
    sendPacketForPosition(class BlockPos const& position, class Packet const& packet, class Player const* except);

    // symbol: ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
    MCVAPI void serialize(class CompoundTag& tag) const;

    // symbol: ?showSky@Dimension@@UEBA_NXZ
    MCVAPI bool showSky() const;

    // symbol: ?startLeaveGame@Dimension@@UEAAXXZ
    MCVAPI void startLeaveGame();

    // symbol: ?tick@Dimension@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ?tickRedstone@Dimension@@UEAAXXZ
    MCVAPI void tickRedstone();

    // symbol: ??1Dimension@@UEAA@XZ
    MCVAPI ~Dimension();

    // symbol:
    // ??0Dimension@@QEAA@AEAVILevel@@V?$AutomaticID@VDimension@@H@@VDimensionHeightRange@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI Dimension(
        class ILevel&              level,
        DimensionType              dimId,
        class DimensionHeightRange heightRange,
        class Scheduler&           callbackContext,
        std::string                name
    );

    // symbol:
    // ?addActorUnloadedChunkTransferToQueue@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void addActorUnloadedChunkTransferToQueue(
        class ChunkPos const&,
        class ChunkPos const&,
        DimensionType dimId,
        std::string&,
        std::unique_ptr<class CompoundTag> entityTag
    );

    // symbol: ?addPlayerToReplication@Dimension@@QEAAXAEBVWeakEntityRef@@@Z
    MCAPI void addPlayerToReplication(class WeakEntityRef const& player);

    // symbol: ?addWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void addWither(struct ActorUniqueID const& id);

    // symbol: ?clearPlayerReplicationList@Dimension@@QEAAXXZ
    MCAPI void clearPlayerReplicationList();

    // symbol: ?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3 origin);

    // symbol: ?fetchAnyInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player* fetchAnyInteractablePlayer(class Vec3 const&, float maxDist) const;

    // symbol: ?fetchEntity@Dimension@@QEBAPEAVActor@@UActorUniqueID@@_N@Z
    MCAPI class Actor* fetchEntity(struct ActorUniqueID actorID, bool getRemoved) const;

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player* fetchNearestAttackablePlayer(class Actor& source, float maxDist) const;

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEBAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z
    MCAPI class Player*
    fetchNearestAttackablePlayer(class BlockPos source, float maxDist, class Actor* sourceActor) const;

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player* fetchNearestInteractablePlayer(class Actor& source, float maxDist) const;

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player* fetchNearestInteractablePlayer(class Vec3 const&, float maxDist) const;

    // symbol: ?fetchNearestPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M_NV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player*
    fetchNearestPlayer(class Vec3 const&, float maxDist, bool, std::function<bool(class Player const&)>) const;

    // symbol: ?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player* findPlayer(std::function<bool(class Player const&)> pred) const;

    // symbol: ?flagEntityforChunkMove@Dimension@@QEAAXAEAVActor@@@Z
    MCAPI void flagEntityforChunkMove(class Actor& e);

    // symbol: ?flushRunTimeLighting@Dimension@@QEAAXXZ
    MCAPI void flushRunTimeLighting();

    // symbol: ?getBlockEventDispatcher@Dimension@@QEAAAEAVBlockEventDispatcher@@XZ
    MCAPI class BlockEventDispatcher& getBlockEventDispatcher();

    // symbol: ?getBlockSourceFromMainChunkSource@Dimension@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getBlockSourceFromMainChunkSource() const;

    // symbol: ?getChunkBuildOrderPolicy@Dimension@@QEAAAEAVChunkBuildOrderPolicyBase@@XZ
    MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();

    // symbol: ?getChunkLoadActionList@Dimension@@QEAA?AV?$not_null@PEAVChunkLoadActionList@@@gsl@@XZ
    MCAPI gsl::not_null<class ChunkLoadActionList*> getChunkLoadActionList();

    // symbol: ?getChunkSource@Dimension@@QEBAAEAVChunkSource@@XZ
    MCAPI class ChunkSource& getChunkSource() const;

    // symbol: ?getCircuitSystem@Dimension@@QEAAAEAVCircuitSystem@@XZ
    MCAPI class CircuitSystem& getCircuitSystem();

    // symbol: ?getDelayActionList@Dimension@@QEAA?AV?$not_null@PEAVDelayActionList@@@gsl@@XZ
    MCAPI gsl::not_null<class DelayActionList*> getDelayActionList();

    // symbol:
    // ?getDisplayEntities@Dimension@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
    MCAPI std::vector<class WeakEntityRef>& getDisplayEntities();

    // symbol:
    // ?getEntityIdMap@Dimension@@QEAAAEAV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<struct ActorUniqueID, class WeakEntityRef>& getEntityIdMap();

    // symbol: ?getFeatureTerrainAdjustments@Dimension@@QEAAAEAVFeatureTerrainAdjustments@@XZ
    MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments();

    // symbol: ?getGameEventDispatcher@Dimension@@QEBAPEAVGameEventDispatcher@@XZ
    MCAPI class GameEventDispatcher* getGameEventDispatcher() const;

    // symbol: ?getHeight@Dimension@@QEBAFXZ
    MCAPI short getHeight() const;

    // symbol: ?getHeightInSubchunks@Dimension@@QEBAGXZ
    MCAPI ushort getHeightInSubchunks() const;

    // symbol: ?getHeightRange@Dimension@@QEBAAEBVDimensionHeightRange@@XZ
    MCAPI class DimensionHeightRange const& getHeightRange() const;

    // symbol: ?getLevel@Dimension@@QEBAAEAVLevel@@XZ
    MCAPI class Level& getLevel() const;

    // symbol: ?getLevelConst@Dimension@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevelConst() const;

    // symbol: ?getMinHeight@Dimension@@QEBAFXZ
    MCAPI short getMinHeight() const;

    // symbol: ?getMoonBrightness@Dimension@@QEBAMXZ
    MCAPI float getMoonBrightness() const;

    // symbol: ?getMoonPhase@Dimension@@QEBAHXZ
    MCAPI int getMoonPhase() const;

    // symbol: ?getPopCap@Dimension@@QEBAMH_N@Z
    MCAPI float getPopCap(int catID, bool surface) const;

    // symbol: ?getSeasons@Dimension@@QEAAAEAVSeasons@@XZ
    MCAPI class Seasons& getSeasons();

    // symbol: ?getSkyDarken@Dimension@@QEBA?AUBrightness@@XZ
    MCAPI struct Brightness getSkyDarken() const;

    // symbol: ?getSunAngle@Dimension@@QEBAMM@Z
    MCAPI float getSunAngle(float a) const;

    // symbol: ?getTickingAreas@Dimension@@QEAAAEAVTickingAreaList@@XZ
    MCAPI class TickingAreaList& getTickingAreas();

    // symbol: ?getTickingAreasConst@Dimension@@QEBAAEBVTickingAreaList@@XZ
    MCAPI class TickingAreaList const& getTickingAreasConst() const;

    // symbol: ?getTimeOfDay@Dimension@@QEBAMM@Z
    MCAPI float getTimeOfDay(float a) const;

    // symbol:
    // ?getVillageManager@Dimension@@QEBAAEBV?$unique_ptr@VVillageManager@@U?$default_delete@VVillageManager@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const;

    // symbol: ?getWeakRef@Dimension@@QEAA?AV?$WeakRef@VDimension@@@@XZ
    MCAPI class WeakRef<class Dimension> getWeakRef();

    // symbol: ?getWeather@Dimension@@QEBAAEAVWeather@@XZ
    MCAPI class Weather& getWeather() const;

    // symbol: ?getWorldGenerator@Dimension@@QEBAPEAVWorldGenerator@@XZ
    MCAPI class WorldGenerator* getWorldGenerator() const;

    // symbol: ?hasCeiling@Dimension@@QEBA_NXZ
    MCAPI bool hasCeiling() const;

    // symbol: ?hasSkylight@Dimension@@QEBA_NXZ
    MCAPI bool hasSkylight() const;

    // symbol: ?isChunkKnown@Dimension@@QEBA_NAEBVChunkPos@@@Z
    MCAPI bool isChunkKnown(class ChunkPos const& chunkPos) const;

    // symbol: ?isClientSideGenerationEnabled@Dimension@@QEBA?B_NXZ
    MCAPI bool const isClientSideGenerationEnabled() const;

    // symbol: ?isHeightWithinRange@Dimension@@QEBA_NAEBF@Z
    MCAPI bool isHeightWithinRange(short const& height) const;

    // symbol: ?isLeaveGameDone@Dimension@@QEAA_NXZ
    MCAPI bool isLeaveGameDone();

    // symbol: ?isRedstoneTick@Dimension@@QEAA_NXZ
    MCAPI bool isRedstoneTick();

    // symbol: ?isSubChunkHeightWithinRange@Dimension@@QEBA_NAEBF@Z
    MCAPI bool isSubChunkHeightWithinRange(short const&) const;

    // symbol: ?isUltraWarm@Dimension@@QEBA_NXZ
    MCAPI bool isUltraWarm() const;

    // symbol:
    // ?onStaticTickingAreaAdded@Dimension@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void onStaticTickingAreaAdded(std::string const& tickingAreaName);

    // symbol: ?pauseAndFlushTaskGroups@Dimension@@QEAAXXZ
    MCAPI void pauseAndFlushTaskGroups();

    // symbol: ?processPlayerReplication@Dimension@@QEAAXXZ
    MCAPI void processPlayerReplication();

    // symbol: ?registerEntity@Dimension@@QEAAXAEBUActorUniqueID@@V?$WeakRef@VEntityContext@@@@@Z
    MCAPI void registerEntity(struct ActorUniqueID const& actorID, class WeakRef<class EntityContext> entityRef);

    // symbol: ?removeActorByID@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeActorByID(struct ActorUniqueID const& id);

    // symbol: ?removeWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeWither(struct ActorUniqueID const& id);

    // symbol: ?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z
    MCAPI void sendPacketForEntity(class Actor const& actor, class Packet const& packet, class Player const* except);

    // symbol:
    // ?sendPacketToClients@Dimension@@QEAAXAEBVPacket@@V?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@@Z
    MCAPI void sendPacketToClients(class Packet const& packet, std::vector<struct NetworkIdentifierWithSubId> ids);

    // symbol: ?setCeiling@Dimension@@QEAAX_N@Z
    MCAPI void setCeiling(bool ceiling);

    // symbol: ?setSkylight@Dimension@@QEAAX_N@Z
    MCAPI void setSkylight(bool skylight);

    // symbol: ?setUltraWarm@Dimension@@QEAAX_N@Z
    MCAPI void setUltraWarm(bool warm);

    // symbol:
    // ?transferEntity@Dimension@@QEAAXAEBVChunkPos@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    MCAPI void transferEntity(
        class ChunkPos const&,
        class Vec3 const&                  spawnPos,
        std::unique_ptr<class CompoundTag> entityTag,
        bool
    );

    // symbol: ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEAVActor@@PEAVLevelChunk@@@Z
    MCAPI void transferEntityToUnloadedChunk(class Actor& actor, class LevelChunk*);

    // symbol:
    // ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void transferEntityToUnloadedChunk(
        class ChunkPos const&,
        class ChunkPos const&,
        DimensionType dimId,
        std::string&,
        std::unique_ptr<class CompoundTag> entityTag
    );

    // symbol: ?tryGarbageCollectStructures@Dimension@@QEAAXXZ
    MCAPI void tryGarbageCollectStructures();

    // symbol: ?tryLoadLimboEntities@Dimension@@QEAAXAEBVChunkPos@@@Z
    MCAPI void tryLoadLimboEntities(class ChunkPos const& loadPos);

    // symbol: ?unregisterDisplayEntity@Dimension@@QEAAXV?$WeakRef@VEntityContext@@@@@Z
    MCAPI void unregisterDisplayEntity(class WeakRef<class EntityContext>);

    // symbol: ?unregisterEntity@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void unregisterEntity(struct ActorUniqueID const& actorID);

    // symbol: ?updateBlockLight@Dimension@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
    MCAPI void updateBlockLight(
        class BlockPos const& blockPos,
        struct Brightness     oldBrightness,
        struct Brightness     newBrightness,
        struct Brightness     oldAbsorb,
        struct Brightness     newAbsorb,
        bool                  isSunLight
    );

    // symbol: ?updateDimensionBlockSourceTick@Dimension@@QEAAXXZ
    MCAPI void updateDimensionBlockSourceTick();

    // symbol: ?CurrentLimboEntitiesVersion@Dimension@@2W4LimboEntitiesVersion@@B
    MCAPI static ::LimboEntitiesVersion const CurrentLimboEntitiesVersion;

    // symbol: ?LOW_CPU_PACKET_BLOCK_LIMIT@Dimension@@2IB
    MCAPI static uint const LOW_CPU_PACKET_BLOCK_LIMIT;

    // symbol: ?MOON_BRIGHTNESS_PER_PHASE@Dimension@@2QBMB
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];

    // symbol: ?STRUCTURE_PRUNE_INTERVAL@Dimension@@2V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@B
    MCAPI static std::chrono::seconds const STRUCTURE_PRUNE_INTERVAL;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_completeEntityTransfer@Dimension@@IEAAXV?$OwnerPtr@VEntityContext@@@@_N@Z
    MCAPI void _completeEntityTransfer(class OwnerPtr<class EntityContext>, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processEntityChunkTransfers@Dimension@@AEAAXXZ
    MCAPI void _processEntityChunkTransfers();

    // symbol: ?_sendBlockEntityUpdatePacket@Dimension@@AEAAXAEBVNetworkBlockPosition@@@Z
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const& pos);

    // symbol: ?_sendBlocksChangedPackets@Dimension@@AEAAXXZ
    MCAPI void _sendBlocksChangedPackets();

    // symbol: ?_tickEntityChunkMoves@Dimension@@AEAAXXZ
    MCAPI void _tickEntityChunkMoves();

    // NOLINTEND
};
