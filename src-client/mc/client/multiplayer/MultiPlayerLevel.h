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
struct MultiPlayerLevelArguments;
struct Tick;
namespace GameModeExt { struct MessengerFactory; }
// clang-format on

class MultiPlayerLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // MultiPlayerLevel inner types define
    using ActorIdMap = ::std::map<int, ::Actor*>;

    using ActorSet = ::std::set<::Actor*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TrustedSkinHelper>>> mTrustedSkinHelper;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::CameraRegistry>>>                 mCameraRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::EntitySystems>>>                  mCameraSystems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VolumeEntityManagerClient>>                       mVolumeEntityManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::TickTimeManagerClient>>>                mTickTimeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::SubChunkManager>>>   mSubChunkManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                     mOnSubChunkLoaded;
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
    MultiPlayerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiPlayerLevel() /*override*/;

    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual ::Tick const getCurrentServerTick() const /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef) /*override*/;

    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk&) /*override*/;

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

    virtual ::MultiPlayerLevel* asMultiPlayerLevel() /*override*/;

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
    MCAPI explicit MultiPlayerLevel(::MultiPlayerLevelArguments&& args);

    MCAPI void _initializeSubChunkManager();

    MCAPI void _onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCAPI void cameraTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MultiPlayerLevelArguments&& args);
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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCAPI ::Tick const $getCurrentServerTick() const;

    MCAPI void $startLeaveGame();

    MCAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef);

    MCAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk&);

    MCAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void $removeDisplayEntity(::WeakEntityRef entity);

    MCAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCFOLD ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCFOLD ::PlayerSleepManager& $getPlayerSleepManager();

    MCAPI void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCAPI void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCAPI ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCAPI bool $canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCAPI ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCFOLD ::MultiPlayerLevel* $asMultiPlayerLevel();

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCFOLD ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCAPI ::GameModeExt::MessengerFactory $createMessengerFactory() const;

    MCAPI void $subChunkTickAndSendRequests();

    MCAPI ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;

    MCFOLD ::TickTimeManager const& $_getTickTimeManager() const;

    MCFOLD ::TickTimeManager& $_getTickTimeManager();

    MCAPI ::MapDataManager& $_getMapDataManager();

    MCAPI void $_subTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForILevel();

    MCNAPI static void** $vftableForIWorldRegistriesProvider();

    MCNAPI static void** $vftableForBlockSourceListener();
    // NOLINTEND
};
