#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class SaveContext;
class Vec3;
// clang-format on

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb764b6;
    ::ll::UntypedStorage<1, 1> mUnk997f90;
    // NOLINTEND

public:
    // prevent constructor by default
    ShulkerBoxBlockActor& operator=(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxBlockActor() /*override*/ = default;

    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 49
    virtual void playOpenSound(::BlockSource& region) /*override*/;

    // vIndex: 50
    virtual void playCloseSound(::BlockSource& region) /*override*/;

    // vIndex: 52
    virtual ::AABB getObstructionAABB() const /*override*/;

    // vIndex: 53
    virtual bool _detectEntityObstruction(::BlockSource& region) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShulkerBoxBlockActor(
        ::BlockActorType       type,
        ::std::string const&   id,
        ::BlockActorRendererId renderId,
        ::BlockPos const&      pos
    );

    MCAPI void _addRedstoneComponent(::BlockSource& region) const;

    MCAPI void _calculateBB();

    MCAPI ::Vec3 _calculateMovementWithCollisions(::BlockSource& region, ::Actor* actor) const;

    MCAPI void setFacingDir(uchar facing);

    MCAPI void setupRedstoneComponent(::BlockSource& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool itemAllowedInSlot(int, ::ItemStackBase const& item, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& ITEMS_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BlockActorType type, ::std::string const& id, ::BlockActorRendererId renderId, ::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI void $playOpenSound(::BlockSource& region);

    MCAPI void $playCloseSound(::BlockSource& region);

    MCAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
