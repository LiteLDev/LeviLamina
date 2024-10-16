#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TrapDoorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TrapDoorBlock& operator=(TrapDoorBlock const&);
    TrapDoorBlock(TrapDoorBlock const&);
    TrapDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TrapDoorBlock();

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const&, uchar face, class Vec3 const& clickPos, int) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI TrapDoorBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void setOpen(class BlockSource& region, class BlockPos const& pos, bool shouldOpen) const;

    MCAPI void toggleOpen(class BlockSource& region, class Actor* user, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AABB const& _getShape(class Block const& block, class AABB& bufferAABB, bool addBufferSpacing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void dtor$();

    MCAPI void _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canConnect$(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool canProvideSupport$(class Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI bool
    checkIsPathable$(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const&, uchar face, class Vec3 const& clickPos, int) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI static class BaseGameVersion const& TRAP_DOOR_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    // NOLINTEND
};
