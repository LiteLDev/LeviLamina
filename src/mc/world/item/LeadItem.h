#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class LeadItem : public ::Item {
public:
    // prevent constructor by default
    LeadItem& operator=(LeadItem const&);
    LeadItem(LeadItem const&);
    LeadItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LeadItem() = default;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI LeadItem(std::string const& name, int id);

    MCAPI static bool bindPlayerMobs(class Actor&, int x, int y, int z, class ItemInstance* itemUsed);

    MCAPI static bool canBindPlayerMobs(class Actor const& entity, class BlockPos const& blockPos);

    // NOLINTEND
};
