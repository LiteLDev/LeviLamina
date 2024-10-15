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
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    MCAPI RangedWeaponItem(std::string const& name, short id);

    MCAPI float getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, short id);

    MCAPI void dtor$();

    MCAPI int
    getAnimationFrameFor$(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    MCAPI int getEnchantValue$() const;

    MCAPI void hurtActor$(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI void releaseUsing$(class ItemStack& item, class Player* player, int durationLeft) const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    // NOLINTEND
};
