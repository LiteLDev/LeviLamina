#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/chunk/ChunkKey.h"
#include "mc/world/level/chunk/LevelChunkGarbageCollector.h"
#include "mc/world/level/dimension/ActorReplication.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/DimensionIdType.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/dimension/DirectionalLightSource.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/levelgen/v1/FeatureTerrainAdjustments.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"
#include "mc/world/level/saveddata/SavedData.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
class Block;
class BlockEventDispatcher;
class BlockPos;
class BlockSource;
class ChunkBuildOrderPolicyBase;
class ChunkLoadActionList;
class ChunkSource;
class CircuitSystem;
class CompoundTag;
class DelayActionList;
class DimensionBrightnessRamp;
class EntityContext;
class GameEventDispatcher;
class ILevel;
class ILevelStorageManagerConnector;
class Level;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaData;
class Packet;
class Player;
class PostprocessingManager;
class RuntimeLightingManager;
class Seasons;
class SubChunkInterlocker;
class TaskGroup;
class TickingAreaList;
class Vec3;
class VillageManager;
class WeakEntityRef;
class Weather;
class WorldGenerator;
struct ActorBlockSyncMessage;
struct ActorChunkTransferEntry;
struct ActorUnloadedChunkTransferEntry;
struct BiomeIdType;
struct DimensionArguments;
struct NetworkIdentifierWithSubId;
struct UpdateSubChunkBlocksChangedInfo;
struct UpdateSubChunkNetworkBlockInfo;
namespace Poi { class Manager; }
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
class ClientDimensionExtensions;
class IClientDimensionExtensions;
class IStructureWireframeQueue;
// clang-format on

class Dimension : public ::IDimension,
                  public ::LevelListener,
                  public ::SavedData,
                  public ::Bedrock::EnableNonOwnerReferences,
                  public ::EnableGetWeakRef<::Dimension>,
                  public ::std::enable_shared_from_this<::Dimension> {
public:
    // Dimension inner types declare
    // clang-format off
    struct ChaoticDirectionalLightControls;
    struct DirectionalLightState;
    // clang-format on

    // Dimension inner types define
    struct ChaoticDirectionalLightControls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMaxFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMinFlashCooldown;
        ::ll::TypedStorage<4, 4, float> mMaxFlashCooldown;
        // NOLINTEND
    };

    struct DirectionalLightState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                    mAngle;
        ::ll::TypedStorage<4, 4, float>                    mPerpendicularAngle;
        ::ll::TypedStorage<4, 4, float>                    mIntensityMultiplier;
        ::ll::TypedStorage<4, 4, ::DirectionalLightSource> mLightSource;
        // NOLINTEND
    };

    using ActorTagList = ::std::vector<::std::unique_ptr<::CompoundTag>>;

    using ChunkPosToActorListMap = ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>;

    using DirectionalLightControls = ::std::variant<::Dimension::ChaoticDirectionalLightControls>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorChunkTransferEntry>> mActorChunkTransferQueue;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkKey, ::std::vector<::ActorUnloadedChunkTransferEntry>>>
                                                                                      mActorUnloadedChunkTransferQueue;
    ::ll::TypedStorage<8, 8, ::ILevel&>                                               mLevel;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>                                  mHeightRange;
    ::ll::TypedStorage<2, 2, short>                                                   mSeaLevel;
    ::ll::TypedStorage<1, 1, uchar>                                                   mMonsterSpawnBlockLightLimit;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                          mMonsterSpawnLightTest;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                              mBlockSource;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasWeather;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkSurface;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkUnderground;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                        mDefaultBrightness;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DimensionBrightnessRamp>>            mDimensionBrightnessRamp;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>                mTargetMetaData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RuntimeLightingManager>>             mRuntimeLightingManager;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mTypeId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mId;
    ::ll::TypedStorage<2, 2, ::DimensionIdType const>                                 mRegistryId;
    ::ll::TypedStorage<1, 1, bool>                                                    mUltraWarm;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasCeiling;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSkylight;
    ::ll::TypedStorage<1, 1, ::Brightness>                                            mSkyDarken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockEventDispatcher>>               mDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mChunkGenTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PostprocessingManager>>              mPostProcessingManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkInterlocker>>                mSubChunkInterlocker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                        mChunkSource;
    ::ll::TypedStorage<8, 8, ::WorldGenerator*>                                       mWorldGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Weather>>                            mWeather;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Seasons>>                            mSeasons;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameEventDispatcher>>                mGameEventDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CircuitSystem>>                      mCircuitSystem;
    ::ll::TypedStorage<4, 4, int const>                                               CIRCUIT_TICK_RATE;
    ::ll::TypedStorage<4, 4, int>                                                     mCircuitSystemTickRate;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::WeakEntityRef>> mActorIDEntityIDMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                         mDisplayEntities;
    ::ll::TypedStorage<8, 72, ::FeatureTerrainAdjustments>                            mFeatureTerrainAdjustments;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>>
                                                                             mLimboEntities;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mEntitiesToMoveChunks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TickingAreaList>>          mTickingAreaList;
    ::ll::TypedStorage<8, 632, ::LevelChunkGarbageCollector>                 mLevelChunkGarbageCollector;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mWitherIDs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelChunkBuilderData>>     mLevelChunkBuilderData;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastPruneTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastStructurePruneTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBuildOrderPolicyBase>> mChunkBuildOrderPolicy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VillageManager>>            mVillageManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::Manager>>              mPoiManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>>   mTemporaryPlayerIds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkLoadActionList>>       mChunkLoadActionList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DelayActionList>>           mDelayActionList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::UpdateSubChunkBlocksChangedInfo>>
                                                                              mBlocksChangedBySubChunkMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientDimensionExtensions>> mClientExtensions;
    ::ll::TypedStorage<8, 112, ::ActorReplication>                            mActorReplication;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                 mPlayersToReplicate;
    ::ll::TypedStorage<1, 1, bool>                                            mRunChunkGenWatchDog;
    // NOLINTEND

public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&);
    Dimension(Dimension const&);
    Dimension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Dimension() /*override*/;

    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    virtual void tick();

    virtual void tickRedstone();

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) = 0;

    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) = 0;

    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) = 0;

    virtual void initializeWithLevelStorageManagerConnector(
        ::ILevelStorageManagerConnector& levelStorageManagerConnector
    ) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const = 0;

    virtual bool isNaturalDimension() const /*override*/;

    virtual bool isValidSpawn(int, int) const;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    virtual short getCloudHeight() const;

    virtual ::BiomeIdType getDefaultBiomeId() const;

    virtual bool mayRespawnViaBed() const;

    virtual ::BlockPos getSpawnPos() const;

    virtual int getSpawnYPosition() const;

    virtual bool showSky() const;

    virtual float getTimeOfDay(int time, float a) const;

    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );

    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const;

    virtual ::DimensionType getDimensionId() const /*override*/;

    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const /*override*/;

    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;

    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const /*override*/;

    virtual ::Actor* fetchEntity(::ActorUniqueID actorID, bool getRemoved) const /*override*/;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    virtual void serialize(::CompoundTag& tag) const /*override*/;

    virtual void sendBroadcast(::Packet const& packet, ::Player* except);

    virtual bool is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    virtual void buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const /*override*/;

    virtual void
    sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except) /*override*/;

    virtual void sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except) /*override*/;

    virtual bool isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    virtual void onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1) /*override*/;

    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;

    virtual ::DimensionBrightnessRamp const& getBrightnessRamp() const;

    virtual ::std::vector<::std::string> const getStructuresFromChunkRegistry(::Vec3 const& location) const;

    virtual ::std::optional<::std::string> const getStructureFromStructureRegistry(::Vec3 const& location) const;

    virtual void startLeaveGame();

    virtual void flushLevelChunkGarbageCollector() /*override*/;

    virtual void updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const /*override*/;

    virtual ::std::unique_ptr<::ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) = 0;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Dimension(::DimensionArguments&& args);

    MCAPI void _addActorUnloadedChunkTransferToQueue(
        ::ChunkPos const&                fromChunkPos,
        ::ChunkPos const&                toChunkPos,
        ::DimensionType                  dimId,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> entityTag
    );

    MCAPI void _completeEntityTransfer(::OwnerPtr<::EntityContext> entity);

    MCAPI ::BlockSource _createFixupBlockSource(::ChunkSource& source);

    MCAPI void _processEntityChunkTransfers();

    MCAPI void _runChunkGenerationWatchdog();

    MCAPI void _sendBlockEntityUpdatePacket(::BlockPos const& pos);

    MCAPI void _sendBlocksChangedPackets();

    MCAPI void _sendUpdateBlockPacket(::UpdateSubChunkNetworkBlockInfo const& info, uint const& layer);

    MCAPI void _tickEntityChunkMoves();

    MCAPI void addPlayerToReplication(::WeakEntityRef const& player);

    MCAPI void addWither(::ActorUniqueID const& id);

    MCAPI void clearPlayerReplicationList();

    MCAPI float distanceToNearestPlayerSqr2D(::Vec3 origin);

    MCAPI ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

    MCAPI ::Player* fetchNearestAttackablePlayer(::Actor& source, float maxDist) const;

    MCAPI ::Player* fetchNearestAttackablePlayer(::BlockPos source, float maxDist, ::Actor* sourceActor) const;

    MCAPI ::Player* fetchNearestInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

    MCAPI ::Player* fetchNearestInteractablePlayer(::Actor& source, float maxDist) const;

    MCAPI ::Player* fetchNearestPlayer(
        ::Vec3 const&                                searchPos,
        float                                        maxDist,
        bool                                         isFetchAny,
        ::brstd::function_ref<bool(::Player const&)> playerFilter
    ) const;

    MCAPI ::Player* findPlayer(::brstd::function_ref<bool(::Player const&)> pred) const;

    MCAPI void flagEntityforChunkMove(::Actor& e);

    MCAPI void flushRunTimeLighting();

    MCFOLD ::BlockEventDispatcher& getBlockEventDispatcher();

    MCFOLD ::ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();

    MCAPI ::gsl::not_null<::ChunkLoadActionList*> getChunkLoadActionList();

    MCAPI ::ChunkSource& getChunkSource() const;

    MCFOLD ::CircuitSystem& getCircuitSystem();

    MCAPI ::gsl::not_null<::DelayActionList*> getDelayActionList();

    MCFOLD ::std::vector<::WeakEntityRef>& getDisplayEntities();

    MCFOLD ::std::unordered_map<::ActorUniqueID, ::WeakEntityRef>& getEntityIdMap();

#ifdef LL_PLAT_C
    MCFOLD ::std::unordered_map<::ActorUniqueID, ::WeakEntityRef> const& getEntityIdMapConst() const;
#endif

    MCFOLD ::FeatureTerrainAdjustments& getFeatureTerrainAdjustments();

    MCAPI ::GameEventDispatcher* getGameEventDispatcher() const;

    MCAPI short getHeight() const;

    MCAPI ushort getHeightInSubchunks() const;

    MCFOLD ::DimensionHeightRange const& getHeightRange() const;

    MCFOLD ::Level& getLevel() const;

    MCFOLD ::Level const& getLevelConst() const;

    MCAPI ::std::string getLocalizationKey() const;

    MCAPI short getMinHeight() const;

    MCAPI uchar getMonsterSpawnBlockLightLimit() const;

    MCAPI ::IntProvider getMonsterSpawnLightTest() const;

    MCAPI float getMoonBrightness() const;

    MCAPI int getMoonPhase() const;

    MCAPI ::Brightness getOldSkyDarken(float a);

    MCAPI float getPopCap(int catID, bool surface) const;

    MCFOLD ::Seasons& getSeasons();

#ifdef LL_PLAT_C
    MCAPI float getSkyDarken(float a) const;
#endif

    MCAPI ::Brightness getSkyDarken() const;

    MCAPI float getSunAngle(float a) const;

    MCFOLD ::std::shared_ptr<::LevelChunkMetaData const> getTargetMetaData();

    MCFOLD ::TickingAreaList& getTickingAreas();

    MCFOLD ::TickingAreaList const& getTickingAreasConst() const;

    MCAPI float getTimeOfDay(float a) const;

    MCFOLD ::std::string const& getTypeId() const;

    MCAPI ::std::unique_ptr<::VillageManager> const& getVillageManager() const;

    MCAPI ::WeakRef<::Dimension> getWeakRef();

    MCFOLD ::Weather& getWeather() const;

    MCFOLD ::WorldGenerator* getWorldGenerator() const;

#ifdef LL_PLAT_C
    MCAPI bool hasAddedWither() const;
#endif

    MCAPI bool hasCeiling() const;

    MCFOLD bool hasSkylight() const;

    MCAPI bool isBrightOutside() const;

    MCAPI bool isChunkKnown(::ChunkPos const& chunkPos) const;

    MCAPI bool const isClientSideGenerationEnabled() const;

    MCAPI bool isHeightWithinRange(short const& height) const;

    MCAPI bool isLeaveGameDone();

    MCAPI bool isMoonVisible() const;

    MCAPI bool isRedstoneTick();

    MCAPI bool isSubChunkHeightWithinRange(short const& subChunkHeight) const;

    MCAPI bool isUltraWarm() const;

    MCAPI void neighborAwareChunkUpgrade(::ChunkSource& source, ::LevelChunk& levelChunk);

    MCAPI void onStaticTickingAreaAdded(::std::string const& tickingAreaName);

    MCAPI void pauseAndFlushTaskGroups();

    MCAPI void processPlayerReplication();

#ifdef LL_PLAT_C
    MCAPI void registerDisplayEntity(::WeakRef<::EntityContext> entityRef);
#endif

    MCAPI void registerEntity(::ActorUniqueID const& actorID, ::WeakRef<::EntityContext> entityRef);

    MCAPI void removeActorByID(::ActorUniqueID const& id);

    MCAPI void removeWither(::ActorUniqueID const& id);

    MCAPI void sendPacketToClients(::Packet const& packet, ::std::vector<::NetworkIdentifierWithSubId> ids);

    MCAPI void setCeiling(bool ceiling);

#ifdef LL_PLAT_C
    MCAPI void setRunChunkGenWatchDog(bool runWatchDog);
#endif

    MCAPI void setSkylight(bool skylight);

    MCAPI void setUltraWarm(bool warm);

#ifdef LL_PLAT_C
    MCAPI void setWorldGenerator(::WorldGenerator* generator);
#endif

    MCAPI void
    transferEntity(::ChunkPos const& fromChunkPos, ::Vec3 const& spawnPos, ::std::unique_ptr<::CompoundTag> entityTag);

    MCAPI void transferEntityToUnloadedChunk(::Actor& actor, ::LevelChunk* fromChunk);

    MCAPI void tryGarbageCollectStructures();

    MCAPI void tryLoadLimboEntities(::ChunkPos const& loadPos);

    MCAPI void unregisterDisplayEntity(::WeakRef<::EntityContext> entityRef);

    MCAPI void unregisterEntity(::ActorUniqueID const& actorID);

    MCAPI void updateBlockLight(
        ::BlockPos const& blockPos,
        ::Brightness      oldBrightness,
        ::Brightness      newBrightness,
        ::Brightness      oldAbsorb,
        ::Brightness      newAbsorb,
        bool              isSunLight
    );

#ifdef LL_PLAT_C
    MCAPI void visitExtensions(::brstd::function_ref<void(::ClientDimensionExtensions&)> visitor);
#endif

    MCAPI void visitStructureWireframe(::brstd::function_ref<void(::IStructureWireframeQueue&)> visitor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<float const[]> MOON_BRIGHTNESS_PER_PHASE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DimensionArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void $tick();

    MCAPI void $tickRedstone();

    MCAPI void
    $initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCFOLD bool $isNaturalDimension() const;

    MCFOLD bool $isValidSpawn(int, int) const;

    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    MCAPI short $getCloudHeight() const;

    MCAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCFOLD bool $mayRespawnViaBed() const;

    MCFOLD ::BlockPos $getSpawnPos() const;

    MCFOLD int $getSpawnYPosition() const;

    MCFOLD bool $showSky() const;

    MCAPI float $getTimeOfDay(int time, float a) const;

    MCFOLD void $setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );

    MCAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float a) const;

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI void $forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const;

    MCFOLD ::BiomeRegistry& $getBiomeRegistry();

    MCFOLD ::BiomeRegistry const& $getBiomeRegistry() const;

    MCFOLD ::BlockSource& $getBlockSourceFromMainChunkSource() const;

    MCAPI ::Actor* $fetchEntity(::ActorUniqueID actorID, bool getRemoved) const;

    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;

    MCAPI void $sendBroadcast(::Packet const& packet, ::Player* except);

    MCAPI bool $is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    MCAPI void $buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const;

    MCAPI void $sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except);

    MCAPI void $sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except);

    MCAPI bool $isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    MCAPI void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);

    MCAPI void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );

    MCAPI void $onLevelDestruction(::std::string const&);

    MCFOLD ::DimensionBrightnessRamp const& $getBrightnessRamp() const;

    MCAPI ::std::vector<::std::string> const $getStructuresFromChunkRegistry(::Vec3 const& location) const;

    MCAPI ::std::optional<::std::string> const $getStructureFromStructureRegistry(::Vec3 const& location) const;

    MCAPI void $startLeaveGame();

    MCAPI void $flushLevelChunkGarbageCollector();

    MCAPI void $updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;

    MCAPI ::std::unique_ptr<::ChunkBuildOrderPolicyBase> $_createChunkBuildOrderPolicy();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSavedData();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
