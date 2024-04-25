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

class WeaponItem : public ::Item {
public:
    // prevent constructor by default
    WeaponItem& operator=(WeaponItem const&);
    WeaponItem(WeaponItem const&);
    WeaponItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WeaponItem@@UEAA@XZ
    virtual ~WeaponItem();

    // vIndex: 31, symbol: ?canDestroySpecial@WeaponItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 35, symbol: ?getAttackDamage@WeaponItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 37, symbol: ?isHandEquipped@WeaponItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 43, symbol: ?canDestroyInCreative@WeaponItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@WeaponItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49, symbol: ?isValidRepairItem@WeaponItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@WeaponItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@WeaponItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 72, symbol: ?use@WeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 76, symbol: ?getDestroySpeed@WeaponItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 77, symbol: ?hurtActor@WeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // symbol: ??0WeaponItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI WeaponItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND
};
