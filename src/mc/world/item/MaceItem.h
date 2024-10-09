#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/WeaponItem.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual float getAttackDamageBonus(class Actor const& attacker, float) const;

    // vIndex: 49
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const& repairItem, class BaseGameVersion const&)
        const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    MCAPI MaceItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND
};
