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
class CommandOrigin;
class EntityContext;
class Experiments;
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
class PacketSender;
class Player;
class PlayerDeathManager;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class Scheduler;
class ServerPlayerSleepManager;
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
    ::ll::UntypedStorage<8, 16>  mUnk3b6c59;
    ::ll::UntypedStorage<8, 16>  mUnk11fda3;
    ::ll::UntypedStorage<8, 16>  mUnk3daa27;
    ::ll::UntypedStorage<8, 16>  mUnkc57a61;
    ::ll::UntypedStorage<8, 168> mUnk155f9c;
    ::ll::UntypedStorage<8, 48>  mUnk8f3e19;
    ::ll::UntypedStorage<8, 16>  mUnkf595c6;
    ::ll::UntypedStorage<8, 8>   mUnk6f3347;
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

    // vIndex: 386
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    // vIndex: 385
    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    // vIndex: 154
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    // vIndex: 153
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    // vIndex: 155
    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    // vIndex: 156
    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    // vIndex: 271
    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    // vIndex: 272
    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    // vIndex: 273
    virtual ::TradeTables* getTradeTables() /*override*/;

    // vIndex: 288
    virtual void
    runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) /*override*/;

    // vIndex: 287
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) /*override*/;

    // vIndex: 274
    virtual void decrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    // vIndex: 275
    virtual void incrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    // vIndex: 276
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    // vIndex: 227
    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    // vIndex: 234
    virtual void loadFunctionManager() /*override*/;

    // vIndex: 319
    virtual ::Random& getThreadRandom() const /*override*/;

    // vIndex: 298
    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    // vIndex: 286
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    // vIndex: 367
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    // vIndex: 366
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    // vIndex: 368
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    // vIndex: 387
    virtual void _subTick() /*override*/;

    // vIndex: 380
    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    // vIndex: 381
    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    // vIndex: 388
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
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry
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
        ::std::weak_ptr<::BlockTypeRegistry>                         blockRegistry
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
