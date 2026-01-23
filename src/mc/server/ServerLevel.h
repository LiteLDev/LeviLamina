#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
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
class ChunkGenerationManager;
class Command;
class CommandManager;
class CommandOrigin;
class DynamicPropertiesManager;
class Experiments;
class HashedString;
class LevelSettings;
class MapDataManager;
class MobEvents;
class NetworkIdentifier;
class Player;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class ServerMapDataManager;
class ServerPlayerSleepManager;
class TagCacheManager;
class VolumeEntityManagerServer;
struct LevelTagIDType;
struct LevelTagSetIDType;
struct ServerLevelArguments;
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
    virtual ~ServerLevel() /*override*/;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    virtual ::TradeTables* getTradeTables() /*override*/;

    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) /*override*/;

    virtual void
    runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) /*override*/;

    virtual void decrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    virtual void incrementTagCache(
        ::std::string const& tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>&
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    virtual void loadFunctionManager() /*override*/;

    virtual ::Random& getThreadRandom() const /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    virtual void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    virtual void _subTick() /*override*/;

    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    virtual void _initializeMapDataManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerLevel(::ServerLevelArguments&& args);

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
    MCAPI void* $ctor(::ServerLevelArguments&& args);
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

    MCAPI void $runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    );

    MCAPI void $runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

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

    MCAPI void $clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);

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
