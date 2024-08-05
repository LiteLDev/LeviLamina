#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    // vIndex: 119
    virtual class Block const* getBlockToPlace(uchar face, class Actor const& entity, class BlockPos pos) const;

    MCAPI SignItem(std::string const& name, int id, ::SignBlock::SignType type);

    // NOLINTEND
};
