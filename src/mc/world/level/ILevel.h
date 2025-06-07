#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class Actor;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorDimensionTransferManager;
class ActorEventBroadcaster;
class ActorEventCoordinator;
class ActorFactory;
class ActorFetcher;
class ActorInfoRegistry;
class ActorRuntimeID;
class ActorRuntimeIDManager;
class ActorSoundIdentifier;
class AutomationBehaviorTreeGroup;
class BaseLightTextureImageBuilder;
class BehaviorFactory;
class BiomeComponentFactory;
class BiomeManager;
class BiomeRegistry;
class Block;
class BlockDefinitionGroup;
class BlockEventCoordinator;
class BlockLegacy;
class BlockPalette;
class BlockPos;
class BlockReducer;
class BlockSource;
class BlockSourceValidityManager;
class BlockTypeRegistry;
class BossEventSubscriptionManager;
class CameraPresets;
class CameraRegistry;
class ChangeDimensionRequest;
class ChunkGenerationManager;
class ChunkPos;
class ChunkSource;
class ChunkTickOffsetManager;
class ChunkTickRangeManager;
class ChunkViewSource;
class ClientPlayerEventCoordinator;
class Command;
class CommandOrigin;
class CompoundTag;
class Dimension;
class DimensionConversionData;
class DimensionManager;
class DisplayActorManager;
class EducationSettingsManager;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class Experiments;
class Explosion;
class FeatureRegistry;
class FeatureTypeFactory;
class GameRules;
class GameplayUserManager;
class HashedString;
class HitResult;
class HitResultWrapper;
class IConstBlockSource;
class ILevelRandom;
class IMinecraftEventing;
class IRandom;
class IUnknownBlockTypeRegistry;
class IWorldRegistriesProvider;
class InternalComponentRegistry;
class ItemEventCoordinator;
class ItemRegistryRef;
class JigsawStructureRegistry;
class LayeredAbilities;
class Level;
class LevelBlockDestroyer;
class LevelChunk;
class LevelChunkEventManager;
class LevelChunkMetaDataManager;
class LevelChunkPerformanceTelemetry;
class LevelData;
class LevelEventCoordinator;
class LevelEventManager;
class LevelListener;
class LevelSeed64;
class LevelSettings;
class LevelSoundManager;
class LevelStorage;
class LootTables;
class MapDataManager;
class MapItemSavedData;
class Mob;
class MolangVariableMap;
class MultiPlayerLevel;
class NavigationComponent;
class NetEventCallback;
class NetworkIdentifier;
class PacketSender;
class Particle;
class Path;
class PauseManager;
class PermissionsHandler;
class PhotoManager;
class PhotoStorage;
class Player;
class PlayerAbilitiesManager;
class PlayerDeathManager;
class PlayerDimensionTransferManager;
class PlayerEventCoordinator;
class PlayerListEntry;
class PlayerListManager;
class PlayerLocationReceiver;
class PlayerMovementSettingsManager;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
class PortalForcer;
class ProjectileFactory;
class PropertyGroupManager;
class Random;
class Recipes;
class ResourcePackManager;
class SavedDataStorage;
class Scheduler;
class Scoreboard;
class ScriptDeferredEventCoordinator;
class ScriptingEventCoordinator;
class SerializedSkin;
class ServerNetworkEventCoordinator;
class ServerParticleManager;
class ServerPlayerEventCoordinator;
class ServerPlayerSleepManager;
class SoundPlayerInterface;
class Spawner;
class StrictEntityContext;
class StructureManager;
class StructureSpawnRegistry;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class SurfaceBuilderRegistry;
class TagCacheManager;
class TaskGroup;
class TempEPtrManager;
class TickDeltaTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
class TrustedSkinHelper;
class UserEntityIdentifierComponent;
class Vec3;
class VolumeEntityManagerServer;
class WeakEntityRef;
class _TickPtr;
struct ActorUniqueID;
struct AdventureSettings;
struct Bounds;
struct BreakingItemParticleData;
struct EducationLevelSettings;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
struct Tick;
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace cereal { struct ReflectionCtx; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ILevel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevel() /*override*/;

    // vIndex: 1
    virtual bool
    initialize(::std::string const&, ::LevelSettings const&, ::Experiments const&, ::std::string const*) = 0;

    // vIndex: 2
    virtual void startLeaveGame() = 0;

    // vIndex: 3
    virtual bool isLeaveGameDone() = 0;

    // vIndex: 4
    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType) = 0;

    // vIndex: 5
    virtual ::WeakRef<::Dimension> getDimension(::DimensionType) const = 0;

    // vIndex: 6
    virtual ::DimensionType getLastOrDefaultSpawnDimensionId(::DimensionType) const = 0;

    // vIndex: 8
    virtual void forEachDimension(::std::function<bool(::Dimension&)>) = 0;

    // vIndex: 7
    virtual void forEachDimension(::std::function<bool(::Dimension const&)>) const = 0;

    // vIndex: 10
    virtual ::DimensionManager& getDimensionManager() = 0;

    // vIndex: 9
    virtual ::DimensionManager const& getDimensionManager() const = 0;

    // vIndex: 11
    virtual uint getChunkTickRange() const = 0;

    // vIndex: 12
    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const = 0;

    // vIndex: 13
    virtual ::PortalForcer& getPortalForcer() = 0;

    // vIndex: 14
    virtual void requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&) = 0;

    // vIndex: 15
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> getPlayerDimensionTransferManager() = 0;

    // vIndex: 16
    virtual void entityChangeDimension(::Actor&, ::DimensionType, ::std::optional<::Vec3>) = 0;

    // vIndex: 17
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager> getActorDimensionTransferManager() = 0;

    // vIndex: 18
    virtual ::Spawner& getSpawner() const = 0;

    // vIndex: 19
    virtual ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager> getBossEventSubscriptionManager() = 0;

    // vIndex: 20
    virtual ::ProjectileFactory& getProjectileFactory() const = 0;

    // vIndex: 21
    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;

    // vIndex: 22
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;

    // vIndex: 23
    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;

    // vIndex: 24
    virtual ::BlockDefinitionGroup* getBlockDefinitions() const = 0;

    // vIndex: 25
    virtual ::PropertyGroupManager& getActorPropertyGroup() const = 0;

    // vIndex: 27
    virtual ::CameraPresets const& getCameraPresets() const = 0;

    // vIndex: 26
    virtual ::CameraPresets& getCameraPresets() = 0;

    // vIndex: 28
    virtual bool getDisablePlayerInteractions() const = 0;

    // vIndex: 29
    virtual void setDisablePlayerInteractions(bool const) = 0;

    // vIndex: 30
    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const = 0;

    // vIndex: 31
    virtual ::BehaviorFactory& getBehaviorFactory() const = 0;

    // vIndex: 32
    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const = 0;

    // vIndex: 33
    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const = 0;

    // vIndex: 34
    virtual ::DimensionConversionData getDimensionConversionData() const = 0;

    // vIndex: 35
    virtual float getSpecialMultiplier(::DimensionType) const = 0;

    // vIndex: 36
    virtual bool hasCommandsEnabled() const = 0;

    // vIndex: 37
    virtual bool useMsaGamertagsOnly() const = 0;

    // vIndex: 38
    virtual void setMsaGamertagsOnly(bool) = 0;

    // vIndex: 39
    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 40
    virtual ::Actor* addGlobalEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 41
    virtual ::Actor* addAutonomousEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 42
    virtual void addUser(::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 43
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 44
    virtual void removeDisplayEntity(::WeakEntityRef) = 0;

    // vIndex: 45
    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() = 0;

    // vIndex: 46
    virtual void suspendPlayer(::Player&) = 0;

    // vIndex: 47
    virtual void resumePlayer(::Player&) = 0;

    // vIndex: 48
    virtual bool isPlayerSuspended(::Player&) const = 0;

    // vIndex: 50
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> getGameplayUserManager() = 0;

    // vIndex: 49
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> getGameplayUserManager() const = 0;

    // vIndex: 51
    virtual ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> getPlayerLocationReceiver() = 0;

    // vIndex: 52
    virtual ::OwnerPtr<::EntityContext> removeActorAndTakeEntity(::WeakEntityRef) = 0;

    // vIndex: 53
    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef) = 0;

    // vIndex: 54
    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&) = 0;

    // vIndex: 55
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID, bool) const = 0;

    // vIndex: 56
    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;

    // vIndex: 57
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> getActorFetcher() const = 0;

    // vIndex: 58
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID, bool) const = 0;

    // vIndex: 60
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> getActorRuntimeIDManager() = 0;

    // vIndex: 59
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> getActorRuntimeIDManager() const = 0;

    // vIndex: 61
    virtual ::Mob* getMob(::ActorUniqueID) const = 0;

    // vIndex: 64
    virtual ::Player* getPlayer(::std::string const&) const = 0;

    // vIndex: 63
    virtual ::Player* getPlayer(::mce::UUID const&) const = 0;

    // vIndex: 62
    virtual ::Player* getPlayer(::ActorUniqueID) const = 0;

    // vIndex: 65
    virtual ::Player* getPlayerByXuid(::std::string const&) const = 0;

    // vIndex: 66
    virtual ::Player* getPlatformPlayer(::std::string const&) const = 0;

    // vIndex: 67
    virtual ::Player* getPlayerFromServerId(::std::string const&) const = 0;

    // vIndex: 68
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID) const = 0;

    // vIndex: 69
    virtual int getNumRemotePlayers() const = 0;

    // vIndex: 70
    virtual ::Player* getPrimaryLocalPlayer() const = 0;

    // vIndex: 71
    virtual ::IMinecraftEventing& getEventing() = 0;

    // vIndex: 72
    virtual ::mce::Color getPlayerColor(::Player const&) const = 0;

    // vIndex: 73
    virtual ::Tick const& getCurrentTick() const = 0;

    // vIndex: 74
    virtual ::Tick const getCurrentServerTick() const = 0;

    // vIndex: 75
    virtual ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> getTickDeltaTimeManager() const = 0;

    // vIndex: 77
    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    // vIndex: 76
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    // vIndex: 79
    virtual ::BlockPalette const& getBlockPalette() const = 0;

    // vIndex: 78
    virtual ::BlockPalette& getBlockPalette() = 0;

    // vIndex: 81
    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

    // vIndex: 80
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;

    // vIndex: 83
    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

    // vIndex: 82
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;

    // vIndex: 85
    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

    // vIndex: 84
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;

    // vIndex: 87
    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

    // vIndex: 86
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;

    // vIndex: 89
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const = 0;

    // vIndex: 88
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() = 0;

    // vIndex: 91
    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

    // vIndex: 90
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;

    // vIndex: 93
    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

    // vIndex: 92
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;

    // vIndex: 95
    virtual ::BiomeManager const& getBiomeManager() const = 0;

    // vIndex: 94
    virtual ::BiomeManager& getBiomeManager() = 0;

    // vIndex: 97
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&> const& getDimensionFactory() const = 0;

    // vIndex: 96
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&>& getDimensionFactory() = 0;

    // vIndex: 99
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    getLightTextureImageBuilderFactory() const = 0;

    // vIndex: 98
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& getLightTextureImageBuilderFactory() = 0;

    // vIndex: 101
    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const = 0;

    // vIndex: 100
    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() = 0;

    // vIndex: 102
    virtual void addListener(::LevelListener&) = 0;

    // vIndex: 103
    virtual void removeListener(::LevelListener&) = 0;

    // vIndex: 104
    virtual void tickEntities() = 0;

    // vIndex: 105
    virtual void tickEntitySystems() = 0;

    // vIndex: 107
    virtual ::StackRefResult<::PauseManager> getPauseManager() = 0;

    // vIndex: 106
    virtual ::StackRefResult<::PauseManager const> getPauseManager() const = 0;

    // vIndex: 108
    virtual void onPlayerDeath(::Player&, ::ActorDamageSource const&) = 0;

    // vIndex: 109
    virtual void tick() = 0;

    // vIndex: 111
    virtual bool explode(::BlockSource&, ::Actor*, ::Vec3 const&, float, bool, bool, float, bool) = 0;

    // vIndex: 110
    virtual bool explode(::Explosion&) = 0;

    // vIndex: 112
    virtual void spawnParticleEffect(::std::string const&, ::Vec3 const&, ::Dimension*) = 0;

    // vIndex: 113
    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> getServerParticleManager() = 0;

    // vIndex: 114
    virtual void denyEffect(::BlockSource&, ::Vec3 const&) = 0;

    // vIndex: 115
    virtual void potionSplash(::Vec3 const&, ::mce::Color const&, bool) = 0;

    // vIndex: 116
    virtual bool extinguishFire(::BlockSource&, ::BlockPos const&, uchar, ::Actor*) = 0;

    // vIndex: 118
    virtual ::std::unique_ptr<::Path> findPath(::Actor&, int, int, int, ::NavigationComponent&) = 0;

    // vIndex: 117
    virtual ::std::unique_ptr<::Path> findPath(::Actor&, ::Actor const&, ::NavigationComponent&) = 0;

    // vIndex: 119
    virtual void updateSleepingPlayerList() = 0;

    // vIndex: 120
    virtual void setSleepStatus(::PlayerSleepStatus const&) = 0;

    // vIndex: 121
    virtual ::PlayerSleepStatus getSleepStatus() const = 0;

    // vIndex: 122
    virtual int getTime() const = 0;

    // vIndex: 123
    virtual void setTime(int) = 0;

    // vIndex: 124
    virtual uint getSeed() = 0;

    // vIndex: 125
    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    // vIndex: 126
    virtual ::BlockPos const& getSharedSpawnPos() const = 0;

    // vIndex: 127
    virtual void setDefaultSpawn(::BlockPos const&) = 0;

    // vIndex: 128
    virtual ::BlockPos const& getDefaultSpawn() const = 0;

    // vIndex: 129
    virtual void setDefaultGameType(::GameType) = 0;

    // vIndex: 130
    virtual ::GameType getDefaultGameType() const = 0;

    // vIndex: 131
    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty) = 0;

    // vIndex: 132
    virtual void setMultiplayerGameIntent(bool) = 0;

    // vIndex: 133
    virtual bool getMultiplayerGameIntent() const = 0;

    // vIndex: 134
    virtual void setMultiplayerGame(bool) = 0;

    // vIndex: 135
    virtual bool isMultiplayerGame() const = 0;

    // vIndex: 136
    virtual void setLANBroadcastIntent(bool) = 0;

    // vIndex: 137
    virtual bool getLANBroadcastIntent() const = 0;

    // vIndex: 138
    virtual void setLANBroadcast(bool) = 0;

    // vIndex: 139
    virtual bool getLANBroadcast() const = 0;

    // vIndex: 140
    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting) = 0;

    // vIndex: 141
    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const = 0;

    // vIndex: 142
    virtual bool hasXBLBroadcastIntent() const = 0;

    // vIndex: 143
    virtual void setXBLBroadcastMode(::Social::GamePublishSetting) = 0;

    // vIndex: 144
    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const = 0;

    // vIndex: 145
    virtual bool hasXBLBroadcast() const = 0;

    // vIndex: 146
    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting) = 0;

    // vIndex: 147
    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const = 0;

    // vIndex: 148
    virtual bool hasPlatformBroadcastIntent() const = 0;

    // vIndex: 149
    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting) = 0;

    // vIndex: 150
    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const = 0;

    // vIndex: 151
    virtual bool hasPlatformBroadcast() const = 0;

    // vIndex: 152
    virtual void setHasLockedBehaviorPack(bool) = 0;

    // vIndex: 153
    virtual void setHasLockedResourcePack(bool) = 0;

    // vIndex: 155
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() = 0;

    // vIndex: 154
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const = 0;

    // vIndex: 156
    virtual void setCommandsEnabled(bool) = 0;

    // vIndex: 157
    virtual void setWorldTemplateOptionsUnlocked() = 0;

    // vIndex: 158
    virtual bool hasLevelStorage() const = 0;

    // vIndex: 160
    virtual ::LevelStorage& getLevelStorage() = 0;

    // vIndex: 159
    virtual ::LevelStorage const& getLevelStorage() const = 0;

    // vIndex: 162
    virtual ::LevelData& getLevelData() = 0;

    // vIndex: 161
    virtual ::LevelData const& getLevelData() const = 0;

    // vIndex: 163
    virtual ::PhotoStorage& getPhotoStorage() const = 0;

    // vIndex: 164
    virtual void createPhotoStorage() = 0;

    // vIndex: 166
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> getPhotoManager() = 0;

    // vIndex: 165
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> getPhotoManager() const = 0;

    // vIndex: 167
    virtual void setEducationLevelSettings(::EducationLevelSettings) = 0;

    // vIndex: 168
    virtual ::std::optional<::EducationLevelSettings> const& getEducationLevelSettings() const = 0;

    // vIndex: 170
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> getEducationSettingsManager() = 0;

    // vIndex: 169
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> getEducationSettingsManager() const = 0;

    // vIndex: 171
    virtual void save() = 0;

    // vIndex: 172
    virtual void saveLevelData() = 0;

    // vIndex: 173
    virtual void saveGameData() = 0;

    // vIndex: 174
    virtual ::std::shared_ptr<void*> requestTimedStorageDeferment() = 0;

    // vIndex: 175
    virtual ::TickingAreasManager& getTickingAreasMgr() = 0;

    // vIndex: 176
    virtual void addTickingAreaList(::DimensionType, ::std::shared_ptr<::TickingAreaList> const&) = 0;

    // vIndex: 177
    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int) = 0;

    // vIndex: 182
    virtual void
    playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;

    // vIndex: 181
    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const) = 0;

    // vIndex: 180
    virtual void playSound(::std::string const&, ::Vec3 const&, float, float) = 0;

    // vIndex: 179
    virtual void playSound(
        ::IConstBlockSource const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
    ) = 0;

    // vIndex: 178
    virtual void playSound(
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
    ) = 0;

    // vIndex: 183
    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator() = 0;

    // vIndex: 184
    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() = 0;

    // vIndex: 185
    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() = 0;

    // vIndex: 186
    virtual ::ActorEventCoordinator& getActorEventCoordinator() = 0;

    // vIndex: 187
    virtual ::BlockEventCoordinator& getBlockEventCoordinator() = 0;

    // vIndex: 188
    virtual ::ItemEventCoordinator& getItemEventCoordinator() = 0;

    // vIndex: 189
    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() = 0;

    // vIndex: 190
    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator() = 0;

    // vIndex: 191
    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator() = 0;

    // vIndex: 192
    virtual ::LevelEventCoordinator& getLevelEventCoordinator() = 0;

    // vIndex: 194
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;

    // vIndex: 193
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&) = 0;

    // vIndex: 195
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() = 0;

    // vIndex: 196
    virtual void handleStopSoundEvent(::std::string const&) = 0;

    // vIndex: 197
    virtual void handleStopAllSounds() = 0;

    // vIndex: 198
    virtual void handleStopMusicEvent() = 0;

    // vIndex: 200
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::Vec3 const&,
        int,
        ::UserEntityIdentifierComponent const*
    ) = 0;

    // vIndex: 199
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
    ) = 0;

    // vIndex: 202
    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;

    // vIndex: 201
    virtual void
    broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&) = 0;

    // vIndex: 205
    virtual void broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Block const&,
        ::ActorSoundIdentifier const&,
        bool
    ) = 0;

    // vIndex: 204
    virtual void broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
    ) = 0;

    // vIndex: 203
    virtual void broadcastSoundEvent(
        ::Dimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
    ) = 0;

    // vIndex: 206
    virtual void broadcastActorEvent(::Actor&, ::ActorEvent, int) const = 0;

    // vIndex: 207
    virtual ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> getActorEventBroadcaster() const = 0;

    // vIndex: 208
    virtual void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource>) = 0;

    // vIndex: 209
    virtual void onChunkReload(::Bounds const&) = 0;

    // vIndex: 210
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&) = 0;

    // vIndex: 211
    virtual int getActivePlayerCount() const = 0;

    // vIndex: 212
    virtual int getActiveUsersCount() const = 0;

    // vIndex: 214
    virtual void forEachPlayer(::std::function<bool(::Player&)>) = 0;

    // vIndex: 213
    virtual void forEachPlayer(::std::function<bool(::Player const&)>) const = 0;

    // vIndex: 216
    virtual void forEachUser(::std::function<bool(::EntityContext&)>) = 0;

    // vIndex: 215
    virtual void forEachUser(::std::function<bool(::EntityContext const&)>) const = 0;

    // vIndex: 218
    virtual ::Player* findPlayer(::std::function<bool(::Player const&)>) const = 0;

    // vIndex: 217
    virtual ::Player* findPlayer(::std::function<bool(::WeakEntityRef const&)>) const = 0;

    // vIndex: 219
    virtual int getUserCount() const = 0;

    // vIndex: 220
    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const&) const = 0;

    // vIndex: 221
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getUsers() const = 0;

    // vIndex: 222
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const = 0;

    // vIndex: 223
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool) = 0;

    // vIndex: 224
    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() = 0;

    // vIndex: 225
    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&) = 0;

    // vIndex: 226
    virtual void onChunkDiscarded(::LevelChunk&) = 0;

    // vIndex: 227
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> getLevelChunkEventManager() = 0;

    // vIndex: 228
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() = 0;

    // vIndex: 229
    virtual void queueEntityDestruction(::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 231
    virtual ::OwnerPtr<::EntityContext> removeEntity(::Actor&) = 0;

    // vIndex: 230
    virtual ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef) = 0;

    // vIndex: 232
    virtual void forceRemoveEntity(::Actor&) = 0;

    // vIndex: 233
    virtual void forceRemoveEntityfromWorld(::Actor&) = 0;

    // vIndex: 234
    virtual void forceFlushRemovedPlayers() = 0;

    // vIndex: 235
    virtual void loadFunctionManager() = 0;

    // vIndex: 236
    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext>) = 0;

    // vIndex: 237
    virtual void registerTemporaryPointer(::_TickPtr&) = 0;

    // vIndex: 238
    virtual void unregisterTemporaryPointer(::_TickPtr&) = 0;

    // vIndex: 239
    virtual ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> getTempEPtrManager() = 0;

    // vIndex: 240
    virtual bool destroyBlock(::BlockSource&, ::BlockPos const&, bool) = 0;

    // vIndex: 241
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> getLevelBlockDestroyer() = 0;

    // vIndex: 242
    virtual void upgradeStorageVersion(::StorageVersion) = 0;

    // vIndex: 243
    virtual void suspendAndSave() = 0;

    // vIndex: 244
    virtual ::Particle* addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool) = 0;

    // vIndex: 245
    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&) = 0;

    // vIndex: 246
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;

    // vIndex: 247
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;

    // vIndex: 248
    virtual void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&) = 0;

    // vIndex: 249
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&,
        ::BlockPos const&,
        ::Block const&,
        ::std::optional<::mce::Color>
    ) = 0;

    // vIndex: 250
    virtual ::ActorUniqueID getNewUniqueID() = 0;

    // vIndex: 251
    virtual ::ActorRuntimeID getNextRuntimeID() = 0;

    // vIndex: 252
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const = 0;

    // vIndex: 253
    virtual ::std::vector<::ChunkPos> const& getClientTickingOffsets() const = 0;

    // vIndex: 254
    virtual ::std::vector<::ChunkPos> getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const&) const = 0;

    // vIndex: 255
    virtual ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> getChunkTickOffsetManager() const = 0;

    // vIndex: 256
    virtual bool isExporting() const = 0;

    // vIndex: 257
    virtual void setIsExporting(bool) = 0;

    // vIndex: 258
    virtual ::SavedDataStorage& getSavedData() = 0;

    // vIndex: 261
    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const) = 0;

    // vIndex: 260
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const&) = 0;

    // vIndex: 259
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const*) = 0;

    // vIndex: 262
    virtual void requestMapInfo(::ActorUniqueID const, bool) = 0;

    // vIndex: 263
    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool) = 0;

    // vIndex: 264
    virtual bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const) = 0;

    // vIndex: 266
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int) = 0;

    // vIndex: 265
    virtual ::MapItemSavedData&
    createMapSavedData(::std::vector<::ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int) = 0;

    // vIndex: 267
    virtual ::Core::PathBuffer<::std::string> getScreenshotsFolder() const = 0;

    // vIndex: 268
    virtual ::std::string getLevelId() const = 0;

    // vIndex: 269
    virtual void setLevelId(::std::string) = 0;

    // vIndex: 270
    virtual ::TaskGroup& getSyncTasksGroup() = 0;

    // vIndex: 271
    virtual ::TaskGroup& getIOTasksGroup() = 0;

    // vIndex: 272
    virtual ::ResourcePackManager* getClientResourcePackManager() const = 0;

    // vIndex: 273
    virtual ::ResourcePackManager* getServerResourcePackManager() const = 0;

    // vIndex: 274
    virtual ::TradeTables* getTradeTables();

    // vIndex: 275
    virtual void decrementTagCache(
        ::std::string const&,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) = 0;

    // vIndex: 276
    virtual void incrementTagCache(
        ::std::string const&,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) = 0;

    // vIndex: 277
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() = 0;

    // vIndex: 278
    virtual bool isEdu() const = 0;

    // vIndex: 280
    virtual ::ActorFactory& getActorFactory() = 0;

    // vIndex: 279
    virtual ::ActorFactory const& getActorFactory() const = 0;

    // vIndex: 281
    virtual ::ActorInfoRegistry* getActorInfoRegistry() = 0;

    // vIndex: 283
    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() = 0;

    // vIndex: 282
    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const = 0;

    // vIndex: 284
    virtual ::EntitySystems& getEntitySystems() = 0;

    // vIndex: 286
    virtual ::WeakRef<::EntityContext> getLevelEntity() = 0;

    // vIndex: 285
    virtual ::WeakRef<::EntityContext const> getLevelEntity() const = 0;

    // vIndex: 287
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const = 0;

    // vIndex: 289
    virtual void
    runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) = 0;

    // vIndex: 288
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) = 0;

    // vIndex: 290
    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const = 0;

    // vIndex: 291
    virtual ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& getTagRegistry() = 0;

    // vIndex: 292
    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const = 0;

    // vIndex: 293
    virtual void setPlayerMovementSettings(::PlayerMovementSettings const&) = 0;

    // vIndex: 295
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager> getPlayerMovementSettingsManager() = 0;

    // vIndex: 294
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    getPlayerMovementSettingsManager() const = 0;

    // vIndex: 296
    virtual bool canUseSkin(::SerializedSkin const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const = 0;

    // vIndex: 297
    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const = 0;

    // vIndex: 298
    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const = 0;

    // vIndex: 299
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const = 0;

    // vIndex: 300
    virtual void flushRunTimeLighting() = 0;

    // vIndex: 301
    virtual void loadBlockDefinitionGroup(::Experiments const&) = 0;

    // vIndex: 302
    virtual void initializeBlockDefinitionGroup() = 0;

    // vIndex: 303
    virtual ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() = 0;

    // vIndex: 304
    virtual bool isClientSide() const = 0;

    // vIndex: 305
    virtual ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const = 0;

    // vIndex: 306
    virtual ::std::string const& getPlayerXUID(::mce::UUID const&) const = 0;

    // vIndex: 307
    virtual ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const = 0;

    // vIndex: 309
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> getPlayerListManager() = 0;

    // vIndex: 308
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> getPlayerListManager() const = 0;

    // vIndex: 310
    virtual ::std::vector<::WeakEntityRef> const& getActiveUsers() const = 0;

    // vIndex: 311
    virtual ::std::vector<::Actor*> getRuntimeActorList() const = 0;

    // vIndex: 312
    virtual void notifySubChunkRequestManager(::SubChunkPacket const&) = 0;

    // vIndex: 313
    virtual ::SubChunkRequestManager* getSubChunkRequestManager() = 0;

    // vIndex: 314
    virtual ::PacketSender* getPacketSender() const = 0;

    // vIndex: 315
    virtual ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback() const = 0;

    // vIndex: 316
    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback>) = 0;

    // vIndex: 317
    virtual ::gsl::not_null<::StackRefResult<::ILevelRandom>> getILevelRandom() = 0;

    // vIndex: 318
    virtual ::IRandom& getIRandom() const = 0;

    // vIndex: 319
    virtual ::Random& getRandom() const = 0;

    // vIndex: 320
    virtual ::Random& getThreadRandom() const = 0;

    // vIndex: 321
    virtual ::HitResult& getHitResult() = 0;

    // vIndex: 322
    virtual ::HitResult& getLiquidHitResult() = 0;

    // vIndex: 323
    virtual ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> getHitResultWrapper() = 0;

    // vIndex: 324
    virtual ::std::string const& getImmersiveReaderString() const = 0;

    // vIndex: 325
    virtual void setImmersiveReaderString(::std::string) = 0;

    // vIndex: 327
    virtual ::AdventureSettings& getAdventureSettings() = 0;

    // vIndex: 326
    virtual ::AdventureSettings const& getAdventureSettings() const = 0;

    // vIndex: 329
    virtual ::GameRules const& getGameRules() const = 0;

    // vIndex: 328
    virtual ::GameRules& getGameRules() = 0;

    // vIndex: 330
    virtual bool hasStartWithMapEnabled() const = 0;

    // vIndex: 331
    virtual bool isEditorWorld() const = 0;

    // vIndex: 332
    virtual bool isHardcore() const = 0;

    // vIndex: 333
    virtual ::Abilities& getDefaultAbilities() = 0;

    // vIndex: 335
    virtual ::PermissionsHandler& getDefaultPermissions() = 0;

    // vIndex: 334
    virtual ::PermissionsHandler const& getDefaultPermissions() const = 0;

    // vIndex: 336
    virtual bool getTearingDown() const = 0;

    // vIndex: 337
    virtual void takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    ) = 0;

    // vIndex: 338
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelSoundManager> getLevelSoundManager() = 0;

    // vIndex: 339
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> getSoundPlayer() const = 0;

    // vIndex: 340
    virtual void setSimPaused(bool) = 0;

    // vIndex: 341
    virtual bool getSimPaused() = 0;

    // vIndex: 342
    virtual void setFinishedInitializing() = 0;

    // vIndex: 343
    virtual ::LootTables& getLootTables() = 0;

    // vIndex: 344
    virtual void updateWeather(float, int, float, int) = 0;

    // vIndex: 345
    virtual int getNetherScale() const = 0;

    // vIndex: 347
    virtual ::Scoreboard& getScoreboard() = 0;

    // vIndex: 346
    virtual ::Scoreboard const& getScoreboard() const = 0;

    // vIndex: 348
    virtual ::Scoreboard* tryGetScoreboard() = 0;

    // vIndex: 349
    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&) = 0;

    // vIndex: 350
    virtual void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&) = 0;

    // vIndex: 351
    virtual void sendAllPlayerAbilities(::Player const&) = 0;

    // vIndex: 352
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> getPlayerAbilitiesManager() = 0;

    // vIndex: 353
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> getPlayerPermissionsManager() = 0;

    // vIndex: 354
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser> getPlayerPermissionsSynchroniser() = 0;

    // vIndex: 355
    virtual ::Recipes& getRecipes() const = 0;

    // vIndex: 356
    virtual ::BlockReducer* getBlockReducer() const = 0;

    // vIndex: 358
    virtual ::std::weak_ptr<::TrimPatternRegistry const> getTrimPatternRegistry() const = 0;

    // vIndex: 357
    virtual ::std::weak_ptr<::TrimPatternRegistry> getTrimPatternRegistry() = 0;

    // vIndex: 360
    virtual ::std::weak_ptr<::TrimMaterialRegistry const> getTrimMaterialRegistry() const = 0;

    // vIndex: 359
    virtual ::std::weak_ptr<::TrimMaterialRegistry> getTrimMaterialRegistry() = 0;

    // vIndex: 361
    virtual ::BlockLegacy const& getRegisteredBorderBlock() const = 0;

    // vIndex: 362
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> getLevelChunkPerformanceTelemetry() = 0;

    // vIndex: 363
    virtual bool use3DBiomeMaps() const = 0;

    // vIndex: 364
    virtual void addBlockSourceForValidityTracking(::BlockSource*) = 0;

    // vIndex: 365
    virtual void removeBlockSourceFromValidityTracking(::BlockSource*) = 0;

    // vIndex: 366
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockSourceValidityManager> getBlockSourceValidityManager() = 0;

    // vIndex: 368
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() = 0;

    // vIndex: 367
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const = 0;

    // vIndex: 369
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() = 0;

    // vIndex: 370
    virtual ::Level* asLevel();

    // vIndex: 371
    virtual ::MultiPlayerLevel* asMultiPlayerLevel();

    // vIndex: 373
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const = 0;

    // vIndex: 372
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() = 0;

    // vIndex: 374
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() = 0;

    // vIndex: 375
    virtual bool isClientSideGenerationEnabled() = 0;

    // vIndex: 376
    virtual bool blockNetworkIdsAreHashes() = 0;

    // vIndex: 377
    virtual ::ItemRegistryRef getItemRegistry() const = 0;

    // vIndex: 378
    virtual ::std::weak_ptr<::BlockTypeRegistry> getBlockRegistry() const = 0;

    // vIndex: 379
    virtual void pauseAndFlushTaskGroups() = 0;

    // vIndex: 380
    virtual ::cereal::ReflectionCtx const& cerealContext() const = 0;

    // vIndex: 381
    virtual void subChunkTickAndSendRequests() = 0;

    // vIndex: 382
    virtual ::PlayerDeathManager* _getPlayerDeathManager() = 0;

    // vIndex: 383
    virtual ::MapDataManager& _getMapDataManager() = 0;

    // vIndex: 384
    virtual ::cereal::ReflectionCtx& _cerealContext() = 0;

    // vIndex: 385
    virtual void _onLowMemory() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MultiPlayerLevel* $asMultiPlayerLevel();
    // NOLINTEND
};
