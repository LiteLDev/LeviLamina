#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BellBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    BellBlockItem& operator=(BellBlockItem const&);
    BellBlockItem(BellBlockItem const&);
    BellBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BellBlockItem() = default;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI BellBlockItem(std::string const& name, int id);

    // NOLINTEND
};
