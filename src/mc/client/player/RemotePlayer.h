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
    ::ll::UntypedStorage<8, 8>  mUnkca87c8;
    ::ll::UntypedStorage<8, 16> mUnka1e2fb;
    ::ll::UntypedStorage<8, 32> mUnk58ac1b;
    ::ll::UntypedStorage<4, 4>  mUnk79732d;
    ::ll::UntypedStorage<1, 1>  mUnkfb36e4;
    ::ll::UntypedStorage<1, 1>  mUnk778702;
    // NOLINTEND

public:
    // prevent constructor by default
    RemotePlayer& operator=(RemotePlayer const&);
    RemotePlayer(RemotePlayer const&);
    RemotePlayer();

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
