#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    // vIndex: 0, symbol: __gen_??1CrossbowItem@@UEAA@XZ
    virtual ~CrossbowItem() = default;

    // vIndex: 5, symbol: ?getMaxUseDuration@CrossbowItem@@UEBAHPEBVItemStack@@@Z
    virtual int getMaxUseDuration(class ItemStack const* instance) const;

    // vIndex: 50, symbol: ?getEnchantSlot@CrossbowItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 72, symbol: ?use@CrossbowItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 74, symbol:
    // ?useTimeDepleted@CrossbowItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 75, symbol: ?releaseUsing@CrossbowItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 96, symbol: ?enchantProjectile@CrossbowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
    virtual void enchantProjectile(class ItemStackBase const&, class Actor& projectile) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@CrossbowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@CrossbowItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@CrossbowItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 110, symbol: ?canBeCharged@CrossbowItem@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 111, symbol: ?playSoundIncrementally@CrossbowItem@@UEBAXAEBVItemStack@@AEAVMob@@@Z
    virtual void playSoundIncrementally(class ItemStack const& item, class Mob& mob) const;

    // symbol: ??0CrossbowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CrossbowItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getMaxUseDuration@CrossbowItem@@AEBA?BHAEBVItemStack@@@Z
    MCAPI int const _getMaxUseDuration(class ItemStack const& instance) const;

    // symbol: ?_getShootDir@CrossbowItem@@AEBA?AVVec3@@AEBVPlayer@@M@Z
    MCAPI class Vec3 _getShootDir(class Player const& player, float angleOffset) const;

    // symbol: ?_shootArrow@CrossbowItem@@AEBAXAEBVItemInstance@@0AEAVPlayer@@@Z
    MCAPI void
    _shootArrow(class ItemInstance const& crossbow, class ItemInstance const& projectileInstance, class Player& player)
        const;

    // symbol: ?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z
    MCAPI void _shootFirework(class ItemInstance const& projectileInstance, class Player& player) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_USE_DURATION@CrossbowItem@@0HB
    MCAPI static int const DEFAULT_USE_DURATION;

    // NOLINTEND
};
