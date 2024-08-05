#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/WeaponItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MaceItem : public ::WeaponItem {
public:
    // prevent constructor by default
    MaceItem& operator=(MaceItem const&);
    MaceItem(MaceItem const&);
    MaceItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaceItem() = default;

    // vIndex: 36
    virtual float getAttackDamageBonus(class Actor const&, float) const;

    // vIndex: 49
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI MaceItem(std::string const&, int, class Item::Tier const&);

    // NOLINTEND
};
