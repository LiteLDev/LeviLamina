#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/Level.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockTypeRegistry;
class ChunkGenerationManager;
class Command;
class CommandManager;
class CommandOrigin;
class DynamicProperties;
class DynamicPropertiesDefinition;
class DynamicPropertiesManager;
class EntityContext;
class Experiments;
class ExternalCommandExecutor;
class HashedString;
class IEntityRegistryOwner;
class IMinecraftEventing;
class ItemRegistryRef;
class LevelChunkMetaDataManager;
class LevelData;
class LevelSettings;
class LevelStorage;
class MapDataManager;
class MinecraftCommands;
class MobEvents;
class PacketSender;
class Player;
class PlayerDeathManager;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class Scheduler;
class ServerPlayerSleepManager;
class ServerScriptManager;
class SoundPlayerInterface;
class StructureManager;
class TagCacheManager;
class TradeTables;
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
    ::ll::UntypedStorage<8, 8>   mUnkf36304;
    ::ll::UntypedStorage<8, 8>   mUnk85019e;
    ::ll::UntypedStorage<8, 64>  mUnkf592ac;
    ::ll::UntypedStorage<8, 16>  mUnkb248d7;
    ::ll::UntypedStorage<8, 8>   mUnkea45af;
    ::ll::UntypedStorage<8, 16>  mUnk43b5c6;
    ::ll::UntypedStorage<8, 16>  mUnk583e87;
    ::ll::UntypedStorage<8, 64>  mUnk9a9b65;
    ::ll::UntypedStorage<8, 8>   mUnkd4eea4;
    ::ll::UntypedStorage<8, 8>   mUnk6156c4;
    ::ll::UntypedStorage<8, 72>  mUnk71db1b;
    ::ll::UntypedStorage<8, 8>   mUnk4941bc;
    ::ll::UntypedStorage<8, 16>  mUnk3b6c59;
    ::ll::UntypedStorage<8, 16>  mUnk11fda3;
    ::ll::UntypedStorage<8, 16>  mUnk3daa27;
    ::ll::UntypedStorage<8, 16>  mUnkc57a61;
    ::ll::UntypedStorage<8, 168> mUnk155f9c;
    ::ll::UntypedStorage<8, 48>  mUnk8f3e19;
    ::ll::UntypedStorage<8, 16>  mUnkf595c6;
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
        ::std::string const*   levelId
    ) /*override*/;

    // vIndex: 380
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    // vIndex: 379
    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    // vIndex: 153
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    // vIndex: 152
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    // vIndex: 154
    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    // vIndex: 155
    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    // vIndex: 269
    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    // vIndex: 270
    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    // vIndex: 271
    virtual ::TradeTables* getTradeTables() /*override*/;

    // vIndex: 284
    virtual void
    runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) /*override*/;

    // vIndex: 283
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) /*override*/;

    // vIndex: 272
    virtual void
    decrementTagCache(::std::string const& tag, ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&) /*override*/
        ;

    // vIndex: 273
    virtual void
    incrementTagCache(::std::string const& tag, ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&) /*override*/
        ;

    // vIndex: 274
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    // vIndex: 226
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    // vIndex: 233
    virtual void loadFunctionManager() /*override*/;

    // vIndex: 315
    virtual ::Random& getThreadRandom() const /*override*/;

    // vIndex: 294
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    // vIndex: 362
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    // vIndex: 361
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    // vIndex: 363
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    // vIndex: 381
    virtual void _subTick() /*override*/;

    // vIndex: 375
    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    // vIndex: 376
    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    // vIndex: 382
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
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry,
        ::std::unique_ptr<::ExternalCommandExecutor>                 externalCommandExecutor
    );

    MCAPI void _initializeActorManager();

    MCAPI void _initializePlayerSleepManager();

    MCAPI void _initializeScoreboard();

    MCAPI void _onActorEntityAdded(::Actor& actor);

    MCAPI void _onPlayerWakeUp(::Player& player);

    MCAPI void bindDynamicScriptTypes(::ServerScriptManager& script);

    MCAPI ::CommandManager& getCommandManager();

    MCAPI ::DynamicPropertiesDefinition& getDynamicPropertiesDefinition();

    MCAPI ::DynamicPropertiesManager& getDynamicPropertiesManager() const;

    MCAPI ::Bedrock::NonOwnerPointer<::ExternalCommandExecutor> getExternalCommandExecutor() const;

    MCAPI ::MobEvents const& getMobEvents() const;

    MCAPI ::MobEvents& getMobEvents();

    MCAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCAPI void setShouldSendSleepMessage(bool shouldSend);

    MCAPI bool shouldSendSleepMessage() const;

    MCAPI ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManager() const;
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
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry,
        ::std::unique_ptr<::ExternalCommandExecutor>                 externalCommandExecutor
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
        ::std::string const*   levelId
    );

    MCAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;

    MCAPI void $setCommandsEnabled(bool commandsEnabled);

    MCAPI void $setWorldTemplateOptionsUnlocked();

    MCAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCAPI ::ResourcePackManager* $getServerResourcePackManager() const;

    MCAPI ::TradeTables* $getTradeTables();

    MCAPI void
    $decrementTagCache(::std::string const& tag, ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&);

    MCAPI void
    $incrementTagCache(::std::string const& tag, ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&);

    MCAPI ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();

    MCAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCAPI void $loadFunctionManager();

    MCAPI ::Random& $getThreadRandom() const;

    MCAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCAPI ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCAPI void $_subTick();

    MCAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCAPI ::MapDataManager& $_getMapDataManager();

    MCAPI void $_initializeMapDataManager();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockSourceListener();

    MCAPI static void** $vftableForIWorldRegistriesProvider();

    MCAPI static void** $vftableForILevel();
    // NOLINTEND
};
