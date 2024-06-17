#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/StorageVersion.h"
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
        // symbol:
        // ?processReplicationForPlayers@PlayerReplicationStructures@Dimension@@QEAAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@PEAV2@@Z
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
    uchar                                            mBlockSource[8];             // this+0xCE
    float                                            mMobsPerChunkSurface[8];     // this+0xE0
    float                                            mMobsPerChunkUnderground[8]; // this+0xF8
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

    std::unordered_map<SubChunkPos, UpdateSubChunkBlocksPacket::BlocksChangedInfo>
        mBlocksChangedBySubChunkMap; // this+0x5C8

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
    // symbol: ??1Dimension@@UEAA@XZ
    virtual ~Dimension();

    // vIndex: 1, symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const;

    // vIndex: 2, symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const;

    // vIndex: 3,  symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    virtual void
    sendPacketForPosition(class BlockPos const& position, class Packet const& packet, class Player const* except);

    // vIndex: 4, symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    virtual void flushLevelChunkGarbageCollector();

    // vIndex: 5, symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    virtual void initializeWithLevelStorageManager(class LevelStorageManager&);

    // vIndex: 6, symbol: ?getBiomeRegistry@Dimension@@UEAAAEAVBiomeRegistry@@XZ
    virtual class BiomeRegistry& getBiomeRegistry();

    // vIndex: 7, symbol: ?getBiomeRegistry@Dimension@@UEBAAEBVBiomeRegistry@@XZ
    virtual class BiomeRegistry const& getBiomeRegistry() const;

    // vIndex: 9, symbol: ?forEachPlayer@Dimension@@UEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    virtual void forEachPlayer(std::function<bool(class Player&)> callback) const;

    // vIndex: 10, symbol: ?fetchEntity@Dimension@@UEBAPEAVActor@@UActorUniqueID@@_N@Z
    virtual class Actor* fetchEntity(struct ActorUniqueID actorID, bool getRemoved) const;

    // vIndex: 11, symbol: ?init@Dimension@@UEAAXAEBVStructureSetRegistry@worldgen@br@@@Z
    virtual void init(class br::worldgen::StructureSetRegistry const&);

    // vIndex: 12, symbol: ?tick@Dimension@@UEAAXXZ
    virtual void tick();

    // vIndex: 13, symbol: ?tickRedstone@Dimension@@UEAAXXZ
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

    // vIndex: 18, symbol: ?isValidSpawn@Dimension@@UEBA_NHH@Z
    virtual bool isValidSpawn(int x, int z) const;

    // vIndex: 19, symbol: ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    virtual class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    // vIndex: 20, symbol: ?hasPrecipitationFog@Dimension@@UEBA_NXZ
    virtual bool hasPrecipitationFog() const;

    // vIndex: 21, symbol: ?getCloudHeight@Dimension@@UEBAFXZ
    virtual short getCloudHeight() const;

    // vIndex: 22, symbol: ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
    virtual class HashedString getDefaultBiome() const;

    // vIndex: 23, symbol: ?hasGround@Dimension@@UEBA_NXZ
    virtual bool hasGround() const;

    // vIndex: 24, symbol: ?showSky@Dimension@@UEBA_NXZ
    virtual bool showSky() const;

    // vIndex: 25, symbol: ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getSpawnPos() const;

    // vIndex: 26, symbol: ?getSpawnYPosition@Dimension@@UEBAHXZ
    virtual int getSpawnYPosition() const;

    // vIndex: 27, symbol: ?mayRespawnViaBed@Dimension@@UEBA_NXZ
    virtual bool mayRespawnViaBed(void) const;

    // vIndex: 28, symbol: ?isDay@Dimension@@UEBA_NXZ
    virtual bool isDay() const;

    // vIndex: 29, symbol: ?getTimeOfDay@Dimension@@MEBAMHM@Z
    virtual float getTimeOfDay(int time, float a) const;

    // vIndex: 30, symbol: ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
    virtual float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    // vIndex: 31, symbol: ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
    virtual bool forceCheckAllNeighChunkSavedStat() const;

    // vIndex: 32, vIndex: 34, symbol: ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
    virtual void sendBroadcast(class Packet const& packet, class Player* except);

    // vIndex: 33, symbol: ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
    virtual bool is2DPositionRelevantForPlayer(class BlockPos const& position, class Player& player) const;

    // vIndex: 34, symbol: ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
    virtual bool isActorRelevantForPlayer(class Player& player, class Actor const& actor) const;

    // vIndex: 35, symbol: ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
    virtual class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // vIndex: 36, symbol: ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
    virtual class DimensionBrightnessRamp const& getBrightnessRamp() const;

    // vIndex: 37, symbol: ?startLeaveGame@Dimension@@UEAAXXZ
    virtual void startLeaveGame();

    // vIndex: 38, symbol:
    // ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
    virtual std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // vIndex: 39
    virtual void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers) = 0;

    // vIndex: 40
    virtual std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    ) = 0;

    // LevelListener vtable overloaded functions
    // vIndex: 4, symbol:
    // ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
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
    // vIndex: 8, symbol: ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
    virtual void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    // LevelListener vtable overloaded functions
    // vIndex: 19,symbol: ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 23, symbol:
    // ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onLevelDestruction(std::string const&);

    // SavedData vtable overloaded functions
    // symbol: ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const& tag);

    // symbol: ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag& tag) const;

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

    // symbol: ?getTargetMetaData@Dimension@@QEAA?AV?$shared_ptr@$$CBVLevelChunkMetaData@@@std@@XZ
    MCAPI std::shared_ptr<class LevelChunkMetaData const> getTargetMetaData();

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
