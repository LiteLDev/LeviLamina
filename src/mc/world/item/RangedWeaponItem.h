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

class RangedWeaponItem : public ::Item {
public:
    // prevent constructor by default
    RangedWeaponItem& operator=(RangedWeaponItem const&);
    RangedWeaponItem(RangedWeaponItem const&);
    RangedWeaponItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedWeaponItem();

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& itemInstance, class Actor& actor, class Mob& attacker) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    MCAPI RangedWeaponItem(std::string const& name, short id);

    MCAPI float getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;

    // NOLINTEND
};
