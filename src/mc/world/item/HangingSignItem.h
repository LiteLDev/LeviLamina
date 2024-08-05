#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/SignItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
};
