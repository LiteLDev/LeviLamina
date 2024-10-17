#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RedStoneDustItem : public ::Item {
public:
    // prevent constructor by default
    RedStoneDustItem& operator=(RedStoneDustItem const&);
    RedStoneDustItem(RedStoneDustItem const&);
    RedStoneDustItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RedStoneDustItem() = default;

    // vIndex: 116
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _calculatePlacePos$(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
