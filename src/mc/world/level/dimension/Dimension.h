#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
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
        PlayerReplicationStructures& operator=(PlayerReplicationStructures const&) = delete;
        PlayerReplicationStructures(PlayerReplicationStructures const&)            = delete;
        PlayerReplicationStructures()                                              = delete;

    public:
        /**
         * @symbol
         * ?processReplicationForPlayers\@PlayerReplicationStructures\@Dimension\@\@QEAAXAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@PEAV2\@\@Z
         */
        MCAPI void processReplicationForPlayers(std::vector<class WeakEntityRef> const&, class Dimension*); // NOLINT
    };

public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&) = delete;
    Dimension(Dimension const&)            = delete;
    Dimension()                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSION
    /**
     * @symbol
     * ?_createChunkBuildOrderPolicy\@Dimension\@\@EEAA?AV?$unique_ptr\@VChunkBuildOrderPolicyBase\@\@U?$default_delete\@VChunkBuildOrderPolicyBase\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy(); // NOLINT
    /**
     * @symbol ?deserialize\@Dimension\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    MCVAPI void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?flushLevelChunkGarbageCollector\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void flushLevelChunkGarbageCollector(); // NOLINT
    /**
     * @symbol ?forceCheckAllNeighChunkSavedStat\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const; // NOLINT
    /**
     * @symbol ?getBrightnessDependentFogColor\@Dimension\@\@UEBA?AVColor\@mce\@\@AEBV23\@M\@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const&, float) const; // NOLINT
    /**
     * @symbol ?getBrightnessRamp\@Dimension\@\@UEBAAEBVDimensionBrightnessRamp\@\@XZ
     */
    MCVAPI class DimensionBrightnessRamp const& getBrightnessRamp() const; // NOLINT
    /**
     * @symbol ?getClearColorScale\@Dimension\@\@UEAAMXZ
     */
    MCVAPI float getClearColorScale(); // NOLINT
    /**
     * @symbol ?getCloudHeight\@Dimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const; // NOLINT
    /**
     * @symbol ?getDefaultBiome\@Dimension\@\@UEBA?AVHashedString\@\@XZ
     */
    MCVAPI class HashedString getDefaultBiome() const; // NOLINT
    /**
     * @symbol ?getDimensionId\@Dimension\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCVAPI class AutomaticID<class Dimension, int> getDimensionId() const; // NOLINT
    /**
     * @symbol ?getLightTextureImageBuilder\@Dimension\@\@UEBAPEAVBaseLightTextureImageBuilder\@\@XZ
     */
    MCVAPI class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const; // NOLINT
    /**
     * @symbol ?getSpawnPos\@Dimension\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos getSpawnPos() const; // NOLINT
    /**
     * @symbol ?getSpawnYPosition\@Dimension\@\@UEBAHXZ
     */
    MCVAPI int getSpawnYPosition() const; // NOLINT
    /**
     * @symbol ?getSunIntensity\@Dimension\@\@UEBAMMAEBVVec3\@\@M\@Z
     */
    MCVAPI float getSunIntensity(float, class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?getTimeOfDay\@Dimension\@\@MEBAMHM\@Z
     */
    MCVAPI float getTimeOfDay(int, float) const; // NOLINT
    /**
     * @symbol ?hasBedrockFog\@Dimension\@\@UEAA_NXZ
     */
    MCVAPI bool hasBedrockFog(); // NOLINT
    /**
     * @symbol ?hasGround\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasGround() const; // NOLINT
    /**
     * @symbol ?hasPrecipitationFog\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasPrecipitationFog() const; // NOLINT
    /**
     * @symbol ?init\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void init(); // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@Dimension\@\@UEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCVAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?is2DPositionRelevantForPlayer\@Dimension\@\@UEBA_NAEBVBlockPos\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const&, class Player&) const; // NOLINT
    /**
     * @symbol ?isActorRelevantForPlayer\@Dimension\@\@UEBA_NAEAVPlayer\@\@AEBVActor\@\@\@Z
     */
    MCVAPI bool isActorRelevantForPlayer(class Player&, class Actor const&) const; // NOLINT
    /**
     * @symbol ?isDay\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool isDay() const; // NOLINT
    /**
     * @symbol ?isFoggyAt\@Dimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isFoggyAt(int, int) const; // NOLINT
    /**
     * @symbol ?isNaturalDimension\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool isNaturalDimension() const; // NOLINT
    /**
     * @symbol ?isValidSpawn\@Dimension\@\@UEBA_NHH\@Z
     */
    MCVAPI bool isValidSpawn(int, int) const; // NOLINT
    /**
     * @symbol ?mayRespawnViaBed\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool mayRespawnViaBed() const; // NOLINT
    /**
     * @symbol
     * ?onBlockChanged\@Dimension\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, enum class BlockChangedEventTarget, class Actor*); // NOLINT
    /**
     * @symbol ?onBlockEvent\@Dimension\@\@UEAAXAEAVBlockSource\@\@HHHHH\@Z
     */
    MCVAPI void onBlockEvent(class BlockSource&, int, int, int, int, int); // NOLINT
    /**
     * @symbol ?onChunkLoaded\@Dimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol
     * ?onLevelDestruction\@Dimension\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const&); // NOLINT
    /**
     * @symbol ?sendBroadcast\@Dimension\@\@UEAAXAEBVPacket\@\@PEAVPlayer\@\@\@Z
     */
    MCVAPI void sendBroadcast(class Packet const&, class Player*); // NOLINT
    /**
     * @symbol ?sendPacketForPosition\@Dimension\@\@UEAAXAEBVBlockPos\@\@AEBVPacket\@\@PEBVPlayer\@\@\@Z
     */
    MCVAPI void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*); // NOLINT
    /**
     * @symbol ?serialize\@Dimension\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    MCVAPI void serialize(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?showSky\@Dimension\@\@UEBA_NXZ
     */
    MCVAPI bool showSky() const; // NOLINT
    /**
     * @symbol ?startLeaveGame\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame(); // NOLINT
    /**
     * @symbol ?tick\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol ?tickRedstone\@Dimension\@\@UEAAXXZ
     */
    MCVAPI void tickRedstone(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Dimension(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Dimension\@\@QEAA\@AEAVILevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@VDimensionHeightRange\@\@AEAVScheduler\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Dimension(
        class ILevel&,
        class AutomaticID<class Dimension, int>,
        class DimensionHeightRange,
        class Scheduler&,
        std::string
    ); // NOLINT
    /**
     * @symbol
     * ?addActorUnloadedChunkTransferToQueue\@Dimension\@\@QEAAXAEBVChunkPos\@\@0V?$AutomaticID\@VDimension\@\@H\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void
    addActorUnloadedChunkTransferToQueue(class ChunkPos const&, class ChunkPos const&, class AutomaticID<class Dimension, int>, std::string&, std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol ?addPlayerToReplication\@Dimension\@\@QEAAXAEBVWeakEntityRef\@\@\@Z
     */
    MCAPI void addPlayerToReplication(class WeakEntityRef const&); // NOLINT
    /**
     * @symbol ?addWither\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addWither(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?clearPlayerReplicationList\@Dimension\@\@QEAAXXZ
     */
    MCAPI void clearPlayerReplicationList(); // NOLINT
    /**
     * @symbol ?distanceToNearestPlayerSqr2D\@Dimension\@\@QEAAMVVec3\@\@\@Z
     */
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3); // NOLINT
    /**
     * @symbol ?fetchAnyInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Player* fetchAnyInteractablePlayer(class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?fetchEntity\@Dimension\@\@QEBAPEAVActor\@\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI class Actor* fetchEntity(struct ActorUniqueID, bool) const; // NOLINT
    /**
     * @symbol ?fetchNearestAttackablePlayer\@Dimension\@\@QEAAPEAVPlayer\@\@VBlockPos\@\@MPEAVActor\@\@\@Z
     */
    MCAPI class Player* fetchNearestAttackablePlayer(class BlockPos, float, class Actor*); // NOLINT
    /**
     * @symbol ?fetchNearestAttackablePlayer\@Dimension\@\@QEAAPEAVPlayer\@\@AEAVActor\@\@M\@Z
     */
    MCAPI class Player* fetchNearestAttackablePlayer(class Actor&, float); // NOLINT
    /**
     * @symbol ?fetchNearestInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI class Player* fetchNearestInteractablePlayer(class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?fetchNearestInteractablePlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEAVActor\@\@M\@Z
     */
    MCAPI class Player* fetchNearestInteractablePlayer(class Actor&, float) const; // NOLINT
    /**
     * @symbol
     * ?fetchNearestPlayer\@Dimension\@\@QEBAPEAVPlayer\@\@AEBVVec3\@\@M_NV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Player*
    fetchNearestPlayer(class Vec3 const&, float, bool, class std::function<bool(class Player const&)>) const; // NOLINT
    /**
     * @symbol ?findPlayer\@Dimension\@\@QEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Player* findPlayer(class std::function<bool(class Player const&)>) const; // NOLINT
    /**
     * @symbol ?flagEntityforChunkMove\@Dimension\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void flagEntityforChunkMove(class Actor&); // NOLINT
    /**
     * @symbol ?flushRunTimeLighting\@Dimension\@\@QEAAXXZ
     */
    MCAPI void flushRunTimeLighting(); // NOLINT
    /**
     * @symbol ?forEachPlayer\@Dimension\@\@QEBAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachPlayer(class std::function<bool(class Player&)>) const; // NOLINT
    /**
     * @symbol ?getBlockEventDispatcher\@Dimension\@\@QEAAAEAVBlockEventDispatcher\@\@XZ
     */
    MCAPI class BlockEventDispatcher& getBlockEventDispatcher(); // NOLINT
    /**
     * @symbol ?getBlockSourceFromMainChunkSource\@Dimension\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getBlockSourceFromMainChunkSource() const; // NOLINT
    /**
     * @symbol ?getChunkBuildOrderPolicy\@Dimension\@\@QEAAAEAVChunkBuildOrderPolicyBase\@\@XZ
     */
    MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy(); // NOLINT
    /**
     * @symbol ?getChunkLoadActionList\@Dimension\@\@QEAA?AV?$not_null\@PEAVChunkLoadActionList\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class ChunkLoadActionList*> getChunkLoadActionList(); // NOLINT
    /**
     * @symbol ?getChunkSource\@Dimension\@\@QEBAAEAVChunkSource\@\@XZ
     */
    MCAPI class ChunkSource& getChunkSource() const; // NOLINT
    /**
     * @symbol ?getCircuitSystem\@Dimension\@\@QEAAAEAVCircuitSystem\@\@XZ
     */
    MCAPI class CircuitSystem& getCircuitSystem(); // NOLINT
    /**
     * @symbol ?getDelayActionList\@Dimension\@\@QEAA?AV?$not_null\@PEAVDelayActionList\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class DelayActionList*> getDelayActionList(); // NOLINT
    /**
     * @symbol
     * ?getDisplayEntities\@Dimension\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef>& getDisplayEntities(); // NOLINT
    /**
     * @symbol
     * ?getEntityIdMap\@Dimension\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@VWeakEntityRef\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@4\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@VWeakEntityRef\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        struct ActorUniqueID,
        class WeakEntityRef,
        struct std::hash<struct ActorUniqueID>,
        struct std::equal_to<struct ActorUniqueID>,
        class std::allocator<struct std::pair<struct ActorUniqueID const, class WeakEntityRef>>>&
    getEntityIdMap(); // NOLINT
    /**
     * @symbol ?getFeatureTerrainAdjustments\@Dimension\@\@QEAAAEAVFeatureTerrainAdjustments\@\@XZ
     */
    MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments(); // NOLINT
    /**
     * @symbol ?getGameEventDispatcher\@Dimension\@\@QEBAPEAVGameEventDispatcher\@\@XZ
     */
    MCAPI class GameEventDispatcher* getGameEventDispatcher() const; // NOLINT
    /**
     * @symbol ?getHeight\@Dimension\@\@QEBAFXZ
     */
    MCAPI short getHeight() const; // NOLINT
    /**
     * @symbol ?getHeightInSubchunks\@Dimension\@\@QEBAGXZ
     */
    MCAPI unsigned short getHeightInSubchunks() const; // NOLINT
    /**
     * @symbol ?getHeightRange\@Dimension\@\@QEBAAEBVDimensionHeightRange\@\@XZ
     */
    MCAPI class DimensionHeightRange const& getHeightRange() const; // NOLINT
    /**
     * @symbol ?getLevel\@Dimension\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel() const; // NOLINT
    /**
     * @symbol ?getLevelConst\@Dimension\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const& getLevelConst() const; // NOLINT
    /**
     * @symbol ?getMinHeight\@Dimension\@\@QEBAFXZ
     */
    MCAPI short getMinHeight() const; // NOLINT
    /**
     * @symbol ?getMoonBrightness\@Dimension\@\@QEBAMXZ
     */
    MCAPI float getMoonBrightness() const; // NOLINT
    /**
     * @symbol ?getMoonPhase\@Dimension\@\@QEBAHXZ
     */
    MCAPI int getMoonPhase() const; // NOLINT
    /**
     * @symbol ?getPopCap\@Dimension\@\@QEBAMH_N\@Z
     */
    MCAPI float getPopCap(int, bool) const; // NOLINT
    /**
     * @symbol ?getSeasons\@Dimension\@\@QEAAAEAVSeasons\@\@XZ
     */
    MCAPI class Seasons& getSeasons(); // NOLINT
    /**
     * @symbol ?getSkyDarken\@Dimension\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getSkyDarken() const; // NOLINT
    /**
     * @symbol ?getSunAngle\@Dimension\@\@QEBAMM\@Z
     */
    MCAPI float getSunAngle(float) const; // NOLINT
    /**
     * @symbol ?getTickingAreas\@Dimension\@\@QEAAAEAVTickingAreaList\@\@XZ
     */
    MCAPI class TickingAreaList& getTickingAreas(); // NOLINT
    /**
     * @symbol ?getTickingAreasConst\@Dimension\@\@QEBAAEBVTickingAreaList\@\@XZ
     */
    MCAPI class TickingAreaList const& getTickingAreasConst() const; // NOLINT
    /**
     * @symbol ?getTimeOfDay\@Dimension\@\@QEBAMM\@Z
     */
    MCAPI float getTimeOfDay(float) const; // NOLINT
    /**
     * @symbol
     * ?getVillageManager\@Dimension\@\@QEBAAEBV?$unique_ptr\@VVillageManager\@\@U?$default_delete\@VVillageManager\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const; // NOLINT
    /**
     * @symbol ?getWeakRef\@Dimension\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getWeakRef(); // NOLINT
    /**
     * @symbol ?getWeather\@Dimension\@\@QEBAAEAVWeather\@\@XZ
     */
    MCAPI class Weather& getWeather() const; // NOLINT
    /**
     * @symbol ?getWorldGenerator\@Dimension\@\@QEBAPEAVWorldGenerator\@\@XZ
     */
    MCAPI class WorldGenerator* getWorldGenerator() const; // NOLINT
    /**
     * @symbol ?hasCeiling\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool hasCeiling() const; // NOLINT
    /**
     * @symbol ?hasSkylight\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool hasSkylight() const; // NOLINT
    /**
     * @symbol ?isChunkKnown\@Dimension\@\@QEBA_NAEBVChunkPos\@\@\@Z
     */
    MCAPI bool isChunkKnown(class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?isClientSideGenerationEnabled\@Dimension\@\@QEBA?B_NXZ
     */
    MCAPI bool const isClientSideGenerationEnabled() const; // NOLINT
    /**
     * @symbol ?isHeightWithinRange\@Dimension\@\@QEBA_NAEBF\@Z
     */
    MCAPI bool isHeightWithinRange(short const&) const; // NOLINT
    /**
     * @symbol ?isLeaveGameDone\@Dimension\@\@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone(); // NOLINT
    /**
     * @symbol ?isRedstoneTick\@Dimension\@\@QEAA_NXZ
     */
    MCAPI bool isRedstoneTick(); // NOLINT
    /**
     * @symbol ?isSubChunkHeightWithinRange\@Dimension\@\@QEBA_NAEBF\@Z
     */
    MCAPI bool isSubChunkHeightWithinRange(short const&) const; // NOLINT
    /**
     * @symbol ?isUltraWarm\@Dimension\@\@QEBA_NXZ
     */
    MCAPI bool isUltraWarm() const; // NOLINT
    /**
     * @symbol
     * ?onStaticTickingAreaAdded\@Dimension\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void onStaticTickingAreaAdded(std::string const&); // NOLINT
    /**
     * @symbol ?pauseAndFlushTaskGroups\@Dimension\@\@QEAAXXZ
     */
    MCAPI void pauseAndFlushTaskGroups(); // NOLINT
    /**
     * @symbol ?processPlayerReplication\@Dimension\@\@QEAAXXZ
     */
    MCAPI void processPlayerReplication(); // NOLINT
    /**
     * @symbol ?registerEntity\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void registerEntity(struct ActorUniqueID const&, class WeakRefT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?removeActorByID\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeActorByID(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?removeWither\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeWither(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?sendPacketForEntity\@Dimension\@\@QEAAXAEBVActor\@\@AEBVPacket\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI void sendPacketForEntity(class Actor const&, class Packet const&, class Player const*); // NOLINT
    /**
     * @symbol
     * ?sendPacketToClients\@Dimension\@\@QEAAXAEBVPacket\@\@V?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void sendPacketToClients(class Packet const&, std::vector<struct NetworkIdentifierWithSubId>); // NOLINT
    /**
     * @symbol ?setCeiling\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setCeiling(bool); // NOLINT
    /**
     * @symbol ?setSkylight\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setSkylight(bool); // NOLINT
    /**
     * @symbol ?setUltraWarm\@Dimension\@\@QEAAX_N\@Z
     */
    MCAPI void setUltraWarm(bool); // NOLINT
    /**
     * @symbol
     * ?transferEntity\@Dimension\@\@QEAAXAEBVChunkPos\@\@AEBVVec3\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void
    transferEntity(class ChunkPos const&, class Vec3 const&, std::unique_ptr<class CompoundTag>, bool); // NOLINT
    /**
     * @symbol ?transferEntityToUnloadedChunk\@Dimension\@\@QEAAXAEAVActor\@\@PEAVLevelChunk\@\@\@Z
     */
    MCAPI void transferEntityToUnloadedChunk(class Actor&, class LevelChunk*); // NOLINT
    /**
     * @symbol
     * ?transferEntityToUnloadedChunk\@Dimension\@\@QEAAXAEBVChunkPos\@\@0V?$AutomaticID\@VDimension\@\@H\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void
    transferEntityToUnloadedChunk(class ChunkPos const&, class ChunkPos const&, class AutomaticID<class Dimension, int>, std::string&, std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol ?tryGarbageCollectStructures\@Dimension\@\@QEAAXXZ
     */
    MCAPI void tryGarbageCollectStructures(); // NOLINT
    /**
     * @symbol ?tryLoadLimboEntities\@Dimension\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void tryLoadLimboEntities(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?unregisterDisplayEntity\@Dimension\@\@QEAAXV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?unregisterEntity\@Dimension\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void unregisterEntity(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?updateBlockLight\@Dimension\@\@QEAAXAEBVBlockPos\@\@UBrightness\@\@111_N\@Z
     */
    MCAPI void updateBlockLight(
        class BlockPos const&,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        bool
    ); // NOLINT
    /**
     * @symbol ?updateDimensionBlockSourceTick\@Dimension\@\@QEAAXXZ
     */
    MCAPI void updateDimensionBlockSourceTick(); // NOLINT
    /**
     * @symbol ?CurrentLimboEntitiesVersion\@Dimension\@\@2W4LimboEntitiesVersion\@\@B
     */
    MCAPI static enum class LimboEntitiesVersion const CurrentLimboEntitiesVersion; // NOLINT
    /**
     * @symbol ?LOW_CPU_PACKET_BLOCK_LIMIT\@Dimension\@\@2IB
     */
    MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT; // NOLINT
    /**
     * @symbol ?MOON_BRIGHTNESS_PER_PHASE\@Dimension\@\@2QBMB
     */
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[]; // NOLINT
    /**
     * @symbol ?STRUCTURE_PRUNE_INTERVAL\@Dimension\@\@2V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@B
     */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL; // NOLINT

    // protected:
    /**
     * @symbol ?_completeEntityTransfer\@Dimension\@\@IEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI void _completeEntityTransfer(class OwnerPtrT<struct EntityRefTraits>, bool); // NOLINT

    // private:
    /**
     * @symbol ?_processEntityChunkTransfers\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _processEntityChunkTransfers(); // NOLINT
    /**
     * @symbol ?_sendBlockEntityUpdatePacket\@Dimension\@\@AEAAXAEBVNetworkBlockPosition\@\@\@Z
     */
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const&); // NOLINT
    /**
     * @symbol ?_sendBlocksChangedPackets\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _sendBlocksChangedPackets(); // NOLINT
    /**
     * @symbol ?_tickEntityChunkMoves\@Dimension\@\@AEAAXXZ
     */
    MCAPI void _tickEntityChunkMoves(); // NOLINT

protected:
private:
};
