#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/data/Factory.h"
#include "mc/entity/systems/common/CommandOriginSystem.h"
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/GameType.h"
#include "mc/enums/NodeType.h"
#include "mc/enums/ParticleType.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Level {
public:
    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // NOLINTBEGIN
    MCVAPI void _destroyEffect(class BlockPos const& pos, class Block const& block, int intensityFactor);

    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();

    MCVAPI void _initializeMapDataManager();

    MCVAPI void _subTick();

    MCVAPI class Actor* addAutonomousEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCVAPI void addBlockSourceForValidityTracking(class BlockSource* blockSource);

    MCVAPI void addBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    MCVAPI void addChunkViewTracker(std::weak_ptr<class ChunkViewSource> chunkViewSource);

    MCVAPI class Actor* addDisplayEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCVAPI class Actor* addEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCVAPI class Actor* addGlobalEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCVAPI void addListener(class LevelListener& listener);

    MCVAPI class Particle* addParticle(
        ::ParticleType           id,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    MCVAPI void addParticleEffect(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    MCVAPI void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCVAPI void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCVAPI void
    addTickingAreaList(DimensionType dimensionId, std::shared_ptr<class TickingAreaList> const& tickingAreas);

    MCVAPI void addUser(class OwnerPtr<class EntityContext>);

    MCVAPI class Level* asLevel();

    MCVAPI bool blockNetworkIdsAreHashes();

    MCVAPI void broadcastActorEvent(class Actor& e, ::ActorEvent eventId, int data) const;

    MCVAPI void broadcastLevelEvent(
        ::LevelEvent                               type,
        class CompoundTag const&                   tag,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    MCVAPI void broadcastLevelEvent(
        ::LevelEvent                               type,
        class Vec3 const&                          pos,
        int                                        data,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    MCVAPI void broadcastLocalEvent(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, int data);

    MCVAPI void
    broadcastLocalEvent(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, class Block const& block);

    MCVAPI void broadcastSoundEvent(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI void broadcastSoundEvent(
        class Dimension&                        dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& identifier,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI void broadcastSoundEvent(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Block const&                      block,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI bool canUseSkin(
        class SerializedSkin const&    skin,
        class NetworkIdentifier const& networkIdentifier,
        class mce::UUID const&         clientId,
        struct ActorUniqueID const&    playerId
    ) const;

    MCVAPI bool copyAndLockMap(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const& networkId) const;

    MCVAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const& uuid,
        class BlockPos const&       origin,
        DimensionType               dimension,
        int                         returnScaleLevel
    );

    MCVAPI class MapItemSavedData& createMapSavedData(
        std::vector<struct ActorUniqueID> const& mapIds,
        class BlockPos const&                    origin,
        DimensionType                            dimension,
        int                                      returnScaleLevel
    );

    MCVAPI void createPhotoStorage();

    MCVAPI void decrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    MCVAPI void denyEffect(class BlockSource& region, class Vec3 const& pos);

    MCVAPI bool destroyBlock(class BlockSource& region, class BlockPos const& pos, bool dropResources);

    MCVAPI void digestServerItemComponents(class ItemComponentPacket const& packet);

    MCVAPI void entityChangeDimension(class Actor& entity, DimensionType toId, std::optional<class Vec3> entityPos);

    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID uuid, bool wasInit);

    MCVAPI bool explode(class Explosion& explosion);

    MCVAPI bool explode(
        class BlockSource& region,
        class Actor*       source,
        class Vec3 const&  pos,
        float              explosionRadius,
        bool               fire,
        bool               breaksBlocks,
        float              maxResistance,
        bool               allowUnderwater
    );

    MCVAPI bool extinguishFire(class BlockSource&, class BlockPos const&, uchar, class Actor*);

    MCVAPI class Actor* fetchEntity(struct ActorUniqueID actorId, bool getRemoved) const;

    MCVAPI class StrictEntityContext fetchStrictEntity(struct ActorUniqueID, bool) const;

    MCVAPI std::unique_ptr<class Path>
           findPath(class Actor& from, class Actor& to, class NavigationComponent& navigation);

    MCVAPI std::unique_ptr<class Path>
           findPath(class Actor& from, int xBest, int yBest, int zBest, class NavigationComponent& navigation);

    MCVAPI class Player* findPlayer(std::function<bool(class WeakEntityRef const&)> pred) const;

    MCVAPI class Player* findPlayer(std::function<bool(class Player const&)> pred) const;

    MCVAPI void flushRunTimeLighting();

    MCVAPI void forEachDimension(std::function<bool(class Dimension const&)> callback) const;

    MCVAPI void forEachDimension(std::function<bool(class Dimension&)> callback);

    MCVAPI void forEachPlayer(std::function<bool(class Player const&)> callback) const;

    MCVAPI void forEachPlayer(std::function<bool(class Player&)> callback);

    MCVAPI void forEachUser(std::function<bool(class EntityContext const&)> callback) const;

    MCVAPI void forEachUser(std::function<bool(class EntityContext&)> callback);

    MCVAPI void forceFlushRemovedPlayers();

    MCVAPI void forceRemoveEntity(class Actor& actor);

    MCVAPI void forceRemoveEntityfromWorld(class Actor& actor);

    MCVAPI int getActivePlayerCount() const;

    MCVAPI std::vector<class WeakEntityRef> const& getActiveUsers() const;

    MCVAPI int getActiveUsersCount() const;

    MCVAPI class Bedrock::NonOwnerPointer<class ActorAnimationControllerGroup> getActorAnimationControllerGroup() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> getActorAnimationGroup() const;

    MCVAPI class ActorEventCoordinator& getActorEventCoordinator();

    MCVAPI class ActorFactory& getActorFactory();

    MCVAPI class ActorFactory const& getActorFactory() const;

    MCVAPI class ActorInfoRegistry* getActorInfoRegistry();

    MCVAPI class PropertyGroupManager& getActorPropertyGroup() const;

    MCVAPI struct AdventureSettings& getAdventureSettings();

    MCVAPI struct AdventureSettings const& getAdventureSettings() const;

    MCVAPI class ArmorTrimUnloader* getArmorTrimUnloader();

    MCVAPI class AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const;

    MCVAPI class BehaviorFactory& getBehaviorFactory() const;

    MCVAPI class BiomeComponentFactory& getBiomeComponentFactory();

    MCVAPI class BiomeComponentFactory const& getBiomeComponentFactory() const;

    MCVAPI class BiomeManager& getBiomeManager();

    MCVAPI class BiomeManager const& getBiomeManager() const;

    MCVAPI class BiomeRegistry& getBiomeRegistry();

    MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

    MCVAPI class BlockComponentFactory const& getBlockComponentFactory() const;

    MCVAPI class BlockComponentFactory& getBlockComponentFactory();

    MCVAPI class BlockDefinitionGroup* getBlockDefinitions() const;

    MCVAPI class BlockEventCoordinator& getBlockEventCoordinator();

    MCVAPI class BlockPalette& getBlockPalette();

    MCVAPI class BlockPalette const& getBlockPalette() const;

    MCVAPI class BlockReducer* getBlockReducer() const;

    MCVAPI std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class BossEventSubscriptionManager> getBossEventSubscriptionManager();

    MCVAPI class CameraPresets& getCameraPresets();

    MCVAPI class CameraPresets const& getCameraPresets() const;

    MCVAPI struct PlayerCapabilities::ISharedController const& getCapabilities() const;

    MCVAPI uint getChunkTickRange() const;

    MCVAPI class ChunkTickRangeManager const& getChunkTickRangeManager() const;

    MCVAPI class ClientPlayerEventCoordinator& getClientPlayerEventCoordinator();

    MCVAPI class ResourcePackManager* getClientResourcePackManager() const;

    MCVAPI std::vector<class ChunkPos> const& getClientTickingOffsets() const;

    MCVAPI struct Tick const getCurrentServerTick() const;

    MCVAPI struct Tick const& getCurrentTick() const;

    MCVAPI class Abilities& getDefaultAbilities();

    MCVAPI ::GameType getDefaultGameType() const;

    MCVAPI class PermissionsHandler const& getDefaultPermissions() const;

    MCVAPI class PermissionsHandler& getDefaultPermissions();

    MCVAPI class BlockPos const& getDefaultSpawn() const;

    MCVAPI ::Difficulty getDifficulty() const;

    MCVAPI class WeakRef<class Dimension> getDimension(DimensionType id) const;

    MCVAPI class DimensionConversionData getDimensionConversionData() const;

    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const& getDimensionFactory() const;

    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionFactory();

    MCVAPI class DimensionManager const& getDimensionManager() const;

    MCVAPI class DimensionManager& getDimensionManager();

    MCVAPI bool getDisablePlayerInteractions() const;

    MCVAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    MCVAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities() const;

    MCVAPI class ActorDefinitionGroup* getEntityDefinitions() const;

    MCVAPI class StackRefResult<class EntityRegistry const> getEntityRegistry() const;

    MCVAPI class StackRefResult<class EntityRegistry> getEntityRegistry();

    MCVAPI class EntitySystems& getEntitySystems();

    MCVAPI class IMinecraftEventing& getEventing();

    MCVAPI class FeatureRegistry const& getFeatureRegistry() const;

    MCVAPI class FeatureRegistry& getFeatureRegistry();

    MCVAPI class FeatureTypeFactory const& getFeatureTypeFactory() const;

    MCVAPI class FeatureTypeFactory& getFeatureTypeFactory();

    MCVAPI class GameRules& getGameRules();

    MCVAPI class GameRules const& getGameRules() const;

    MCVAPI class HitResult& getHitResult();

    MCVAPI class TaskGroup& getIOTasksGroup();

    MCVAPI class IRandom& getIRandom() const;

    MCVAPI std::string const& getImmersiveReaderString() const;

    MCVAPI class InternalComponentRegistry& getInternalComponentRegistry() const;

    MCVAPI class ItemEventCoordinator& getItemEventCoordinator();

    MCVAPI class ItemRegistryRef getItemRegistry() const;

    MCVAPI class JigsawStructureRegistry& getJigsawStructureRegistry();

    MCVAPI class JigsawStructureRegistry const& getJigsawStructureRegistry() const;

    MCVAPI bool getLANBroadcast() const;

    MCVAPI bool getLANBroadcastIntent() const;

    MCVAPI DimensionType getLastOrDefaultSpawnDimensionId(DimensionType lastDimensionId) const;

    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    MCVAPI class LevelData const& getLevelData() const;

    MCVAPI class LevelData& getLevelData();

    MCVAPI class WeakRef<class EntityContext> getLevelEntity();

    MCVAPI class LevelEventCoordinator& getLevelEventCoordinator();

    MCVAPI std::string getLevelId() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class LevelSoundManager> getLevelSoundManager();

    MCVAPI class LevelStorage const& getLevelStorage() const;

    MCVAPI class LevelStorage& getLevelStorage();

    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const&
    getLightTextureImageBuilderFactory() const;

    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>&
    getLightTextureImageBuilderFactory();

    MCVAPI class HitResult& getLiquidHitResult();

    MCVAPI class LootTables& getLootTables();

    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const& instance);

    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const* instance);

    MCVAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID uuid);

    MCVAPI class Mob* getMob(struct ActorUniqueID mobId) const;

    MCVAPI bool getMultiplayerGameIntent() const;

    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const;

    MCVAPI int getNetherScale() const;

    MCVAPI struct ActorUniqueID getNewUniqueID();

    MCVAPI class ActorRuntimeID getNextRuntimeID();

    MCVAPI int getNumRemotePlayers();

    MCVAPI class WeakRef<class Dimension> getOrCreateDimension(DimensionType dimensionType);

    MCVAPI class PacketSender* getPacketSender() const;

    MCVAPI class StackRefResult<class PauseManager> getPauseManager();

    MCVAPI class StackRefResult<class PauseManager const> getPauseManager() const;

    MCVAPI class PhotoStorage& getPhotoStorage();

    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    MCVAPI class Player* getPlatformPlayer(std::string const& platformOnlineId) const;

    MCVAPI class Player* getPlayer(class mce::UUID const& uuid) const;

    MCVAPI class Player* getPlayer(struct ActorUniqueID entityID) const;

    MCVAPI class Player* getPlayer(std::string const& name) const;

    MCVAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const& playerId);

    MCVAPI class Player* getPlayerByXuid(std::string const& xuid) const;

    MCVAPI class mce::Color getPlayerColor(class Player const& player) const;

    MCVAPI class Player* getPlayerFromServerId(std::string const& serverId) const;

    MCVAPI std::unordered_map<class mce::UUID, class PlayerListEntry> const& getPlayerList() const;

    MCVAPI std::unordered_map<class mce::UUID, class PlayerListEntry>& getPlayerList();

    MCVAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCVAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const&) const;

    MCVAPI std::string const& getPlayerXUID(class mce::UUID const&) const;

    MCVAPI class PortalForcer& getPortalForcer();

    MCVAPI class PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const;

    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    MCVAPI class Player* getPrimaryLocalPlayer() const;

    MCVAPI class ProjectileFactory& getProjectileFactory() const;

    MCVAPI class Random& getRandom() const;

    MCVAPI class Recipes& getRecipes() const;

    MCVAPI class BlockLegacy const& getRegisteredBorderBlock() const;

    MCVAPI class PlayerEventCoordinator& getRemotePlayerEventCoordinator();

    MCVAPI std::vector<class Actor*> getRuntimeActorList() const;

    MCVAPI class Actor* getRuntimeEntity(class ActorRuntimeID actorId, bool getRemoved) const;

    MCVAPI class Player* getRuntimePlayer(class ActorRuntimeID runtimeId) const;

    MCVAPI class SavedDataStorage& getSavedData();

    MCVAPI class Scoreboard const& getScoreboard() const;

    MCVAPI class Scoreboard& getScoreboard();

    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const;

    MCVAPI class ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator();

    MCVAPI class ScriptingEventCoordinator& getScriptingEventCoordinator();

    MCVAPI uint getSeed();

    MCVAPI class ServerNetworkEventCoordinator& getServerNetworkEventCoordinator();

    MCVAPI class ServerPlayerEventCoordinator& getServerPlayerEventCoordinator();

    MCVAPI class ResourcePackManager* getServerResourcePackManager() const;

    MCVAPI class BlockPos const& getSharedSpawnPos() const;

    MCVAPI bool getSimPaused();

    MCVAPI struct PlayerSleepStatus getSleepStatus() const;

    MCVAPI std::vector<class ChunkPos> getSortedPositionsFromClientOffsets(std::vector<class ChunkPos> const&) const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> getSoundPlayer() const;

    MCVAPI class Spawner& getSpawner() const;

    MCVAPI float getSpecialMultiplier(DimensionType dimensionType) const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> const getStructureManager() const;

    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager();

    MCVAPI class SubChunkRequestManager* getSubChunkRequestManager();

    MCVAPI class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const;

    MCVAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    MCVAPI class TaskGroup& getSyncTasksGroup();

    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&
    getTagRegistry();

    MCVAPI bool getTearingDown() const;

    MCVAPI class Random& getThreadRandom() const;

    MCVAPI class TickingAreasManager& getTickingAreasMgr();

    MCVAPI std::vector<class ChunkPos> const& getTickingOffsets() const;

    MCVAPI int getTime() const;

    MCVAPI class TradeTables* getTradeTables();

    MCVAPI std::weak_ptr<class TrimMaterialRegistry> getTrimMaterialRegistry();

    MCVAPI std::weak_ptr<class TrimMaterialRegistry const> getTrimMaterialRegistry() const;

    MCVAPI std::weak_ptr<class TrimPatternRegistry> getTrimPatternRegistry();

    MCVAPI std::weak_ptr<class TrimPatternRegistry const> getTrimPatternRegistry() const;

    MCVAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry();

    MCVAPI int getUserCount() const;

    MCVAPI std::vector<class OwnerPtr<class EntityContext>> const& getUsers() const;

    MCVAPI class IWorldRegistriesProvider& getWorldRegistriesProvider();

    MCVAPI class IWorldRegistriesProvider const& getWorldRegistriesProvider() const;

    MCVAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCVAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    MCVAPI void handleLevelEvent(::LevelEvent type, class CompoundTag const& data);

    MCVAPI void handleLevelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    MCVAPI void handleStopAllSounds();

    MCVAPI void handleStopSoundEvent(std::string const& name);

    MCVAPI bool hasCommandsEnabled() const;

    MCVAPI bool hasLevelStorage() const;

    MCVAPI bool hasPlatformBroadcast() const;

    MCVAPI bool hasPlatformBroadcastIntent() const;

    MCVAPI bool hasStartWithMapEnabled() const;

    MCVAPI bool hasXBLBroadcast() const;

    MCVAPI bool hasXBLBroadcastIntent() const;

    MCVAPI void incrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    MCVAPI bool initialize(
        std::string const&         levelName,
        class LevelSettings const& levelSettings,
        class LevelData*           levelData,
        class Experiments const&   experiments,
        std::string const*         levelId
    );

    MCVAPI void initializeBlockDefinitionGroup();

    MCVAPI bool isClientSide() const;

    MCVAPI bool isClientSideGenerationEnabled();

    MCVAPI bool isEditorWorld() const;

    MCVAPI bool isEdu() const;

    MCVAPI bool isExporting() const;

    MCVAPI bool isLeaveGameDone();

    MCVAPI bool isMultiplayerGame() const;

    MCVAPI bool isPlayerSuspended(class Player& player) const;

    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtr<class EntityContext>);

    MCVAPI void loadBlockDefinitionGroup(class Experiments const& experiments);

    MCVAPI void loadFunctionManager();

    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const& packet);

    MCVAPI void onChunkDiscarded(class LevelChunk& lc);

    MCVAPI void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI void onChunkReload(struct Bounds const& bound);

    MCVAPI void onChunkReloaded(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI void onPlayerDeath(class Player& player, class ActorDamageSource const& source);

    MCVAPI void onSourceCreated(class BlockSource& source);

    MCVAPI void onSourceDestroyed(class BlockSource& source);

    MCVAPI void onSubChunkLoaded(
        class ChunkSource& source,
        class LevelChunk&  lc,
        short              absoluteSubChunkIndex,
        bool               subChunkVisibilityChanged
    );

    MCVAPI void pauseAndFlushTaskGroups();

    MCVAPI void playSound(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    MCVAPI void playSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, float volume, float pitch);

    MCVAPI void playSound(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI void playSound(
        DimensionType                           dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI void playSound(
        class IConstBlockSource const&          region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCVAPI void potionSplash(class Vec3 const& pos, class mce::Color const& color, bool instantaneousEffect);

    MCVAPI void queueEntityDestruction(class OwnerPtr<class EntityContext>);

    MCVAPI void registerTemporaryPointer(class _TickPtr& ptr);

    MCVAPI class OwnerPtr<class EntityContext> removeActorAndTakeEntity(class WeakEntityRef weakEntity);

    MCVAPI class OwnerPtr<class EntityContext> removeActorFromWorldAndTakeEntity(class WeakEntityRef weakEntity);

    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource* blockSource);

    MCVAPI void removeDisplayEntity(class WeakEntityRef);

    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class Actor& actor);

    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef weakEntity);

    MCVAPI void removeListener(class LevelListener& listener);

    MCVAPI void requestMapInfo(struct ActorUniqueID uuid, bool forceUpdate);

    MCVAPI void requestPlayerChangeDimension(class Player&, class ChangeDimensionRequest&&);

    MCVAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCVAPI void resumePlayer(class Player& player);

    MCVAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCVAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    MCVAPI void save();

    MCVAPI void saveGameData();

    MCVAPI void saveLevelData();

    MCVAPI void sendAllPlayerAbilities(class Player const& playerReference);

    MCVAPI void sendServerLegacyParticle(::ParticleType id, class Vec3 const& pos, class Vec3 const& dir, int data);

    MCVAPI void setCommandsEnabled(bool commandsEnabled);

    MCVAPI void setDefaultGameType(::GameType gameType);

    MCVAPI void setDefaultSpawn(class BlockPos const& spawnPos);

    MCVAPI void setDifficulty(::Difficulty difficulty);

    MCVAPI void setDisablePlayerInteractions(bool disable);

    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings settings);

    MCVAPI void setFinishedInitializing();

    MCVAPI void setHasLockedBehaviorPack(bool hasLocked);

    MCVAPI void setHasLockedResourcePack(bool hasLocked);

    MCVAPI void setImmersiveReaderString(std::string newString);

    MCVAPI void setIsExporting(bool IsExporting);

    MCVAPI void setLANBroadcast(bool broadcast);

    MCVAPI void setLANBroadcastIntent(bool broadcast);

    MCVAPI void setLevelId(std::string LevelId);

    MCVAPI void setMsaGamertagsOnly(bool msaGamertagsOnly);

    MCVAPI void setMultiplayerGame(bool multiplayerGame);

    MCVAPI void setMultiplayerGameIntent(bool multiplayerGame);

    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback> val);

    MCVAPI void setPacketSender(class PacketSender* val);

    MCVAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCVAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCVAPI void setPlayerAbilities(struct ActorUniqueID const& playerId, class LayeredAbilities const& abilities);

    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    MCVAPI void setSimPaused(bool value);

    MCVAPI void setSleepStatus(struct PlayerSleepStatus const& status);

    MCVAPI void setTime(int time);

    MCVAPI void setWorldTemplateOptionsUnlocked();

    MCVAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCVAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCVAPI void
    spawnParticleEffect(std::string const& effectName, class Vec3 const& spawnLocation, class Dimension* dimension);

    MCVAPI void startLeaveGame();

    MCVAPI void suspendAndSave();

    MCVAPI void suspendPlayer(class Player& player);

    MCVAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef weakEntity, class LevelChunk& lc);

    MCVAPI void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    MCVAPI void tick();

    MCVAPI void tickEntities();

    MCVAPI void tickEntitySystems();

    MCVAPI class Scoreboard* tryGetScoreboard();

    MCVAPI void unregisterTemporaryPointer(class _TickPtr& ptr);

    MCVAPI void updateSleepingPlayerList();

    MCVAPI void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCVAPI void upgradeStorageVersion(::StorageVersion v);

    MCVAPI bool use3DBiomeMaps() const;

    MCVAPI bool useMsaGamertagsOnly() const;

    MCVAPI ~Level();

    MCAPI
    Level(Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const&, class OwnerPtr<class LevelStorage>, class IMinecraftEventing&, bool, ::SubClientId, class Scheduler&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const&, class WeakRef<class EntityContext>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, std::weak_ptr<class BlockTypeRegistry>, bool, bool, struct NetworkPermissions const&, std::optional<class DimensionDefinitionGroup>);

    MCAPI bool canChangeDimension(class Actor& actor, DimensionType toId);

    MCAPI void earlyShutdownMainthread();

    MCAPI gsl::not_null<class StackRefResult<class ActorManager>> getActorManager();

    MCAPI class AutonomousActorManager const& getAutonomousActorManager() const;

    MCAPI gsl::not_null<class StackRefResult<class EventCoordinatorManager>> getEventCoordinatorManager();

    MCAPI class LevelSeed64 getLevelSeed64() const;

    MCAPI class NpcDialogueStorage* getNpcDialogueStorage();

    MCAPI class ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    MCAPI double getTickDeltaTime() const;

    MCAPI ::NodeType isFree(
        class NavigationComponent& navigation,
        class Actor&               entity,
        class BlockPos const&      lastPathPos,
        class BlockPos const&      testPos,
        class BlockPos const&      size,
        ::CanJumpIntoNode          jumpIntoNode
    );

    MCAPI void setPerformanceTelemetryPeriodicCallback(std::function<void()> callback);

    MCAPI void transferActorToOwnedEntityLimbo(class Player const& player, class Actor& actor);

    MCAPI static uint createRandomSeed();

    MCAPI static bool isUsableLevel(class ILevel const& level);

    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const&);

    MCAPI static char const IS_SLEEPING_POSSIBLE[];

    MCAPI static char const OVERWORLD_PLAYER_COUNT_TAG[];

    MCAPI static char const SLEEPING_PLAYER_COUNT_TAG[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class GameplayUserManager& _getGameplayUserManager();

    MCAPI class GameplayUserManager const& _getGameplayUserManager() const;

    MCAPI gsl::not_null<class StackRefResult<class GameplayUserManager>> _getGameplayUserManagerStackRef();

    MCAPI class ILevelChunkEventManagerConnector& _getLevelChunkEventManagerConnector();

    MCAPI class LevelStorageManager* _getLevelStorageManager();

    MCAPI class IPlayerDimensionTransferConnector& _getPlayerDimensionTransferConnector();

    MCAPI class PlayerListManager& _getPlayerListManager();

    MCAPI class TickTimeManager& _getTickTimeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class OwnerPtr<class PhotoManager> _createPhotoManager();

    MCAPI void _initializeActorManager();

    MCAPI void _initializeBiomeManager();

    MCAPI void _initializeBlockDestroyer();

    MCAPI void _initializeEventCoordinatorManager();

    MCAPI void _initializeGameplayUserManager();

    MCAPI void _initializeLevelChunkEventManager();

    MCAPI void _initializeLevelChunkSaveManager();

    MCAPI void _initializeLevelEventManager();

    MCAPI void _initializeLevelStorageManager();

    MCAPI void _initializeParticleProvider();

    MCAPI void _onAddBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    MCAPI void
    _onAddTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    MCAPI void
    _onAddTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onChunkDiscarded(class LevelChunk&);

    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk&, int);

    MCAPI void _onChunkReloaded(class ChunkSource&, class LevelChunk&);

    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    MCAPI void _onLevelEventCompoundTag(::LevelEvent, class CompoundTag const&);

    MCAPI void _onLevelEventData(::LevelEvent, class Vec3 const&, int);

    MCAPI void _onPictureTaken(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    MCAPI void _onSaveLevelData(class LevelStorage& levelStorage);

    MCAPI void _onSendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    MCAPI static std::unique_ptr<class LevelStorageManager>
    _createLevelStorageManager(class OwnerPtr<class LevelStorage>, class Scheduler&, class IMinecraftEventing&);

    // NOLINTEND
};
