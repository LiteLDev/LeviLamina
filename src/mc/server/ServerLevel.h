#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/player/PlayerDeathManager.h"
#include "mc/world/item/trading/TradeTables.h"
#include "mc/world/level/BossbarManager.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/LevelChunkMetaDataManager.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockTypeRegistry;
class ChunkGenerationManager;
class Command;
class CommandManager;
class CommandOrigin;
class DynamicPropertiesManager;
class EntityContext;
class Experiments;
class HashedString;
class IEntityRegistryOwner;
class IMinecraftEventing;
class ItemRegistryRef;
class LevelData;
class LevelSettings;
class LevelStorage;
class LinkedAssetValidator;
class MapDataManager;
class MinecraftCommands;
class MobEvents;
class PacketSender;
class Player;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class Scheduler;
class ServerMapDataManager;
class ServerPlayerSleepManager;
class SoundPlayerInterface;
class StructureManager;
class TagCacheManager;
class VolumeEntityManagerServer;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct NetworkPermissions;
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mClientResourcePackManager;
    ::ll::TypedStorage<8, 64, ::TradeTables>                                   mTradeTable;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::CommandManager>> mCommandManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MobEvents>>                   mMobEvents;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TagCacheManager>>> mTagCacheManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PositionTrackingDB::PositionTrackingDBServer>>
                                                                             mServerPositionTrackerDB;
    ::ll::TypedStorage<8, 64, ::BossbarManager>                              mBossbarManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VolumeEntityManagerServer>> mVolumeEntityManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DynamicPropertiesManager>>  mDynamicPropertiesManager;
    ::ll::TypedStorage<8, 72, ::DynamicPropertiesDefinition>                 mDynamicPropertiesDefinition;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkGenerationManager>>>
        mChunkGenerationManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerPlayerSleepManager>>>
                                                               mServerPlayerSleepManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerWakeUpSubscription;
    ::ll::TypedStorage<8, 168, ::PlayerDeathManager>           mPlayerDeathManager;
    ::ll::TypedStorage<8, 48, ::LevelChunkMetaDataManager>     mLevelChunkMetaDataManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerMapDataManager>>> mMapDataManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextTelemetrySendTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&);
    ServerLevel(ServerLevel const&);
    ServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLevel() /*override*/;

    // vIndex: 1
    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    // vIndex: 392
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    // vIndex: 391
    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    // vIndex: 159
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    // vIndex: 158
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    // vIndex: 160
    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    // vIndex: 161
    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    // vIndex: 274
    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    // vIndex: 275
    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    // vIndex: 276
    virtual ::TradeTables* getTradeTables() /*override*/;

    // vIndex: 291
    virtual void
    runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) /*override*/;

    // vIndex: 290
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) /*override*/;

    // vIndex: 277
    virtual void decrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    // vIndex: 278
    virtual void incrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    // vIndex: 279
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    // vIndex: 230
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    // vIndex: 237
    virtual void loadFunctionManager() /*override*/;

    // vIndex: 324
    virtual ::Random& getThreadRandom() const /*override*/;

    // vIndex: 303
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    // vIndex: 289
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    // vIndex: 370
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    // vIndex: 369
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    // vIndex: 371
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    // vIndex: 393
    virtual void _subTick() /*override*/;

    // vIndex: 386
    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    // vIndex: 387
    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    // vIndex: 394
    virtual void _initializeMapDataManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerLevel(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelStorage>                levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        ::ResourcePackManager&                                       serverResourcePackManager,
        ::ResourcePackManager&                                       clientResourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::MinecraftCommands&                                         commands,
        ::Scheduler&                                                 callbackContext,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::ItemRegistryRef                                            itemRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>           blockTypeRegistry,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>           validator
    );

    MCAPI void _initializeActorManager();

    MCAPI void _initializeMobEvents();

    MCAPI void _initializePlayerSleepManager();

    MCAPI void _initializeScoreboard();

    MCAPI void _onActorEntityAdded(::Actor& actor);

    MCAPI void _onPlayerWakeUp(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelStorage>                levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        ::ResourcePackManager&                                       serverResourcePackManager,
        ::ResourcePackManager&                                       clientResourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::MinecraftCommands&                                         commands,
        ::Scheduler&                                                 callbackContext,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::ItemRegistryRef                                            itemRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>           blockTypeRegistry,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>           validator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCFOLD ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCFOLD ::PlayerSleepManager& $getPlayerSleepManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;

    MCAPI void $setCommandsEnabled(bool commandsEnabled);

    MCAPI void $setWorldTemplateOptionsUnlocked();

    MCAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCAPI ::ResourcePackManager* $getServerResourcePackManager() const;

    MCAPI ::TradeTables* $getTradeTables();

    MCAPI void $decrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    );

    MCAPI void $incrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    );

    MCAPI ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();

    MCAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCAPI void $loadFunctionManager();

    MCFOLD ::Random& $getThreadRandom() const;

    MCAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCAPI void $_subTick();

    MCAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCAPI ::MapDataManager& $_getMapDataManager();

    MCAPI void $_initializeMapDataManager();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockSourceListener();

    MCNAPI static void** $vftableForIWorldRegistriesProvider();

    MCNAPI static void** $vftableForILevel();
    // NOLINTEND
};
