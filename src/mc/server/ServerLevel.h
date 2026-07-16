#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/player/PlayerDeathManager.h"
#include "mc/world/level/BossbarManager.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/LevelChunkMetaDataManager.h"
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
class ChunkGenerationManager;
class Command;
class CommandManager;
class CommandOrigin;
class DynamicPropertiesManager;
class Experiments;
class HashedString;
class ISubChunkLighter;
class LevelSettings;
class MapDataManager;
class MobEvents;
class NetworkIdentifier;
class PlayerSleepManager;
class Random;
class ResourcePackManager;
class ServerMapDataManager;
class ServerPlayerSleepManager;
class ServerSubChunkLighter;
class TagCacheManager;
class TickTimeManager;
class TickTimeManagerServer;
class TradeTables;
class VolumeEntityManagerServer;
class WorldClockRegistryServer;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct LevelTagIDType;
struct LevelTagSetIDType;
namespace GameModeExt { struct MessengerFactory; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TradeTables>>                 mTradeTable;
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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManagerServer>>> mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerPlayerSleepManager>>>
                                                               mServerPlayerSleepManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerWakeUpSubscription;
    ::ll::TypedStorage<8, 168, ::PlayerDeathManager>           mPlayerDeathManager;
    ::ll::TypedStorage<8, 48, ::LevelChunkMetaDataManager>     mLevelChunkMetaDataManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerMapDataManager>>> mMapDataManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mNextTelemetrySendTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerSubChunkLighter>> mServerSubChunkLighter;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&);
    ServerLevel(ServerLevel const&);
    ServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerLevel() /*override*/ = default;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
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
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    virtual void loadFunctionManager() /*override*/;

    virtual ::Random& getThreadRandom() const /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const /*override*/;

    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;

    virtual void _subTick() /*override*/;

    virtual ::TickTimeManager const& _getTickTimeManager() const /*override*/;

    virtual ::TickTimeManager& _getTickTimeManager() /*override*/;

    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    virtual void _initializeMapDataManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistryServer> getWorldClockRegistryServer() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
