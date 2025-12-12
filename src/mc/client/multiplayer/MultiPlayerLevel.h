#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/BeforeLevelForLevelHoldingOwnership.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class BlockTypeRegistry;
class ChunkSource;
class DimensionDefinitionGroup;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class IEntityRegistryOwner;
class IMinecraftEventing;
class ItemRegistryRef;
class LevelChunk;
class LevelData;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class PacketSender;
class PlayerSleepManager;
class ResourcePackManager;
class Scheduler;
class SerializedSkin;
class SoundPlayerInterface;
class StructureManager;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class TrustedSkinHelper;
class WeakEntityRef;
struct ActorUniqueID;
struct NetworkPermissions;
struct Tick;
struct ArmorTrimUnloader;
struct CameraRegistry;
// clang-format on

class MultiPlayerLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk278e66;
    ::ll::UntypedStorage<8, 8>  mUnkdea4d9;
    ::ll::UntypedStorage<8, 8>  mUnk4da832;
    ::ll::UntypedStorage<8, 8>  mUnk18457a;
    ::ll::UntypedStorage<8, 16> mUnk56df9e;
    ::ll::UntypedStorage<8, 16> mUnk63617a;
    ::ll::UntypedStorage<8, 16> mUnk99e6d6;
    ::ll::UntypedStorage<8, 40> mUnk6cb535;
    ::ll::UntypedStorage<8, 8>  mUnkb47a00;
    ::ll::UntypedStorage<8, 8>  mUnk127318;
    ::ll::UntypedStorage<8, 16> mUnk6b0c93;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiPlayerLevel& operator=(MultiPlayerLevel const&);
    MultiPlayerLevel(MultiPlayerLevel const&);
    MultiPlayerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~MultiPlayerLevel() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MultiPlayerLevel() /*override*/;
#endif

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

    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;

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
        ::SerializedSkin const&    skin,
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
    MCNAPI_C MultiPlayerLevel(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        ::ResourcePackManager&                                       resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::Scheduler&                                                 context,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::TrustedSkinHelper                                          trustedSkinHelper,
        ::SubClientId                                                subClientId,
        ::ItemRegistryRef                                            itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>           blockTypeRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::DimensionDefinitionGroup                                   dimensionGroup
    );

    MCNAPI_C void _initializeSubChunkManager();

    MCNAPI_C void _onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender>                packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> const& soundPlayer,
        ::Bedrock::UniqueOwnerPointer<::LevelData>                   levelData,
        ::IMinecraftEventing&                                        eventing,
        ::ResourcePackManager&                                       resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>            structureManager,
        ::Scheduler&                                                 context,
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const& entityRegistryOwner,
        ::WeakRef<::EntityContext>                                   levelEntity,
        ::TrustedSkinHelper                                          trustedSkinHelper,
        ::SubClientId                                                subClientId,
        ::ItemRegistryRef                                            itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>           blockTypeRegistry,
        bool                                                         clientSideChunkGenerationEnabled,
        bool                                                         blockNetworkIdsAreHashes,
        ::NetworkPermissions const&                                  networkPermissions,
        ::DimensionDefinitionGroup                                   dimensionGroup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCNAPI ::Tick const $getCurrentServerTick() const;

    MCNAPI void $startLeaveGame();

    MCNAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk&);

    MCNAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void $removeDisplayEntity(::WeakEntityRef entity);

    MCNAPI ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCNAPI ::PlayerSleepManager const& $getPlayerSleepManager() const;

    MCNAPI ::PlayerSleepManager& $getPlayerSleepManager();

    MCNAPI void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCNAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCNAPI void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );

    MCNAPI ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();

    MCNAPI bool $canUseSkin(
        ::SerializedSkin const&    skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCNAPI ::MultiPlayerLevel* $asMultiPlayerLevel();

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> $getMapDataManager();

    MCNAPI void $subChunkTickAndSendRequests();

    MCNAPI ::MapDataManager& $_getMapDataManager();

    MCNAPI void $_subTick();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForILevel();

    MCNAPI static void** $vftableForIWorldRegistriesProvider();

    MCNAPI static void** $vftableForBlockSourceListener();
    // NOLINTEND
};
