#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class UndyedShulkerBoxBlock : public ::ChestBlock {
public:
    // prevent constructor by default
    UndyedShulkerBoxBlock& operator=(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UndyedShulkerBoxBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    MCAPI UndyedShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isValidAttach(class BlockSource& region, class BlockPos pos, uchar direction) const;

    MCAPI static bool _tryGetShape(class IConstBlockSource const&, class BlockPos const&, class AABB&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
