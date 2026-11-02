#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/BeforeLevelForLevelHoldingOwnership.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ArmorTrimIconGenerator;
class ArmorTrimUnloader;
class BlockSource;
class CameraRegistry;
class ChunkSource;
class ClientSubChunkLighter;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class ISubChunkLighter;
class LevelChunk;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class ResourcePackManager;
class SerializedSkinRef;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class TickTimeManager;
class TickTimeManagerClient;
class TrustedSkinHelper;
class VolumeEntityManagerClient;
class WeakEntityRef;
struct ActorUniqueID;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct ClientLevelArguments;
struct Tick;
namespace GameModeExt { struct MessengerFactory; }
namespace ServerInitialization { class IServerInitializer; }
// clang-format on

class ClientLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // ClientLevel inner types define
    using ActorIdMap = ::std::map<int, ::Actor*>;

    using ActorSet = ::std::set<::Actor*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TrustedSkinHelper>>> mTrustedSkinHelper;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::CameraRegistry>>>  mCameraRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::EntitySystems>>>   mCameraSystems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VolumeEntityManagerClient>>        mVolumeEntityManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManagerClient>>> mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::SubChunkManager>>> mSubChunkManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                   mOnSubChunkLoaded;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DisplayActorManager>>>
                                                                                                mDisplayActorManager;
    ::ll::TypedStorage<8, 40, ::PlayerSleepManager>                                             mPlayerSleepManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimIconGenerator>>                       mArmorTrimIconGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimUnloader>>                            mArmorTrimUnloader;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::MapDataManager>>> mMapDataManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientSubChunkLighter>>                       mClientSubChunkLighter;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientLevel& operator=(ClientLevel const&);
    ClientLevel(ClientLevel const&);
    ClientLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientLevel() /*override*/ = default;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData,
        ::ServerInitialization::IServerInitializer*
    ) /*override*/;

    virtual ::Tick const getCurrentServerTick() const /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) /*override*/;

    virtual ::Actor* addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual void removeDisplayEntity(::WeakEntityRef entity) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) /*override*/;

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    virtual bool canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    virtual ::ClientLevel* asClientLevel() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const /*override*/;

    virtual void subChunkTickAndSendRequests() /*override*/;

    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;

    virtual ::TickTimeManager const& _getTickTimeManager() const /*override*/;

    virtual ::TickTimeManager& _getTickTimeManager() /*override*/;

    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    virtual void _subTick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientLevel(::ClientLevelArguments&& args);

    MCAPI void _onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCNAPI void cameraTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientLevelArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData,
        ::ServerInitialization::IServerInitializer*
    );

    MCNAPI ::Tick const $getCurrentServerTick() const;

    MCAPI void $startLeaveGame();

    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCNAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc);

    MCNAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void $removeDisplayEntity(::WeakEntityRef entity);

    MCNAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCNAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCNAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCNAPI void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCNAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCAPI void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCNAPI ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCNAPI bool $canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCNAPI ::ClientLevel* $asClientLevel();

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCNAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;

    MCNAPI void $subChunkTickAndSendRequests();

    MCNAPI ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;

    MCNAPI ::TickTimeManager const& $_getTickTimeManager() const;

    MCNAPI ::TickTimeManager& $_getTickTimeManager();

    MCNAPI ::MapDataManager& $_getMapDataManager();

    MCAPI void $_subTick();
    // NOLINTEND
};
