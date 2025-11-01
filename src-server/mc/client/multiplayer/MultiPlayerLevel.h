#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/BeforeLevelForLevelHoldingOwnership.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ArmorTrimUnloader;
class BlockSource;
class CameraRegistry;
class ChunkSource;
class DisplayActorManager;
class EntityContext;
class EntitySystems;
class Experiments;
class LevelChunk;
class LevelSettings;
class MapDataManager;
class NetworkIdentifier;
class PlayerSleepManager;
class SerializedSkin;
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
class TrustedSkinHelper;
class WeakEntityRef;
struct ActorUniqueID;
struct Tick;
// clang-format on

class MultiPlayerLevel : public ::Level, public ::BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk278e66;
    ::ll::UntypedStorage<8, 8> mUnkdea4d9;
    ::ll::UntypedStorage<8, 8> mUnk4da832;
    ::ll::UntypedStorage<8, 8> mUnk18457a;
    ::ll::UntypedStorage<8, 16> mUnk56df9e;
    ::ll::UntypedStorage<8, 16> mUnk63617a;
    ::ll::UntypedStorage<8, 16> mUnk99e6d6;
    ::ll::UntypedStorage<8, 40> mUnk6cb535;
    ::ll::UntypedStorage<8, 8> mUnkb47a00;
    ::ll::UntypedStorage<8, 8> mUnk127318;
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
    // vIndex: 0
    virtual ~MultiPlayerLevel() /*override*/ = default;

    // vIndex: 1
    virtual bool initialize(::std::string const&, ::LevelSettings const&, ::Experiments const&, ::std::string const*, ::std::optional<::std::reference_wrapper<::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>) /*override*/;

    // vIndex: 77
    virtual ::Tick const getCurrentServerTick() const /*override*/;

    // vIndex: 2
    virtual void startLeaveGame() /*override*/;

    // vIndex: 40
    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;

    // vIndex: 56
    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef) /*override*/;

    // vIndex: 57
    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&) /*override*/;

    // vIndex: 44
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;

    // vIndex: 47
    virtual void removeDisplayEntity(::WeakEntityRef) /*override*/;

    // vIndex: 48
    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;

    // vIndex: 392
    virtual ::PlayerSleepManager const& getPlayerSleepManager() const /*override*/;

    // vIndex: 391
    virtual ::PlayerSleepManager& getPlayerSleepManager() /*override*/;

    // vIndex: 316
    virtual void notifySubChunkRequestManager(::SubChunkPacket const&) /*override*/;

    // vIndex: 317
    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    // vIndex: 225
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool) /*override*/;

    // vIndex: 226
    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    // vIndex: 300
    virtual bool canUseSkin(::SerializedSkin const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const /*override*/;

    // vIndex: 301
    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    // vIndex: 373
    virtual ::MultiPlayerLevel* asMultiPlayerLevel() /*override*/;

    // vIndex: 375
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    // vIndex: 374
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    // vIndex: 376
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    // vIndex: 390
    virtual ::ArmorTrimUnloader* getArmorTrimUnloader() /*override*/;

    // vIndex: 371
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() /*override*/;

    // vIndex: 384
    virtual void subChunkTickAndSendRequests() /*override*/;

    // vIndex: 387
    virtual ::MapDataManager& _getMapDataManager() /*override*/;

    // vIndex: 393
    virtual void _subTick() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
