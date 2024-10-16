#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SlabBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    SlabBlockItem& operator=(SlabBlockItem const&);
    SlabBlockItem(SlabBlockItem const&);
    SlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlabBlockItem() = default;

    // vIndex: 116
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& actor, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI SlabBlockItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _canConvertToDoubleBlock(class ItemStackBase& instance, class Actor&, uchar& face, class Block const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI bool
    _calculatePlacePos$(class ItemStackBase& instance, class Actor& actor, uchar& face, class BlockPos& pos) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
