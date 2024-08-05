#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShovelItem : public ::DiggerItem {
public:
    // prevent constructor by default
    ShovelItem& operator=(ShovelItem const&);
    ShovelItem(ShovelItem const&);
    ShovelItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShovelItem() = default;

    // vIndex: 7
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI ShovelItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND
};
