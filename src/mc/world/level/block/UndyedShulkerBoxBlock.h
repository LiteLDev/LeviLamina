#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/ChestBlock.h"

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
    virtual class AABB getCollisionShape(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

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

    MCAPI static bool
    _tryGetShape(class IConstBlockSource const& region, class BlockPos const& pos, class AABB& outValue);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
