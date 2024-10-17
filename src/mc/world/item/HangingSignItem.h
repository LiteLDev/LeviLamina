#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/SignItem.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // prevent constructor by default
    HangingSignItem& operator=(HangingSignItem const&);
    HangingSignItem(HangingSignItem const&);
    HangingSignItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HangingSignItem() = default;

    // vIndex: 116
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 119
    virtual class Block const* getBlockToPlace(uchar face, class Actor const& entity, class BlockPos pos) const;

    MCAPI HangingSignItem(std::string const& name, int id, ::SignBlock::SignType type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Block const*
    _getCeilingHangingSignBlock(class Actor const& entity, uchar const& face, class BlockPos const& pos) const;

    MCAPI class Block const*
    _getWallHangingSignBlock(class Actor const& entity, uchar const& face, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::SignBlock::SignType type);

    MCAPI bool _calculatePlacePos$(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    MCAPI class Block const* getBlockToPlace$(uchar face, class Actor const& entity, class BlockPos pos) const;

    // NOLINTEND
};
