#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"

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
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    MCVAPI void deserialize(class CompoundTag const& tag);

    MCVAPI class Actor* fetchEntity(struct ActorUniqueID actorID, bool getRemoved) const;

    MCVAPI void flushLevelChunkGarbageCollector();

    MCVAPI void forEachPlayer(std::function<bool(class Player&)> callback) const;

    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

    MCVAPI class BiomeRegistry& getBiomeRegistry();

    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    MCVAPI class DimensionBrightnessRamp const& getBrightnessRamp() const;

    MCVAPI short getCloudHeight() const;

    MCVAPI class HashedString getDefaultBiome() const;

    MCVAPI DimensionType getDimensionId() const;

    MCVAPI class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    MCVAPI class BlockPos getSpawnPos() const;

    MCVAPI int getSpawnYPosition() const;

    MCVAPI float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    MCVAPI float getTimeOfDay(int time, float a) const;

    MCVAPI bool hasGround() const;

    MCVAPI bool hasPrecipitationFog() const;

    MCVAPI void init(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCVAPI void initializeWithLevelStorageManager(class LevelStorageManager& levelStorageManager);

    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const& position, class Player& player) const;

    MCVAPI bool isActorRelevantForPlayer(class Player& player, class Actor const& actor) const;

    MCVAPI bool isDay() const;

    MCVAPI bool isNaturalDimension() const;

    MCVAPI bool isValidSpawn(int x, int z) const;

    MCVAPI bool mayRespawnViaBed() const;

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

    MCVAPI void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    MCVAPI void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI void onLevelDestruction(std::string const&);

    MCVAPI void sendBroadcast(class Packet const& packet, class Player* except);

    MCVAPI void
    sendPacketForPosition(class BlockPos const& position, class Packet const& packet, class Player const* except);

    MCVAPI void serialize(class CompoundTag& tag) const;

    MCVAPI bool showSky() const;

    MCVAPI void startLeaveGame();

    MCVAPI void tick();

    MCVAPI void tickRedstone();

    MCVAPI ~Dimension();

    MCAPI Dimension(
        class ILevel&              level,
        DimensionType              dimId,
        class DimensionHeightRange heightRange,
        class Scheduler&           callbackContext,
        std::string                name
    );

    MCAPI void addActorUnloadedChunkTransferToQueue(
        class ChunkPos const&              fromChunkPos,
        class ChunkPos const&              toChunkPos,
        DimensionType                      dimId,
        std::string&                       actorStorageKey,
        std::unique_ptr<class CompoundTag> entityTag
    );

    MCAPI void addPlayerToReplication(class WeakEntityRef const& player);

    MCAPI void addWither(struct ActorUniqueID const& id);

    MCAPI void clearPlayerReplicationList();

    MCAPI float distanceToNearestPlayerSqr2D(class Vec3 origin);

    MCAPI class Player* fetchAnyInteractablePlayer(class Vec3 const& searchPos, float maxDist) const;

    MCAPI class Player* fetchNearestAttackablePlayer(class Actor& source, float maxDist) const;

    MCAPI class Player*
    fetchNearestAttackablePlayer(class BlockPos source, float maxDist, class Actor* sourceActor) const;

    MCAPI class Player* fetchNearestInteractablePlayer(class Actor& source, float maxDist) const;

    MCAPI class Player* fetchNearestInteractablePlayer(class Vec3 const& searchPos, float maxDist) const;

    MCAPI class Player* fetchNearestPlayer(
        class Vec3 const&                        searchPos,
        float                                    maxDist,
        bool                                     isFetchAny,
        std::function<bool(class Player const&)> playerFilter
    ) const;

    MCAPI class Player* findPlayer(std::function<bool(class Player const&)> pred) const;

    MCAPI void flagEntityforChunkMove(class Actor& e);

    MCAPI void flushRunTimeLighting();

    MCAPI class BlockEventDispatcher& getBlockEventDispatcher();

    MCAPI class BlockSource& getBlockSourceFromMainChunkSource() const;

    MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();

    MCAPI gsl::not_null<class ChunkLoadActionList*> getChunkLoadActionList();

    MCAPI class ChunkSource& getChunkSource() const;

    MCAPI class CircuitSystem& getCircuitSystem();

    MCAPI gsl::not_null<class DelayActionList*> getDelayActionList();

    MCAPI std::vector<class WeakEntityRef>& getDisplayEntities();

    MCAPI std::unordered_map<struct ActorUniqueID, class WeakEntityRef>& getEntityIdMap();

    MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments();

    MCAPI class GameEventDispatcher* getGameEventDispatcher() const;

    MCAPI short getHeight() const;

    MCAPI ushort getHeightInSubchunks() const;

    MCAPI class DimensionHeightRange const& getHeightRange() const;

    MCAPI class Level& getLevel() const;

    MCAPI class Level const& getLevelConst() const;

    MCAPI short getMinHeight() const;

    MCAPI float getMoonBrightness() const;

    MCAPI int getMoonPhase() const;

    MCAPI float getPopCap(int catID, bool surface) const;

    MCAPI class Seasons& getSeasons();

    MCAPI struct Brightness getSkyDarken() const;

    MCAPI float getSunAngle(float a) const;

    MCAPI std::shared_ptr<class LevelChunkMetaData const> getTargetMetaData();

    MCAPI class TickingAreaList& getTickingAreas();

    MCAPI class TickingAreaList const& getTickingAreasConst() const;

    MCAPI float getTimeOfDay(float a) const;

    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const;

    MCAPI class WeakRef<class Dimension> getWeakRef();

    MCAPI class Weather& getWeather() const;

    MCAPI class WorldGenerator* getWorldGenerator() const;

    MCAPI bool hasCeiling() const;

    MCAPI bool hasSkylight() const;

    MCAPI bool isChunkKnown(class ChunkPos const& chunkPos) const;

    MCAPI bool const isClientSideGenerationEnabled() const;

    MCAPI bool isHeightWithinRange(short const& height) const;

    MCAPI bool isLeaveGameDone();

    MCAPI bool isRedstoneTick();

    MCAPI bool isSubChunkHeightWithinRange(short const& subChunkHeight) const;

    MCAPI bool isUltraWarm() const;

    MCAPI void onStaticTickingAreaAdded(std::string const& tickingAreaName);

    MCAPI void pauseAndFlushTaskGroups();

    MCAPI void processPlayerReplication();

    MCAPI void registerEntity(struct ActorUniqueID const& actorID, class WeakRef<class EntityContext> entityRef);

    MCAPI void removeActorByID(struct ActorUniqueID const& id);

    MCAPI void removeWither(struct ActorUniqueID const& id);

    MCAPI void sendPacketForEntity(class Actor const& actor, class Packet const& packet, class Player const* except);

    MCAPI void sendPacketToClients(class Packet const& packet, std::vector<struct NetworkIdentifierWithSubId> ids);

    MCAPI void setCeiling(bool ceiling);

    MCAPI void setSkylight(bool skylight);

    MCAPI void setUltraWarm(bool warm);

    MCAPI void transferEntity(
        class ChunkPos const&              fromChunkPos,
        class Vec3 const&                  spawnPos,
        std::unique_ptr<class CompoundTag> entityTag,
        bool                               ignorePortal
    );

    MCAPI void transferEntityToUnloadedChunk(class Actor& actor, class LevelChunk* fromChunk);

    MCAPI void transferEntityToUnloadedChunk(
        class ChunkPos const&              fromChunkPos,
        class ChunkPos const&              toChunkPos,
        DimensionType                      dimId,
        std::string&                       actorStorageKey,
        std::unique_ptr<class CompoundTag> entityTag
    );

    MCAPI void tryGarbageCollectStructures();

    MCAPI void tryLoadLimboEntities(class ChunkPos const& loadPos);

    MCAPI void unregisterDisplayEntity(class WeakRef<class EntityContext> entityRef);

    MCAPI void unregisterEntity(struct ActorUniqueID const& actorID);

    MCAPI void updateBlockLight(
        class BlockPos const& blockPos,
        struct Brightness     oldBrightness,
        struct Brightness     newBrightness,
        struct Brightness     oldAbsorb,
        struct Brightness     newAbsorb,
        bool                  isSunLight
    );

    MCAPI void updateDimensionBlockSourceTick();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _completeEntityTransfer(class OwnerPtr<class EntityContext> entity, bool ignorePortal);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _processEntityChunkTransfers();

    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const& pos);

    MCAPI void _sendBlocksChangedPackets();

    MCAPI void _tickEntityChunkMoves();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForLevelListener();

    MCAPI static void** $vftableForSavedData();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy$();

    MCAPI void deserialize$(class CompoundTag const& tag);

    MCAPI class Actor* fetchEntity$(struct ActorUniqueID actorID, bool getRemoved) const;

    MCAPI void flushLevelChunkGarbageCollector$();

    MCAPI void forEachPlayer$(std::function<bool(class Player&)> callback) const;

    MCAPI bool forceCheckAllNeighChunkSavedStat$() const;

    MCAPI class BiomeRegistry const& getBiomeRegistry$() const;

    MCAPI class BiomeRegistry& getBiomeRegistry$();

    MCAPI class mce::Color getBrightnessDependentFogColor$(class mce::Color const& baseColor, float brightness) const;

    MCAPI class DimensionBrightnessRamp const& getBrightnessRamp$() const;

    MCAPI short getCloudHeight$() const;

    MCAPI class HashedString getDefaultBiome$() const;

    MCAPI DimensionType getDimensionId$() const;

    MCAPI class BaseLightTextureImageBuilder* getLightTextureImageBuilder$() const;

    MCAPI class BlockPos getSpawnPos$() const;

    MCAPI int getSpawnYPosition$() const;

    MCAPI float getSunIntensity$(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    MCAPI float getTimeOfDay$(int time, float a) const;

    MCAPI bool hasGround$() const;

    MCAPI bool hasPrecipitationFog$() const;

    MCAPI void init$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void initializeWithLevelStorageManager$(class LevelStorageManager& levelStorageManager);

    MCAPI bool is2DPositionRelevantForPlayer$(class BlockPos const& position, class Player& player) const;

    MCAPI bool isActorRelevantForPlayer$(class Player& player, class Actor const& actor) const;

    MCAPI bool isDay$() const;

    MCAPI bool isNaturalDimension$() const;

    MCAPI bool isValidSpawn$(int x, int z) const;

    MCAPI bool mayRespawnViaBed$() const;

    MCAPI void onBlockChanged$(
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

    MCAPI void onBlockEvent$(class BlockSource& source, int x, int y, int z, int b0, int b1);

    MCAPI void onChunkLoaded$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI void onLevelDestruction$(std::string const&);

    MCAPI void sendBroadcast$(class Packet const& packet, class Player* except);

    MCAPI void
    sendPacketForPosition$(class BlockPos const& position, class Packet const& packet, class Player const* except);

    MCAPI void serialize$(class CompoundTag& tag) const;

    MCAPI bool showSky$() const;

    MCAPI void startLeaveGame$();

    MCAPI void tick$();

    MCAPI void tickRedstone$();

    MCAPI static ::LimboEntitiesVersion const& CurrentLimboEntitiesVersion();

    MCAPI static uint const& LOW_CPU_PACKET_BLOCK_LIMIT();

    MCAPI static ::ll::CArrayT<float const>& MOON_BRIGHTNESS_PER_PHASE();

    MCAPI static std::chrono::seconds const& STRUCTURE_PRUNE_INTERVAL();

    // NOLINTEND
};
