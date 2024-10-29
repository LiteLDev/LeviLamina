#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/storage/LevelData.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/block/LevelEvent.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class BlockSource;
class Dimension;
class Player;
class Actor;
class BiomeRegistry;
class ServerLevel;

class Level : public ILevel, public BlockSourceListener, public IWorldRegistriesProvider {
public:
    [[nodiscard]] ServerLevel& asServer() { return *reinterpret_cast<ServerLevel*>(this); }

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

    MCVAPI class Actor* addAutonomousEntity(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

    MCVAPI void addBlockSourceForValidityTracking(class BlockSource* region);

    MCVAPI void addBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    MCVAPI void addChunkViewTracker(std::weak_ptr<class ChunkViewSource> chunkViewSource);

    MCVAPI class Actor* addDisplayEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCVAPI class Actor* addEntity(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

    MCVAPI class Actor* addGlobalEntity(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

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

    MCVAPI void addUser(class OwnerPtr<class EntityContext> userEntity);

    MCVAPI class Level* asLevel();

    MCVAPI bool blockNetworkIdsAreHashes();

    MCVAPI void broadcastActorEvent(class Actor& actor, ::ActorEvent eventId, int data) const;

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

    MCVAPI bool extinguishFire(class BlockSource& region, class BlockPos const& pos, uchar face, class Actor* source);

    MCVAPI class Actor* fetchEntity(struct ActorUniqueID, bool getRemoved = false) const;

    MCVAPI class StrictEntityContext fetchStrictEntity(struct ActorUniqueID actorId, bool getRemoved) const;

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

    MCVAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const& uuid) const;

    MCVAPI std::string const& getPlayerXUID(class mce::UUID const& uuid) const;

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

    MCVAPI class Actor* getRuntimeEntity(class ActorRuntimeID, bool getRemoved = false) const;

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

    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtr<class EntityContext> entity);

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

    MCVAPI void queueEntityDestruction(class OwnerPtr<class EntityContext> entity);

    MCVAPI void registerTemporaryPointer(class _TickPtr& ptr);

    MCVAPI class OwnerPtr<class EntityContext> removeActorAndTakeEntity(class WeakEntityRef entityRef);

    MCVAPI class OwnerPtr<class EntityContext> removeActorFromWorldAndTakeEntity(class WeakEntityRef entityRef);

    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource* region);

    MCVAPI void removeDisplayEntity(class WeakEntityRef);

    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class Actor& actor);

    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef entityRef);

    MCVAPI void removeListener(class LevelListener& listener);

    MCVAPI void requestMapInfo(struct ActorUniqueID uuid, bool forceUpdate);

    MCVAPI void requestPlayerChangeDimension(class Player& player, class ChangeDimensionRequest&& changeRequest);

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

    MCVAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef entityRef, class LevelChunk& lc);

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

    MCAPI Level(
        Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const& soundPlayer,
        class OwnerPtr<class LevelStorage>                             levelStorage,
        class IMinecraftEventing&                                      eventing,
        bool                                                           isClientSide,
        ::SubClientId                                                  subClientId,
        class Scheduler&                                               callbackContext,
        Bedrock::NotNullNonOwnerPtr<class StructureManager>            structureManager,
        class ResourcePackManager&                                     addOnResourcePackManager,
        Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const& entityRegistryOwner,
        class WeakRef<class EntityContext>                             levelEntity,
        std::unique_ptr<class BlockComponentFactory>                   blockComponentFactory,
        std::unique_ptr<class BlockDefinitionGroup>                    blockDefinitionGroup,
        class ItemRegistryRef                                          itemRegistry,
        std::weak_ptr<class BlockTypeRegistry>                         blockRegistry,
        bool                                                           clientSideChunkGenerationEnabled,
        bool                                                           blockNetworkIdsAreHashes,
        struct NetworkPermissions const&                               networkPermissions,
        std::optional<class DimensionDefinitionGroup>                  dimensionDefinitionGroup
    );

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

    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const& seedString);

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

    MCAPI void _onAddBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    MCAPI void _onAddTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void _onAddTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onChunkDiscarded(class LevelChunk& levelChunk);

    MCAPI void _onChunkLoaded(class ChunkSource& chunkSource, class LevelChunk& levelChunk, int);

    MCAPI void _onChunkReloaded(class ChunkSource& chunkSource, class LevelChunk& levelChunk);

    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    MCAPI void _onLevelEventCompoundTag(::LevelEvent type, class CompoundTag const& data);

    MCAPI void _onLevelEventData(::LevelEvent type, class Vec3 const& pos, int data);

    MCAPI void _onPictureTaken(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    MCAPI void _onSaveLevelData(class LevelStorage& levelStorage);

    MCAPI void _onSendServerLegacyParticle(::ParticleType id, class Vec3 const& pos, class Vec3 const& dir, int data);

    MCAPI static std::unique_ptr<class LevelStorageManager> _createLevelStorageManager(
        class OwnerPtr<class LevelStorage> levelStorage,
        class Scheduler&                   scheduler,
        class IMinecraftEventing&          eventing
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBlockSourceListener();

    MCAPI static void** vftableForILevel();

    MCAPI static void** vftableForIWorldRegistriesProvider();

    MCAPI void* ctor$(
        Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const& soundPlayer,
        class OwnerPtr<class LevelStorage>                             levelStorage,
        class IMinecraftEventing&                                      eventing,
        bool                                                           isClientSide,
        ::SubClientId                                                  subClientId,
        class Scheduler&                                               callbackContext,
        Bedrock::NotNullNonOwnerPtr<class StructureManager>            structureManager,
        class ResourcePackManager&                                     addOnResourcePackManager,
        Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const& entityRegistryOwner,
        class WeakRef<class EntityContext>                             levelEntity,
        std::unique_ptr<class BlockComponentFactory>                   blockComponentFactory,
        std::unique_ptr<class BlockDefinitionGroup>                    blockDefinitionGroup,
        class ItemRegistryRef                                          itemRegistry,
        std::weak_ptr<class BlockTypeRegistry>                         blockRegistry,
        bool                                                           clientSideChunkGenerationEnabled,
        bool                                                           blockNetworkIdsAreHashes,
        struct NetworkPermissions const&                               networkPermissions,
        std::optional<class DimensionDefinitionGroup>                  dimensionDefinitionGroup
    );

    MCAPI void dtor$();

    MCAPI void _destroyEffect$(class BlockPos const& pos, class Block const& block, int intensityFactor);

    MCAPI class PlayerDeathManager* _getPlayerDeathManager$();

    MCAPI void _initializeMapDataManager$();

    MCAPI void _subTick$();

    MCAPI class Actor* addAutonomousEntity$(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

    MCAPI void addBlockSourceForValidityTracking$(class BlockSource* region);

    MCAPI void addBreakingItemParticleEffect$(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    MCAPI void addChunkViewTracker$(std::weak_ptr<class ChunkViewSource> chunkViewSource);

    MCAPI class Actor* addDisplayEntity$(class BlockSource&, class OwnerPtr<class EntityContext>);

    MCAPI class Actor* addEntity$(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

    MCAPI class Actor* addGlobalEntity$(class BlockSource& region, class OwnerPtr<class EntityContext> entity);

    MCAPI void addListener$(class LevelListener& listener);

    MCAPI class Particle* addParticle$(
        ::ParticleType           id,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    MCAPI void addParticleEffect$(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    MCAPI void addTerrainParticleEffect$(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void addTerrainSlideEffect$(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void
    addTickingAreaList$(DimensionType dimensionId, std::shared_ptr<class TickingAreaList> const& tickingAreas);

    MCAPI void addUser$(class OwnerPtr<class EntityContext> userEntity);

    MCAPI class Level* asLevel$();

    MCAPI bool blockNetworkIdsAreHashes$();

    MCAPI void broadcastActorEvent$(class Actor& actor, ::ActorEvent eventId, int data) const;

    MCAPI void broadcastLevelEvent$(
        ::LevelEvent                               type,
        class CompoundTag const&                   tag,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    MCAPI void broadcastLevelEvent$(
        ::LevelEvent                               type,
        class Vec3 const&                          pos,
        int                                        data,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    MCAPI void broadcastLocalEvent$(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, int data);

    MCAPI void
    broadcastLocalEvent$(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, class Block const& block);

    MCAPI void broadcastSoundEvent$(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void broadcastSoundEvent$(
        class Dimension&                        dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& identifier,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void broadcastSoundEvent$(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Block const&                      block,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI bool canUseSkin$(
        class SerializedSkin const&    skin,
        class NetworkIdentifier const& networkIdentifier,
        class mce::UUID const&         clientId,
        struct ActorUniqueID const&    playerId
    ) const;

    MCAPI bool copyAndLockMap$(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    MCAPI int countUsersWithMatchingNetworkId$(class NetworkIdentifier const& networkId) const;

    MCAPI class MapItemSavedData& createMapSavedData$(
        struct ActorUniqueID const& uuid,
        class BlockPos const&       origin,
        DimensionType               dimension,
        int                         returnScaleLevel
    );

    MCAPI class MapItemSavedData& createMapSavedData$(
        std::vector<struct ActorUniqueID> const& mapIds,
        class BlockPos const&                    origin,
        DimensionType                            dimension,
        int                                      returnScaleLevel
    );

    MCAPI void createPhotoStorage$();

    MCAPI void decrementTagCache$(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    MCAPI void denyEffect$(class BlockSource& region, class Vec3 const& pos);

    MCAPI bool destroyBlock$(class BlockSource& region, class BlockPos const& pos, bool dropResources);

    MCAPI void digestServerItemComponents$(class ItemComponentPacket const& packet);

    MCAPI void entityChangeDimension$(class Actor& entity, DimensionType toId, std::optional<class Vec3> entityPos);

    MCAPI struct ActorUniqueID expandMapByID$(struct ActorUniqueID uuid, bool wasInit);

    MCAPI bool explode$(class Explosion& explosion);

    MCAPI bool explode$(
        class BlockSource& region,
        class Actor*       source,
        class Vec3 const&  pos,
        float              explosionRadius,
        bool               fire,
        bool               breaksBlocks,
        float              maxResistance,
        bool               allowUnderwater
    );

    MCAPI bool extinguishFire$(class BlockSource& region, class BlockPos const& pos, uchar face, class Actor* source);

    MCAPI class Actor* fetchEntity$(struct ActorUniqueID actorId, bool getRemoved) const;

    MCAPI class StrictEntityContext fetchStrictEntity$(struct ActorUniqueID actorId, bool getRemoved) const;

    MCAPI std::unique_ptr<class Path>
          findPath$(class Actor& from, class Actor& to, class NavigationComponent& navigation);

    MCAPI std::unique_ptr<class Path>
          findPath$(class Actor& from, int xBest, int yBest, int zBest, class NavigationComponent& navigation);

    MCAPI class Player* findPlayer$(std::function<bool(class WeakEntityRef const&)> pred) const;

    MCAPI class Player* findPlayer$(std::function<bool(class Player const&)> pred) const;

    MCAPI void flushRunTimeLighting$();

    MCAPI void forEachDimension$(std::function<bool(class Dimension const&)> callback) const;

    MCAPI void forEachDimension$(std::function<bool(class Dimension&)> callback);

    MCAPI void forEachPlayer$(std::function<bool(class Player const&)> callback) const;

    MCAPI void forEachPlayer$(std::function<bool(class Player&)> callback);

    MCAPI void forEachUser$(std::function<bool(class EntityContext const&)> callback) const;

    MCAPI void forEachUser$(std::function<bool(class EntityContext&)> callback);

    MCAPI void forceFlushRemovedPlayers$();

    MCAPI void forceRemoveEntity$(class Actor& actor);

    MCAPI void forceRemoveEntityfromWorld$(class Actor& actor);

    MCAPI int getActivePlayerCount$() const;

    MCAPI std::vector<class WeakEntityRef> const& getActiveUsers$() const;

    MCAPI int getActiveUsersCount$() const;

    MCAPI class Bedrock::NonOwnerPointer<class ActorAnimationControllerGroup> getActorAnimationControllerGroup$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> getActorAnimationGroup$() const;

    MCAPI class ActorEventCoordinator& getActorEventCoordinator$();

    MCAPI class ActorFactory& getActorFactory$();

    MCAPI class ActorFactory const& getActorFactory$() const;

    MCAPI class ActorInfoRegistry* getActorInfoRegistry$();

    MCAPI class PropertyGroupManager& getActorPropertyGroup$() const;

    MCAPI struct AdventureSettings& getAdventureSettings$();

    MCAPI struct AdventureSettings const& getAdventureSettings$() const;

    MCAPI class ArmorTrimUnloader* getArmorTrimUnloader$();

    MCAPI class AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup$() const;

    MCAPI class BehaviorFactory& getBehaviorFactory$() const;

    MCAPI class BiomeComponentFactory& getBiomeComponentFactory$();

    MCAPI class BiomeComponentFactory const& getBiomeComponentFactory$() const;

    MCAPI class BiomeManager& getBiomeManager$();

    MCAPI class BiomeManager const& getBiomeManager$() const;

    MCAPI class BiomeRegistry& getBiomeRegistry$();

    MCAPI class BiomeRegistry const& getBiomeRegistry$() const;

    MCAPI class BlockComponentFactory const& getBlockComponentFactory$() const;

    MCAPI class BlockComponentFactory& getBlockComponentFactory$();

    MCAPI class BlockDefinitionGroup* getBlockDefinitions$() const;

    MCAPI class BlockEventCoordinator& getBlockEventCoordinator$();

    MCAPI class BlockPalette& getBlockPalette$();

    MCAPI class BlockPalette const& getBlockPalette$() const;

    MCAPI class BlockReducer* getBlockReducer$() const;

    MCAPI std::weak_ptr<class BlockTypeRegistry> getBlockRegistry$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class BossEventSubscriptionManager> getBossEventSubscriptionManager$();

    MCAPI class CameraPresets& getCameraPresets$();

    MCAPI class CameraPresets const& getCameraPresets$() const;

    MCAPI struct PlayerCapabilities::ISharedController const& getCapabilities$() const;

    MCAPI uint getChunkTickRange$() const;

    MCAPI class ChunkTickRangeManager const& getChunkTickRangeManager$() const;

    MCAPI class ClientPlayerEventCoordinator& getClientPlayerEventCoordinator$();

    MCAPI class ResourcePackManager* getClientResourcePackManager$() const;

    MCAPI std::vector<class ChunkPos> const& getClientTickingOffsets$() const;

    MCAPI struct Tick const getCurrentServerTick$() const;

    MCAPI struct Tick const& getCurrentTick$() const;

    MCAPI class Abilities& getDefaultAbilities$();

    MCAPI ::GameType getDefaultGameType$() const;

    MCAPI class PermissionsHandler const& getDefaultPermissions$() const;

    MCAPI class PermissionsHandler& getDefaultPermissions$();

    MCAPI class BlockPos const& getDefaultSpawn$() const;

    MCAPI ::Difficulty getDifficulty$() const;

    MCAPI class WeakRef<class Dimension> getDimension$(DimensionType id) const;

    MCAPI class DimensionConversionData getDimensionConversionData$() const;

    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const& getDimensionFactory$() const;

    MCAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionFactory$();

    MCAPI class DimensionManager const& getDimensionManager$() const;

    MCAPI class DimensionManager& getDimensionManager$();

    MCAPI bool getDisablePlayerInteractions$() const;

    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings$() const;

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities$() const;

    MCAPI class ActorDefinitionGroup* getEntityDefinitions$() const;

    MCAPI class StackRefResult<class EntityRegistry const> getEntityRegistry$() const;

    MCAPI class StackRefResult<class EntityRegistry> getEntityRegistry$();

    MCAPI class EntitySystems& getEntitySystems$();

    MCAPI class IMinecraftEventing& getEventing$();

    MCAPI class FeatureRegistry const& getFeatureRegistry$() const;

    MCAPI class FeatureRegistry& getFeatureRegistry$();

    MCAPI class FeatureTypeFactory const& getFeatureTypeFactory$() const;

    MCAPI class FeatureTypeFactory& getFeatureTypeFactory$();

    MCAPI class GameRules& getGameRules$();

    MCAPI class GameRules const& getGameRules$() const;

    MCAPI class HitResult& getHitResult$();

    MCAPI class TaskGroup& getIOTasksGroup$();

    MCAPI class IRandom& getIRandom$() const;

    MCAPI std::string const& getImmersiveReaderString$() const;

    MCAPI class InternalComponentRegistry& getInternalComponentRegistry$() const;

    MCAPI class ItemEventCoordinator& getItemEventCoordinator$();

    MCAPI class ItemRegistryRef getItemRegistry$() const;

    MCAPI class JigsawStructureRegistry& getJigsawStructureRegistry$();

    MCAPI class JigsawStructureRegistry const& getJigsawStructureRegistry$() const;

    MCAPI bool getLANBroadcast$() const;

    MCAPI bool getLANBroadcastIntent$() const;

    MCAPI DimensionType getLastOrDefaultSpawnDimensionId$(DimensionType lastDimensionId) const;

    MCAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager$();

    MCAPI class LevelData const& getLevelData$() const;

    MCAPI class LevelData& getLevelData$();

    MCAPI class WeakRef<class EntityContext> getLevelEntity$();

    MCAPI class LevelEventCoordinator& getLevelEventCoordinator$();

    MCAPI std::string getLevelId$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class LevelSoundManager> getLevelSoundManager$();

    MCAPI class LevelStorage const& getLevelStorage$() const;

    MCAPI class LevelStorage& getLevelStorage$();

    MCAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const&
    getLightTextureImageBuilderFactory$() const;

    MCAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>&
    getLightTextureImageBuilderFactory$();

    MCAPI class HitResult& getLiquidHitResult$();

    MCAPI class LootTables& getLootTables$();

    MCAPI class MapItemSavedData* getMapSavedData$(class CompoundTag const& instance);

    MCAPI class MapItemSavedData* getMapSavedData$(class CompoundTag const* instance);

    MCAPI class MapItemSavedData* getMapSavedData$(struct ActorUniqueID uuid);

    MCAPI class Mob* getMob$(struct ActorUniqueID mobId) const;

    MCAPI bool getMultiplayerGameIntent$() const;

    MCAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback$() const;

    MCAPI int getNetherScale$() const;

    MCAPI struct ActorUniqueID getNewUniqueID$();

    MCAPI class ActorRuntimeID getNextRuntimeID$();

    MCAPI int getNumRemotePlayers$();

    MCAPI class WeakRef<class Dimension> getOrCreateDimension$(DimensionType dimensionType);

    MCAPI class PacketSender* getPacketSender$() const;

    MCAPI class StackRefResult<class PauseManager> getPauseManager$();

    MCAPI class StackRefResult<class PauseManager const> getPauseManager$() const;

    MCAPI class PhotoStorage& getPhotoStorage$();

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent$() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastMode$() const;

    MCAPI class Player* getPlatformPlayer$(std::string const& platformOnlineId) const;

    MCAPI class Player* getPlayer$(class mce::UUID const& uuid) const;

    MCAPI class Player* getPlayer$(struct ActorUniqueID entityID) const;

    MCAPI class Player* getPlayer$(std::string const& name) const;

    MCAPI class LayeredAbilities* getPlayerAbilities$(struct ActorUniqueID const& playerId);

    MCAPI class Player* getPlayerByXuid$(std::string const& xuid) const;

    MCAPI class mce::Color getPlayerColor$(class Player const& player) const;

    MCAPI class Player* getPlayerFromServerId$(std::string const& serverId) const;

    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry> const& getPlayerList$() const;

    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry>& getPlayerList$();

    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings$() const;

    MCAPI std::string const& getPlayerPlatformOnlineId$(class mce::UUID const& uuid) const;

    MCAPI std::string const& getPlayerXUID$(class mce::UUID const& uuid) const;

    MCAPI class PortalForcer& getPortalForcer$();

    MCAPI class PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient$() const;

    MCAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer$() const;

    MCAPI class Player* getPrimaryLocalPlayer$() const;

    MCAPI class ProjectileFactory& getProjectileFactory$() const;

    MCAPI class Random& getRandom$() const;

    MCAPI class Recipes& getRecipes$() const;

    MCAPI class BlockLegacy const& getRegisteredBorderBlock$() const;

    MCAPI class PlayerEventCoordinator& getRemotePlayerEventCoordinator$();

    MCAPI std::vector<class Actor*> getRuntimeActorList$() const;

    MCAPI class Actor* getRuntimeEntity$(class ActorRuntimeID actorId, bool getRemoved) const;

    MCAPI class Player* getRuntimePlayer$(class ActorRuntimeID runtimeId) const;

    MCAPI class SavedDataStorage& getSavedData$();

    MCAPI class Scoreboard const& getScoreboard$() const;

    MCAPI class Scoreboard& getScoreboard$();

    MCAPI class Core::PathBuffer<std::string> getScreenshotsFolder$() const;

    MCAPI class ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator$();

    MCAPI class ScriptingEventCoordinator& getScriptingEventCoordinator$();

    MCAPI uint getSeed$();

    MCAPI class ServerNetworkEventCoordinator& getServerNetworkEventCoordinator$();

    MCAPI class ServerPlayerEventCoordinator& getServerPlayerEventCoordinator$();

    MCAPI class ResourcePackManager* getServerResourcePackManager$() const;

    MCAPI class BlockPos const& getSharedSpawnPos$() const;

    MCAPI bool getSimPaused$();

    MCAPI struct PlayerSleepStatus getSleepStatus$() const;

    MCAPI std::vector<class ChunkPos> getSortedPositionsFromClientOffsets$(std::vector<class ChunkPos> const&) const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> getSoundPlayer$() const;

    MCAPI class Spawner& getSpawner$() const;

    MCAPI float getSpecialMultiplier$(DimensionType dimensionType) const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> const getStructureManager$() const;

    MCAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager$();

    MCAPI class SubChunkRequestManager* getSubChunkRequestManager$();

    MCAPI class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry$() const;

    MCAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry$();

    MCAPI class TaskGroup& getSyncTasksGroup$();

    MCAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&
    getTagRegistry$();

    MCAPI bool getTearingDown$() const;

    MCAPI class Random& getThreadRandom$() const;

    MCAPI class TickingAreasManager& getTickingAreasMgr$();

    MCAPI std::vector<class ChunkPos> const& getTickingOffsets$() const;

    MCAPI int getTime$() const;

    MCAPI class TradeTables* getTradeTables$();

    MCAPI std::weak_ptr<class TrimMaterialRegistry> getTrimMaterialRegistry$();

    MCAPI std::weak_ptr<class TrimMaterialRegistry const> getTrimMaterialRegistry$() const;

    MCAPI std::weak_ptr<class TrimPatternRegistry> getTrimPatternRegistry$();

    MCAPI std::weak_ptr<class TrimPatternRegistry const> getTrimPatternRegistry$() const;

    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry$();

    MCAPI int getUserCount$() const;

    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getUsers$() const;

    MCAPI class IWorldRegistriesProvider& getWorldRegistriesProvider$();

    MCAPI class IWorldRegistriesProvider const& getWorldRegistriesProvider$() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent$() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastMode$() const;

    MCAPI void handleLevelEvent$(::LevelEvent type, class CompoundTag const& data);

    MCAPI void handleLevelEvent$(::LevelEvent type, class Vec3 const& pos, int data);

    MCAPI void handleStopAllSounds$();

    MCAPI void handleStopSoundEvent$(std::string const& name);

    MCAPI bool hasCommandsEnabled$() const;

    MCAPI bool hasLevelStorage$() const;

    MCAPI bool hasPlatformBroadcast$() const;

    MCAPI bool hasPlatformBroadcastIntent$() const;

    MCAPI bool hasStartWithMapEnabled$() const;

    MCAPI bool hasXBLBroadcast$() const;

    MCAPI bool hasXBLBroadcastIntent$() const;

    MCAPI void incrementTagCache$(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    MCAPI bool initialize$(
        std::string const&         levelName,
        class LevelSettings const& levelSettings,
        class LevelData*           levelData,
        class Experiments const&   experiments,
        std::string const*         levelId
    );

    MCAPI void initializeBlockDefinitionGroup$();

    MCAPI bool isClientSide$() const;

    MCAPI bool isClientSideGenerationEnabled$();

    MCAPI bool isEditorWorld$() const;

    MCAPI bool isEdu$() const;

    MCAPI bool isExporting$() const;

    MCAPI bool isLeaveGameDone$();

    MCAPI bool isMultiplayerGame$() const;

    MCAPI bool isPlayerSuspended$(class Player& player) const;

    MCAPI void levelCleanupQueueEntityRemoval$(class OwnerPtr<class EntityContext> entity);

    MCAPI void loadBlockDefinitionGroup$(class Experiments const& experiments);

    MCAPI void loadFunctionManager$();

    MCAPI void notifySubChunkRequestManager$(class SubChunkPacket const& packet);

    MCAPI void onChunkDiscarded$(class LevelChunk& lc);

    MCAPI void onChunkLoaded$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI void onChunkReload$(struct Bounds const& bound);

    MCAPI void onChunkReloaded$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI void onPlayerDeath$(class Player& player, class ActorDamageSource const& source);

    MCAPI void onSourceCreated$(class BlockSource& source);

    MCAPI void onSourceDestroyed$(class BlockSource& source);

    MCAPI void onSubChunkLoaded$(
        class ChunkSource& source,
        class LevelChunk&  lc,
        short              absoluteSubChunkIndex,
        bool               subChunkVisibilityChanged
    );

    MCAPI void pauseAndFlushTaskGroups$();

    MCAPI void playSound$(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    MCAPI void playSound$(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, float volume, float pitch);

    MCAPI void playSound$(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void playSound$(
        DimensionType                           dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void playSound$(
        class IConstBlockSource const&          region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    MCAPI void potionSplash$(class Vec3 const& pos, class mce::Color const& color, bool instantaneousEffect);

    MCAPI void queueEntityDestruction$(class OwnerPtr<class EntityContext> entity);

    MCAPI void registerTemporaryPointer$(class _TickPtr& ptr);

    MCAPI class OwnerPtr<class EntityContext> removeActorAndTakeEntity$(class WeakEntityRef entityRef);

    MCAPI class OwnerPtr<class EntityContext> removeActorFromWorldAndTakeEntity$(class WeakEntityRef entityRef);

    MCAPI void removeBlockSourceFromValidityTracking$(class BlockSource* region);

    MCAPI void removeDisplayEntity$(class WeakEntityRef);

    MCAPI class OwnerPtr<class EntityContext> removeEntity$(class Actor& actor);

    MCAPI class OwnerPtr<class EntityContext> removeEntity$(class WeakEntityRef entityRef);

    MCAPI void removeListener$(class LevelListener& listener);

    MCAPI void requestMapInfo$(struct ActorUniqueID uuid, bool forceUpdate);

    MCAPI void requestPlayerChangeDimension$(class Player& player, class ChangeDimensionRequest&& changeRequest);

    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment$();

    MCAPI void resumePlayer$(class Player& player);

    MCAPI void runCommand$(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCAPI void runCommand$(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    MCAPI void save$();

    MCAPI void saveGameData$();

    MCAPI void saveLevelData$();

    MCAPI void sendAllPlayerAbilities$(class Player const& playerReference);

    MCAPI void sendServerLegacyParticle$(::ParticleType id, class Vec3 const& pos, class Vec3 const& dir, int data);

    MCAPI void setCommandsEnabled$(bool commandsEnabled);

    MCAPI void setDefaultGameType$(::GameType gameType);

    MCAPI void setDefaultSpawn$(class BlockPos const& spawnPos);

    MCAPI void setDifficulty$(::Difficulty difficulty);

    MCAPI void setDisablePlayerInteractions$(bool disable);

    MCAPI void setEducationLevelSettings$(struct EducationLevelSettings settings);

    MCAPI void setFinishedInitializing$();

    MCAPI void setHasLockedBehaviorPack$(bool hasLocked);

    MCAPI void setHasLockedResourcePack$(bool hasLocked);

    MCAPI void setImmersiveReaderString$(std::string newString);

    MCAPI void setIsExporting$(bool IsExporting);

    MCAPI void setLANBroadcast$(bool broadcast);

    MCAPI void setLANBroadcastIntent$(bool broadcast);

    MCAPI void setLevelId$(std::string LevelId);

    MCAPI void setMsaGamertagsOnly$(bool msaGamertagsOnly);

    MCAPI void setMultiplayerGame$(bool multiplayerGame);

    MCAPI void setMultiplayerGameIntent$(bool multiplayerGame);

    MCAPI void setNetEventCallback$(class Bedrock::NonOwnerPointer<class NetEventCallback> val);

    MCAPI void setPacketSender$(class PacketSender* val);

    MCAPI void setPlatformBroadcastIntent$(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlatformBroadcastMode$(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlayerAbilities$(struct ActorUniqueID const& playerId, class LayeredAbilities const& abilities);

    MCAPI void setPlayerMovementSettings$(struct PlayerMovementSettings const& settings);

    MCAPI void setSimPaused$(bool value);

    MCAPI void setSleepStatus$(struct PlayerSleepStatus const& status);

    MCAPI void setTime$(int time);

    MCAPI void setWorldTemplateOptionsUnlocked$();

    MCAPI void setXBLBroadcastIntent$(::Social::GamePublishSetting broadcastMode);

    MCAPI void setXBLBroadcastMode$(::Social::GamePublishSetting broadcastMode);

    MCAPI void
    spawnParticleEffect$(std::string const& effectName, class Vec3 const& spawnLocation, class Dimension* dimension);

    MCAPI void startLeaveGame$();

    MCAPI void suspendAndSave$();

    MCAPI void suspendPlayer$(class Player& player);

    MCAPI class OwnerPtr<class EntityContext> takeEntity$(class WeakEntityRef entityRef, class LevelChunk& lc);

    MCAPI void takePicture$(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    MCAPI void tick$();

    MCAPI void tickEntities$();

    MCAPI void tickEntitySystems$();

    MCAPI class Scoreboard* tryGetScoreboard$();

    MCAPI void unregisterTemporaryPointer$(class _TickPtr& ptr);

    MCAPI void updateSleepingPlayerList$();

    MCAPI void updateWeather$(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCAPI void upgradeStorageVersion$(::StorageVersion v);

    MCAPI bool use3DBiomeMaps$() const;

    MCAPI bool useMsaGamertagsOnly$() const;

    MCAPI static auto IS_SLEEPING_POSSIBLE() -> char const (&)[];

    MCAPI static auto OVERWORLD_PLAYER_COUNT_TAG() -> char const (&)[];

    MCAPI static auto SLEEPING_PLAYER_COUNT_TAG() -> char const (&)[];

    // NOLINTEND
};
