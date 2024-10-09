#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CrossbowItem : public ::RangedWeaponItem {
public:
    // prevent constructor by default
    CrossbowItem& operator=(CrossbowItem const&);
    CrossbowItem(CrossbowItem const&);
    CrossbowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrossbowItem() = default;

    // vIndex: 5
    virtual int getMaxUseDuration(class ItemStack const* instance) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 96
    virtual void enchantProjectile(class ItemStackBase const& weapon, class Actor& projectile) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 110
    virtual bool canBeCharged() const;

    // vIndex: 111
    virtual void playSoundIncrementally(class ItemStack const& item, class Mob& mob) const;

    MCAPI CrossbowItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int const _getMaxUseDuration(class ItemStack const& instance) const;

    MCAPI class Vec3 _getShootDir(class Player const& player, float angleOffset) const;

    MCAPI void
    _shootArrow(class ItemInstance const& crossbow, class ItemInstance const& projectileInstance, class Player& player)
        const;

    MCAPI void _shootFirework(class ItemInstance const& projectileInstance, class Player& player) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const DEFAULT_USE_DURATION;

    // NOLINTEND
};
