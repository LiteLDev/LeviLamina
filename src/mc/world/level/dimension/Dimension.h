#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/packet/UpdateSubChunkBlocksPacket.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/chunk/ChunkKey.h"
#include "mc/world/level/chunk/LevelChunkGarbageCollector.h"
#include "mc/world/level/dimension/ActorChunkTransferEntry.h"
#include "mc/world/level/dimension/ActorUnloadedChunkTransferEntry.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/levelgen/v1/FeatureTerrainAdjustments.h"
#include "mc/world/level/saveddata/SavedData.h"
#include "mc/world/level/storage/StorageVersion.h"

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

class ServerPlayer;
class BaseLightTextureImageBuilder;
class DimensionBrightnessRamp;
class LevelChunkMetaData;
class TaskGroup;
class PostprocessingManager;
class SubChunkInterlocker;
class WireframeQueue;
class RuntimeLightingManager;
class LevelChunkBuilderData;
class BlockEventDispatcher;
class TickingAreaList;
class WorldGenerator;
class Weather;
class Seasons;
class GameEventDispatcher;
class ChunkBuildOrderPolicyBase;
class VillageManager;
class CircuitSystem;
struct NetworkIdentifierWithSubId;
class ChunkLoadActionList;
class DelayActionList;
class ILevel;
class ChunkSource;

class Dimension : public IDimension,
                  public LevelListener,
                  public SavedData,
                  public Bedrock::EnableNonOwnerReferences,
                  public std::enable_shared_from_this<Dimension> {
public:
    // Dimension inner types declare
    // clang-format off
    struct PlayerReplicationStructures;
    // clang-format on

    // Dimension inner types define
    struct PlayerReplicationStructures {
    public:
        struct PlayerAtChunk {
            ChunkPos chunkPos;      // this+0x0
            ushort   playerIndex{}; // this+0x8
        };
        std::unordered_map<ChunkPos, std::vector<ushort>> mPlayersAtChunks;    // this+0x0
        std::vector<PlayerAtChunk>                        mPlayerInterestMap;  // this+0x40
        std::vector<gsl::not_null<ServerPlayer*>>         unwrappedPlayerList; // this+0x58

    public:
        // NOLINTBEGIN
        MCAPI void
        processReplicationForPlayers(std::vector<class WeakEntityRef> const& playerList, class Dimension* owner);

        // NOLINTEND
    };

    std::vector<ActorChunkTransferEntry> mActorChunkTransferQueue; // this+0x68
    std::unordered_map<ChunkKey, std::vector<ActorUnloadedChunkTransferEntry>>
        mActorUnloadedChunkTransferQueue; // this+0x80

    ILevel&                                          mLevel;                      // this+0xC0
    DimensionHeightRange                             mHeightRange;                // this+0xC4
    short                                            mSeaLevel;                   // this+0xCC
    OwnerPtr<BlockSource>                            mBlockSource;                // this+0xCE
    float                                            mMobsPerChunkSurface[7];     // this+0xE0
    float                                            mMobsPerChunkUnderground[7]; // this+0xF8
    BrightnessPair                                   mDefaultBrightness;          // this+0x118
    std::unique_ptr<BaseLightTextureImageBuilder>    mLightTextureImageBuilder;   // this+0x120
    std::unique_ptr<DimensionBrightnessRamp>         mDimensionBrightnessRamp;    // this+0x128
    std::shared_ptr<LevelChunkMetaData>              mTargetMetaData;             // this+0x130
    std::unique_ptr<RuntimeLightingManager>          mRuntimeLightingManager;     // this+0x140
    std::string                                      mName;                       // this+0x148
    DimensionType                                    mId;                         // this+0x168
    bool                                             mUltraWarm;                  // this+0x16C
    bool                                             mHasCeiling;                 // this+0x16D
    bool                                             mHasWeather;                 // this+0x16E
    bool                                             mHasSkylight;                // this+0x16F
    Brightness                                       mSkyDarken;                  // this+0x170
    std::unique_ptr<BlockEventDispatcher>            mDispatcher;                 // this+0x178
    std::unique_ptr<TaskGroup>                       mTaskGroup;                  // this+0x180
    std::unique_ptr<TaskGroup>                       mChunkGenTaskGroup;          // this+0x188
    std::unique_ptr<PostprocessingManager>           mPostProcessingManager;      // this+0x190
    std::unique_ptr<SubChunkInterlocker>             mSubChunkInterlocker;        // this+0x198
    std::unique_ptr<ChunkSource>                     mChunkSource;                // this+0x1A0
    WorldGenerator*                                  mWorldGenerator;             // this+0x1A8
    std::unique_ptr<Weather>                         mWeather;                    // this+0x1B0
    std::unique_ptr<Seasons>                         mSeasons;                    // this+0x1B8
    std::unique_ptr<GameEventDispatcher>             mGameEventDispatcher;        // this+0x1C0
    std::unique_ptr<CircuitSystem>                   mCircuitSystem;              // this+0x1C8
    int                                              CIRCUIT_TICK_RATE;           // this+0x1D0
    int                                              mCircuitSystemTickRate;      // this+0x1D4
    std::unordered_map<ActorUniqueID, WeakEntityRef> mActorIDEntityIDMap;         // this+0x1D8
    std::vector<WeakEntityRef>                       mDisplayEntities;            // this+0x218
    std::shared_ptr<WireframeQueue>                  mWireframeQueue;             // this+0x230
    FeatureTerrainAdjustments                        mFeatureTerrainAdjustments;  // this+0x240

    std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>> mLimboEntities; // this+0x288

    std::set<ActorUniqueID>                    mEntitiesToMoveChunks;       // this+0x2C8
    std::shared_ptr<TickingAreaList>           mTickingAreaList;            // this+0x2D8
    LevelChunkGarbageCollector                 mLevelChunkGarbageCollector; // this+0x2E8
    std::set<ActorUniqueID>                    mWitherIDs;                  // this+0x560
    std::unique_ptr<LevelChunkBuilderData>     mLevelChunkBuilderData;      // this+0x570
    std::chrono::steady_clock::time_point      mLastPruneTime;              // this+0x578
    std::chrono::steady_clock::time_point      mNextPruneTime;              // this+0x580
    std::unique_ptr<ChunkBuildOrderPolicyBase> mChunkBuildOrderPolicy;      // this+0x588
    std::unique_ptr<VillageManager>            mVillageManager;             // this+0x590
    std::vector<NetworkIdentifierWithSubId>    mTemporaryPlayerIds;         // this+0x598
    std::unique_ptr<ChunkLoadActionList>       mChunkLoadActionList;        // this+0x5B0
    std::unique_ptr<DelayActionList>           mDelayActionList;            // this+0x5B8

    std::unordered_map<SubChunkPos, UpdateSubChunkBlocksChangedInfo> mBlocksChangedBySubChunkMap; // this+0x5C8

    // Scripting::StrongObjectHandle
    uchar mClientScriptDimension[0x48]; // this+0x600

    std::unique_ptr<PlayerReplicationStructures> mReplicationStructures; // this+0x648
    std::vector<WeakEntityRef>                   mPlayersToReplicate;    // this+0x650
    bool                                         mRunChunkGenWatchDog;   // this+0x668


public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&);
    Dimension(Dimension const&);
    Dimension();

public:
    // NOLINTBEGIN
    virtual ~Dimension();

    // vIndex: 1
    virtual bool isNaturalDimension() const;

    // vIndex: 2
    virtual DimensionType getDimensionId() const;

    // vIndex: 3
    virtual void
    sendPacketForPosition(class BlockPos const& position, class Packet const& packet, class Player const* except);

    // vIndex: 4
    virtual void flushLevelChunkGarbageCollector();

    // vIndex: 5
    virtual void initializeWithLevelStorageManager(class LevelStorageManager&);

    // vIndex: 6
    virtual class BiomeRegistry& getBiomeRegistry();

    // vIndex: 7
    virtual class BiomeRegistry const& getBiomeRegistry() const;

    // vIndex: 9
    virtual void forEachPlayer(std::function<bool(class Player&)> callback) const;

    // vIndex: 10
    virtual class Actor* fetchEntity(struct ActorUniqueID actorID, bool getRemoved) const;

    // vIndex: 11
    virtual void init(class br::worldgen::StructureSetRegistry const&);

    // vIndex: 12
    virtual void tick();

    // vIndex: 13
    virtual void tickRedstone();

    // vIndex: 14
    virtual std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&) = 0;

    // vIndex: 15
    virtual void
    upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk) = 0;

    // vIndex: 16
    virtual void fixWallChunk(class ChunkSource&, class LevelChunk&) = 0;

    // vIndex: 17
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const&) const = 0;

    // vIndex: 18
    virtual bool isValidSpawn(int x, int z) const;

    // vIndex: 19
    virtual class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    // vIndex: 20
    virtual bool hasPrecipitationFog() const;

    // vIndex: 21
    virtual short getCloudHeight() const;

    // vIndex: 22
    virtual class HashedString getDefaultBiome() const;

    // vIndex: 23
    virtual bool hasGround() const;

    // vIndex: 24
    virtual bool showSky() const;

    // vIndex: 25
    virtual class BlockPos getSpawnPos() const;

    // vIndex: 26
    virtual int getSpawnYPosition() const;

    // vIndex: 27
    virtual bool mayRespawnViaBed(void) const;

    // vIndex: 28
    virtual bool isDay() const;

    // vIndex: 29
    virtual float getTimeOfDay(int time, float a) const;

    // vIndex: 30
    virtual float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    // vIndex: 31
    virtual bool forceCheckAllNeighChunkSavedStat() const;

    // vIndex: 32
    virtual void sendBroadcast(class Packet const& packet, class Player* except);

    // vIndex: 33
    virtual bool is2DPositionRelevantForPlayer(class BlockPos const& position, class Player& player) const;

    // vIndex: 34
    virtual bool isActorRelevantForPlayer(class Player& player, class Actor const& actor) const;

    // vIndex: 35
    virtual class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // vIndex: 36
    virtual class DimensionBrightnessRamp const& getBrightnessRamp() const;

    // vIndex: 37
    virtual void startLeaveGame();

    // vIndex: 38
    virtual std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // vIndex: 39
    virtual void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers) = 0;

    // vIndex: 40
    virtual std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    ) = 0;

    // LevelListener vtable overloaded functions
    // vIndex: 4
    virtual void onBlockChanged(
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

    // LevelListener->BlockSourceListener vtable overloaded function
    // vIndex: 8
    virtual void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    // LevelListener vtable overloaded functions
    // vIndex: 19
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 23
    virtual void onLevelDestruction(std::string const&);

    // SavedData vtable overloaded functions
    virtual void deserialize(class CompoundTag const& tag);

    virtual void serialize(class CompoundTag& tag) const;

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

    MCAPI static ::LimboEntitiesVersion const CurrentLimboEntitiesVersion;

    MCAPI static uint const LOW_CPU_PACKET_BLOCK_LIMIT;

    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];

    MCAPI static std::chrono::seconds const STRUCTURE_PRUNE_INTERVAL;

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
};
