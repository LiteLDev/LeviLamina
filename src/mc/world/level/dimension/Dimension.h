#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/saveddata/SavedData.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Dimension : public IDimension, public LevelListener, public SavedData, public Bedrock::EnableNonOwnerReferences {
public:
    // Dimension inner types declare
    // clang-format off
    struct PlayerReplicationStructures;
    // clang-format on

    char unk[1512];
    // Dimension inner types define
    struct PlayerReplicationStructures {
    public:
        struct PlayerAtChunk {
            class ChunkPos chunkPos;    // this+0x0
            ushort         playerIndex; // this+0x8
        };
        std::unordered_map<class ChunkPos, std::vector<ushort>> mPlayersAtChunks;    // this+0x0
        std::vector<PlayerAtChunk>                              mPlayerInterestMap;  // this+0x40
        std::vector<gsl::not_null<class ServerPlayer*>>         unwrappedPlayerList; // this+0x58

    public:
        // NOLINTBEGIN
        // symbol:
        // ?processReplicationForPlayers@PlayerReplicationStructures@Dimension@@QEAAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@PEAV2@@Z
        MCAPI void processReplicationForPlayers(std::vector<class WeakEntityRef> const&, class Dimension*);

        // NOLINTEND
    };

    // private:
    //     std::vector<ActorChunkTransferEntry> mActorChunkTransferQueue; // this+0x58
    //     std::unordered_map<ChunkKey, std::vector<ActorUnloadedChunkTransferEntry>>
    //         mActorUnloadedChunkTransferQueue; // this+0x70
    // protected:
    //     ILevel&                                       mLevel;                      // this+0xB0
    //     DimensionHeightRange                          mHeightRange;                // this+0xB8
    //     short                                         mSeaLevel;                   // this+0xBC
    //     OwnerPtrT<SharePtrRefTraits<BlockSource>>     mBlockSource;                // this+0xC0
    //     float                                         mMobsPerChunkSurface[7];     // this+0xD0
    //     float                                         mMobsPerChunkUnderground[7]; // this+0xEC
    //     BrightnessPair                                mDefaultBrightness;          // this+0x108
    //     std::unique_ptr<BaseLightTextureImageBuilder> mLightTextureImageBuilder;   // this+0x110
    //     std::unique_ptr<DimensionBrightnessRamp>      mDimensionBrightnessRamp;    // this+0x118
    //     std::shared_ptr<LevelChunkMetaData>           mTargetMetaData;             // this+0x120
    // private:
    //     std::string                                                             mName;                       //
    //     this+0x130 AutomaticID<Dimension, int>                                             mId; // this+0x150 bool
    //     mUltraWarm;                  // this+0x154 bool mHasCeiling;                 // this+0x155 bool mHasWeather;
    //     // this+0x156 bool                                                                    mHasSkylight; //
    //     this+0x157 Brightness                                                              mSkyDarken; // this+0x158
    //     std::unique_ptr<BlockEventDispatcher>                                   mDispatcher;                 //
    //     this+0x160 std::unique_ptr<TaskGroup>                                              mTaskGroup; // this+0x168
    //     std::unique_ptr<PostprocessingManager>                                  mPostProcessingManager;      //
    //     this+0x170 std::unique_ptr<SubChunkInterlocker>                                    mSubChunkInterlocker; //
    //     this+0x178 std::unique_ptr<ChunkSource>                                            mChunkSource; //
    //     this+0x180 WorldGenerator*                                                         mWorldGenerator; //
    //     this+0x188 std::unique_ptr<Weather>                                                mWeather; // this+0x190
    //     std::unique_ptr<Seasons>                                                mSeasons;                    //
    //     this+0x198 std::unique_ptr<GameEventDispatcher>                                    mGameEventDispatcher; //
    //     this+0x1A0 std::unique_ptr<CircuitSystem>                                          mCircuitSystem; //
    //     this+0x1A8 int                                                                     CIRCUIT_TICK_RATE; //
    //     this+0x1B0 int                                                                     mCircuitSystemTickRate; //
    //     this+0x1B4 std::unordered_map<ActorUniqueID, WeakEntityRef>                        mActorIDEntityIDMap; //
    //     this+0x1B8 std::vector<WeakEntityRef>                                              mDisplayEntities; //
    //     this+0x1F8 std::shared_ptr<WireframeQueue>                                         mWireframeQueue; //
    //     this+0x210 FeatureTerrainAdjustments mFeatureTerrainAdjustments;  // this+0x220 std::unordered_map<ChunkPos,
    //     std::vector<std::unique_ptr<CompoundTag>>> mLimboEntities;              // this+0x268 std::set<ActorUniqueID>
    //     mEntitiesToMoveChunks;       // this+0x2A8 std::shared_ptr<TickingAreaList> mTickingAreaList;            //
    //     this+0x2B8 LevelChunkGarbageCollector mLevelChunkGarbageCollector; // this+0x2C8 std::set<ActorUniqueID>
    //     mWitherIDs;                  // this+0x540 std::unique_ptr<RuntimeLightingManager> mRuntimeLightingManager;
    //     // this+0x550 std::unique_ptr<LevelChunkBuilderData>                                  mLevelChunkBuilderData;
    //     // this+0x558 std::chrono::time_point<std::chrono::steady_clock>                      mLastPruneTime; //
    //     this+0x560 std::unique_ptr<ChunkBuildOrderPolicyBase>                              mChunkBuildOrderPolicy; //
    //     this+0x568 std::unique_ptr<VillageManager>                                         mVillageManager; //
    //     this+0x570 std::vector<NetworkIdentifierWithSubId>                                 mTemporaryPlayerIds; //
    //     this+0x578 std::unique_ptr<ChunkLoadActionList>                                    mChunkLoadActionList; //
    //     this+0x590 std::unique_ptr<DelayActionList>                                        mDelayActionList; //
    //     this+0x598 std::unordered_map<SubChunkPos, UpdateSubChunkBlocksPacket::BlocksChangedInfo>
    //                                                             mBlocksChangedBySubChunkMap; // this+0x5A0
    //     Scripting::StrongObjectHandle                           mClientScriptDimension;      // this+0x5E0
    //     std::mutex                                              mSynchedChunkMutex;          // this+0x600
    //     std::unique_ptr<Dimension::PlayerReplicationStructures> mReplicationStructures;      // this+0x650
    //     std::vector<WeakEntityRef>                              mPlayersToReplicate;         // this+0x658


public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&);
    Dimension(Dimension const&);
    Dimension();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const;

    // vIndex: 1, symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const;

    // vIndex: 2, symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    virtual void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*);

    // vIndex: 3, symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    virtual void flushLevelChunkGarbageCollector();

    // vIndex: 4, symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    virtual void initializeWithLevelStorageManager(class LevelStorageManager&);

    // vIndex: 5, symbol: ?init@Dimension@@UEAAXXZ
    virtual void init();

    // vIndex: 6, symbol: ?tick@Dimension@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?tickRedstone@Dimension@@UEAAXXZ
    virtual void tickRedstone();

    // vIndex: 12, symbol: ?isValidSpawn@Dimension@@UEBA_NHH@Z
    virtual bool isValidSpawn(int, int) const;

    // vIndex: 13, symbol: ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    virtual class mce::Color getBrightnessDependentFogColor(class mce::Color const&, float) const;

    // vIndex: 14, symbol: ?isFoggyAt@Dimension@@UEBA_NHH@Z
    virtual bool isFoggyAt(int, int) const;

    // vIndex: 15, symbol: ?hasPrecipitationFog@Dimension@@UEBA_NXZ
    virtual bool hasPrecipitationFog() const;

    // vIndex: 16, symbol: ?getCloudHeight@Dimension@@UEBAFXZ
    virtual short getCloudHeight() const;

    // vIndex: 17, symbol: ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
    virtual class HashedString getDefaultBiome() const;

    // vIndex: 18, symbol: ?mayRespawnViaBed@Dimension@@UEBA_NXZ
    virtual bool mayRespawnViaBed() const;

    // vIndex: 19, symbol: ?hasGround@Dimension@@UEBA_NXZ
    virtual bool hasGround() const;

    // vIndex: 20, symbol: ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getSpawnPos() const;

    // vIndex: 21, symbol: ?getSpawnYPosition@Dimension@@UEBAHXZ
    virtual int getSpawnYPosition() const;

    // vIndex: 22, symbol: ?hasBedrockFog@Dimension@@UEAA_NXZ
    virtual bool hasBedrockFog();

    // vIndex: 23, symbol: ?getClearColorScale@Dimension@@UEAAMXZ
    virtual float getClearColorScale();

    // vIndex: 24, symbol: ?showSky@Dimension@@UEBA_NXZ
    virtual bool showSky() const;

    // vIndex: 25, symbol: ?isDay@Dimension@@UEBA_NXZ
    virtual bool isDay() const;

    // vIndex: 26, symbol: ?getTimeOfDay@Dimension@@MEBAMHM@Z
    virtual float getTimeOfDay(int, float) const;

    // vIndex: 27, symbol: ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
    virtual float getSunIntensity(float, class Vec3 const&, float) const;

    // vIndex: 28, symbol: ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
    virtual bool forceCheckAllNeighChunkSavedStat() const;

    // vIndex: 30, symbol: ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
    virtual void sendBroadcast(class Packet const&, class Player*);

    // vIndex: 31, symbol: ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
    virtual bool is2DPositionRelevantForPlayer(class BlockPos const&, class Player&) const;

    // vIndex: 32, symbol: ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
    virtual bool isActorRelevantForPlayer(class Player&, class Actor const&) const;

    // vIndex: 33, symbol: ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
    virtual class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // vIndex: 34, symbol: ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
    virtual class DimensionBrightnessRamp const& getBrightnessRamp() const;

    // vIndex: 35, symbol: ?startLeaveGame@Dimension@@UEAAXXZ
    virtual void startLeaveGame();

    // vIndex: 36, symbol:
    // ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
    virtual std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // // symbol:
    // //
    // ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
    // MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // symbol: ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
    MCVAPI void deserialize(class CompoundTag const&);

    // // symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    // MCVAPI void flushLevelChunkGarbageCollector();

    // // symbol: ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
    // MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    // // symbol: ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    // MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const&, float) const;

    // // symbol: ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
    // MCVAPI class DimensionBrightnessRamp const& getBrightnessRamp() const;

    // // symbol: ?getClearColorScale@Dimension@@UEAAMXZ
    // MCVAPI float getClearColorScale();

    // // symbol: ?getCloudHeight@Dimension@@UEBAFXZ
    // MCVAPI short getCloudHeight() const;

    // // symbol: ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
    // MCVAPI class HashedString getDefaultBiome() const;

    // // symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    // MCVAPI DimensionType getDimensionId() const;

    // // symbol: ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
    // MCVAPI class BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // // symbol: ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
    // MCVAPI class BlockPos getSpawnPos() const;

    // // symbol: ?getSpawnYPosition@Dimension@@UEBAHXZ
    // MCVAPI int getSpawnYPosition() const;

    // // symbol: ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
    // MCVAPI float getSunIntensity(float, class Vec3 const&, float) const;

    // // symbol: ?getTimeOfDay@Dimension@@MEBAMHM@Z
    // MCVAPI float getTimeOfDay(int, float) const;

    // // symbol: ?hasBedrockFog@Dimension@@UEAA_NXZ
    // MCVAPI bool hasBedrockFog();

    // // symbol: ?hasGround@Dimension@@UEBA_NXZ
    // MCVAPI bool hasGround() const;

    // // symbol: ?hasPrecipitationFog@Dimension@@UEBA_NXZ
    // MCVAPI bool hasPrecipitationFog() const;

    // // symbol: ?init@Dimension@@UEAAXXZ
    // MCVAPI void init();

    // // symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    // MCVAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // // symbol: ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
    // MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const&, class Player&) const;

    // // symbol: ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
    // MCVAPI bool isActorRelevantForPlayer(class Player&, class Actor const&) const;

    // // symbol: ?isDay@Dimension@@UEBA_NXZ
    // MCVAPI bool isDay() const;

    // // symbol: ?isFoggyAt@Dimension@@UEBA_NHH@Z
    // MCVAPI bool isFoggyAt(int, int) const;

    // // symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    // MCVAPI bool isNaturalDimension() const;

    // // symbol: ?isValidSpawn@Dimension@@UEBA_NHH@Z
    // MCVAPI bool isValidSpawn(int, int) const;

    // // symbol: ?mayRespawnViaBed@Dimension@@UEBA_NXZ
    // MCVAPI bool mayRespawnViaBed() const;

    // // symbol:
    // //
    // ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    // MCVAPI void
    // onBlockChanged(class BlockSource&, class BlockPos const&, uint, class Block const&, class Block const&, int,
    // struct ActorBlockSyncMessage const*, ::BlockChangedEventTarget, class Actor*);

    // // symbol: ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
    // MCVAPI void onBlockEvent(class BlockSource&, int, int, int, int, int);

    // // symbol: ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    // MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // // symbol:
    // ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z MCVAPI
    // void onLevelDestruction(std::string const&);

    // // symbol: ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
    // MCVAPI void sendBroadcast(class Packet const&, class Player*);

    // // symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    // MCVAPI void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*);

    // symbol: ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
    MCVAPI void serialize(class CompoundTag&) const;

    // // symbol: ?showSky@Dimension@@UEBA_NXZ
    // MCVAPI bool showSky() const;

    // // symbol: ?startLeaveGame@Dimension@@UEAAXXZ
    // MCVAPI void startLeaveGame();

    // // symbol: ?tick@Dimension@@UEAAXXZ
    // MCVAPI void tick();

    // // symbol: ?tickRedstone@Dimension@@UEAAXXZ
    // MCVAPI void tickRedstone();

    // // symbol: ??1Dimension@@UEAA@XZ
    // MCVAPI ~Dimension();

    // symbol:
    // ??0Dimension@@QEAA@AEAVILevel@@V?$AutomaticID@VDimension@@H@@VDimensionHeightRange@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI Dimension(class ILevel&, DimensionType, class DimensionHeightRange, class Scheduler&, std::string);

    // symbol:
    // ?addActorUnloadedChunkTransferToQueue@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void
    addActorUnloadedChunkTransferToQueue(class ChunkPos const&, class ChunkPos const&, DimensionType, std::string&, std::unique_ptr<class CompoundTag>);

    // symbol: ?addPlayerToReplication@Dimension@@QEAAXAEBVWeakEntityRef@@@Z
    MCAPI void addPlayerToReplication(class WeakEntityRef const&);

    // symbol: ?addWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void addWither(struct ActorUniqueID const&);

    // symbol: ?clearPlayerReplicationList@Dimension@@QEAAXXZ
    MCAPI void clearPlayerReplicationList();

    // symbol: ?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);

    // symbol: ?fetchAnyInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player* fetchAnyInteractablePlayer(class Vec3 const&, float) const;

    // symbol: ?fetchEntity@Dimension@@QEBAPEAVActor@@UActorUniqueID@@_N@Z
    MCAPI class Actor* fetchEntity(struct ActorUniqueID, bool) const;

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z
    MCAPI class Player* fetchNearestAttackablePlayer(class BlockPos, float, class Actor*);

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player* fetchNearestAttackablePlayer(class Actor&, float);

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player* fetchNearestInteractablePlayer(class Vec3 const&, float) const;

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player* fetchNearestInteractablePlayer(class Actor&, float) const;

    // symbol: ?fetchNearestPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M_NV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player*
    fetchNearestPlayer(class Vec3 const&, float, bool, std::function<bool(class Player const&)>) const;

    // symbol: ?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player* findPlayer(std::function<bool(class Player const&)>) const;

    // symbol: ?flagEntityforChunkMove@Dimension@@QEAAXAEAVActor@@@Z
    MCAPI void flagEntityforChunkMove(class Actor&);

    // symbol: ?flushRunTimeLighting@Dimension@@QEAAXXZ
    MCAPI void flushRunTimeLighting();

    // symbol: ?forEachPlayer@Dimension@@QEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    MCAPI void forEachPlayer(std::function<bool(class Player&)>) const;

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
    MCAPI float getPopCap(int, bool) const;

    // symbol: ?getSeasons@Dimension@@QEAAAEAVSeasons@@XZ
    MCAPI class Seasons& getSeasons();

    // symbol: ?getSkyDarken@Dimension@@QEBA?AUBrightness@@XZ
    MCAPI struct Brightness getSkyDarken() const;

    // symbol: ?getSunAngle@Dimension@@QEBAMM@Z
    MCAPI float getSunAngle(float) const;

    // symbol: ?getTickingAreas@Dimension@@QEAAAEAVTickingAreaList@@XZ
    MCAPI class TickingAreaList& getTickingAreas();

    // symbol: ?getTickingAreasConst@Dimension@@QEBAAEBVTickingAreaList@@XZ
    MCAPI class TickingAreaList const& getTickingAreasConst() const;

    // symbol: ?getTimeOfDay@Dimension@@QEBAMM@Z
    MCAPI float getTimeOfDay(float) const;

    // symbol:
    // ?getVillageManager@Dimension@@QEBAAEBV?$unique_ptr@VVillageManager@@U?$default_delete@VVillageManager@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const;

    // symbol: ?getWeakRef@Dimension@@QEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@XZ
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getWeakRef();

    // symbol: ?getWeather@Dimension@@QEBAAEAVWeather@@XZ
    MCAPI class Weather& getWeather() const;

    // symbol: ?getWorldGenerator@Dimension@@QEBAPEAVWorldGenerator@@XZ
    MCAPI class WorldGenerator* getWorldGenerator() const;

    // symbol: ?hasCeiling@Dimension@@QEBA_NXZ
    MCAPI bool hasCeiling() const;

    // symbol: ?hasSkylight@Dimension@@QEBA_NXZ
    MCAPI bool hasSkylight() const;

    // symbol: ?isChunkKnown@Dimension@@QEBA_NAEBVChunkPos@@@Z
    MCAPI bool isChunkKnown(class ChunkPos const&) const;

    // symbol: ?isClientSideGenerationEnabled@Dimension@@QEBA?B_NXZ
    MCAPI bool const isClientSideGenerationEnabled() const;

    // symbol: ?isHeightWithinRange@Dimension@@QEBA_NAEBF@Z
    MCAPI bool isHeightWithinRange(short const&) const;

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
    MCAPI void onStaticTickingAreaAdded(std::string const&);

    // symbol: ?pauseAndFlushTaskGroups@Dimension@@QEAAXXZ
    MCAPI void pauseAndFlushTaskGroups();

    // symbol: ?processPlayerReplication@Dimension@@QEAAXXZ
    MCAPI void processPlayerReplication();

    // symbol: ?registerEntity@Dimension@@QEAAXAEBUActorUniqueID@@V?$WeakRefT@UEntityRefTraits@@@@@Z
    MCAPI void registerEntity(struct ActorUniqueID const&, class WeakRefT<struct EntityRefTraits>);

    // symbol: ?removeActorByID@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeActorByID(struct ActorUniqueID const&);

    // symbol: ?removeWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeWither(struct ActorUniqueID const&);

    // symbol: ?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z
    MCAPI void sendPacketForEntity(class Actor const&, class Packet const&, class Player const*);

    // symbol:
    // ?sendPacketToClients@Dimension@@QEAAXAEBVPacket@@V?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@@Z
    MCAPI void sendPacketToClients(class Packet const&, std::vector<struct NetworkIdentifierWithSubId>);

    // symbol: ?setCeiling@Dimension@@QEAAX_N@Z
    MCAPI void setCeiling(bool);

    // symbol: ?setSkylight@Dimension@@QEAAX_N@Z
    MCAPI void setSkylight(bool);

    // symbol: ?setUltraWarm@Dimension@@QEAAX_N@Z
    MCAPI void setUltraWarm(bool);

    // symbol:
    // ?transferEntity@Dimension@@QEAAXAEBVChunkPos@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    MCAPI void transferEntity(class ChunkPos const&, class Vec3 const&, std::unique_ptr<class CompoundTag>, bool);

    // symbol: ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEAVActor@@PEAVLevelChunk@@@Z
    MCAPI void transferEntityToUnloadedChunk(class Actor&, class LevelChunk*);

    // symbol:
    // ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void
    transferEntityToUnloadedChunk(class ChunkPos const&, class ChunkPos const&, DimensionType, std::string&, std::unique_ptr<class CompoundTag>);

    // symbol: ?tryGarbageCollectStructures@Dimension@@QEAAXXZ
    MCAPI void tryGarbageCollectStructures();

    // symbol: ?tryLoadLimboEntities@Dimension@@QEAAXAEBVChunkPos@@@Z
    MCAPI void tryLoadLimboEntities(class ChunkPos const&);

    // symbol: ?unregisterDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>);

    // symbol: ?unregisterEntity@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void unregisterEntity(struct ActorUniqueID const&);

    // symbol: ?updateBlockLight@Dimension@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
    MCAPI void updateBlockLight(
        class BlockPos const&,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        struct Brightness,
        bool
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
    // symbol: ?_completeEntityTransfer@Dimension@@IEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
    MCAPI void _completeEntityTransfer(class OwnerPtrT<struct EntityRefTraits>, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processEntityChunkTransfers@Dimension@@AEAAXXZ
    MCAPI void _processEntityChunkTransfers();

    // symbol: ?_sendBlockEntityUpdatePacket@Dimension@@AEAAXAEBVNetworkBlockPosition@@@Z
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const&);

    // symbol: ?_sendBlocksChangedPackets@Dimension@@AEAAXXZ
    MCAPI void _sendBlocksChangedPackets();

    // symbol: ?_tickEntityChunkMoves@Dimension@@AEAAXXZ
    MCAPI void _tickEntityChunkMoves();

    // NOLINTEND
};
