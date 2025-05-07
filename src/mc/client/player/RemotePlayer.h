#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/LocalPlayer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/Player.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ComplexInventoryTransaction;
class Container;
class FrameUpdateContextBase;
class IContainerManager;
class InventoryTransaction;
class ItemStack;
class LocalPlayer;
class PlayerEventCoordinator;
class Vec2;
class Vec3;
struct Tick;
namespace Editor { class IEditorPlayer; }
// clang-format on

class RemotePlayer : public ::Player, public ::LocalPlayer::RegionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>           mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 32, ::std::string>           mQueuedEmote;
    ::ll::TypedStorage<4, 4, int>                      mEmoteQueuedTicks;
    ::ll::TypedStorage<1, 1, bool>                     mTicked;
    ::ll::TypedStorage<1, 1, bool>                     mQueuedEmotePlayChatMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemotePlayer() /*override*/ = default;

    // vIndex: 177
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 178
    virtual void destroyRegion() /*override*/;

    // vIndex: 179
    virtual void suspendRegion() /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 182
    virtual void tickWorld(::Tick const&) /*override*/;

    // vIndex: 183
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 220
    virtual void setContainerData(::IContainerManager&, int, int) /*override*/;

    // vIndex: 221
    virtual void
    slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) /*override*/;

    // vIndex: 222
    virtual void refreshContainer(::IContainerManager&) /*override*/;

    // vIndex: 214
    virtual void initHUDContainerManager() /*override*/;

    // vIndex: 225
    virtual bool isTeacher() const /*override*/;

    // vIndex: 209
    virtual void playEmote(::std::string const&, bool const) /*override*/;

    // vIndex: 228
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const /*override*/;

    // vIndex: 68
    virtual void feed(int itemId) /*override*/;

    // vIndex: 229
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const /*override*/;

    // vIndex: 231
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 241
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 237
    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot) /*override*/;

    // vIndex: 1
    virtual void onRegionDestroyed() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
