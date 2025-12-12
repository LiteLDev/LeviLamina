#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class IConstBlockSource;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class TrapDoorBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    virtual bool canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    virtual ~TrapDoorBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void toggleOpen(::BlockSource& region, ::Actor* user, ::BlockPos const& pos) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(::Block const& block, ::AABB& bufferAABB, bool addBufferSpacing);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& TRAP_DOOR_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI bool $canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
