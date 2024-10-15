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
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SignItem : public ::Item {
public:
    // prevent constructor by default
    SignItem& operator=(SignItem const&);
    SignItem(SignItem const&);
    SignItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignItem();

    // vIndex: 116
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // vIndex: 119
    virtual class Block const* getBlockToPlace(uchar face, class Actor const& entity, class BlockPos pos) const;

    MCAPI SignItem(std::string const& name, int id, ::SignBlock::SignType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::SignBlock::SignType type);

    MCAPI void dtor$();

    MCAPI bool _calculatePlacePos$(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI class Block const* getBlockToPlace$(uchar face, class Actor const& entity, class BlockPos pos) const;

    // NOLINTEND
};
