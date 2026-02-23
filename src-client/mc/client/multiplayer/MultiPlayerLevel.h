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
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ChunkSource;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class LevelChunk;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class SerializedSkinRef;
class SubChunkPacket;
class SubChunkRequestManager;
class WeakEntityRef;
struct ActorUniqueID;
struct ArmorTrimIconGenerator;
struct ArmorTrimUnloader;
struct CameraRegistry;
struct MultiPlayerLevelArguments;
struct SubChunkManager;
struct Tick;
struct TrustedSkinHelper;
struct VolumeEntityManagerClient;
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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::SubChunkManager>>>   mSubChunkManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                     mOnSubChunkLoaded;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::DisplayActorManager>>>
                                                                                                mDisplayActorManager;
    ::ll::TypedStorage<8, 40, ::PlayerSleepManager>                                             mPlayerSleepManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimIconGenerator>>                       mArmorTrimIconGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ArmorTrimUnloader>>                            mArmorTrimUnloader;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::MapDataManager>>> mMapDataManager;
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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
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

    virtual void subChunkTickAndSendRequests() /*override*/;

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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
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

    MCAPI void $subChunkTickAndSendRequests();

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
