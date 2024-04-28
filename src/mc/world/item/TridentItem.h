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

class TridentItem : public ::Item {
public:
    // prevent constructor by default
    TridentItem& operator=(TridentItem const&);
    TridentItem(TridentItem const&);
    TridentItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentItem@@UEAA@XZ
    virtual ~TridentItem() = default;

    // vIndex: 19, symbol: ?isThrowable@TridentItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 34, symbol: ?getMaxDamage@TridentItem@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 35, symbol: ?getAttackDamage@TridentItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 43, symbol: ?canDestroyInCreative@TridentItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@TridentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@TridentItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@TridentItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 72, symbol: ?use@TridentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@TridentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 75, symbol: ?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 77, symbol: ?hurtActor@TridentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // symbol: ??0TridentItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TridentItem(std::string const& name, int id);

    // symbol: ?CHARGE_THRESHOLD_TIME@TridentItem@@2HB
    MCAPI static int const CHARGE_THRESHOLD_TIME;

    // symbol: ?THROW_THRESHOLD_TIME@TridentItem@@2HB
    MCAPI static int const THROW_THRESHOLD_TIME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setupProjectile@TridentItem@@AEBAPEAVActor@@PEAV2@VItemStack@@_N@Z
    MCAPI class Actor* _setupProjectile(class Actor*, class ItemStack item, bool creative) const;

    // NOLINTEND
};
