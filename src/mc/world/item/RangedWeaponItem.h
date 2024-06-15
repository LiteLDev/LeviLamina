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
    // vIndex: 0, symbol: ??1RangedWeaponItem@@UEAA@XZ
    virtual ~RangedWeaponItem();

    // vIndex: 51, symbol: ?getEnchantValue@RangedWeaponItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 72, symbol: ?use@RangedWeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 76, symbol: ?releaseUsing@RangedWeaponItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 78, symbol: ?hurtActor@RangedWeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& itemInstance, class Actor& actor, class Mob& attacker) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@RangedWeaponItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // symbol: ??0RangedWeaponItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI RangedWeaponItem(std::string const& name, short id);

    // symbol: ?getLaunchPower@RangedWeaponItem@@QEBAMHHH@Z
    MCAPI float getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;

    // NOLINTEND
};
