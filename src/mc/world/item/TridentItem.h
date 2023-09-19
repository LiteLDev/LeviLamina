#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 23, symbol: ?isThrowable@TridentItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 47, symbol: ?getMaxDamage@TridentItem@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 48, symbol: ?getAttackDamage@TridentItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 55, symbol: ?canDestroyInCreative@TridentItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@TridentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 62, symbol: ?getEnchantSlot@TridentItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 63, symbol: ?getEnchantValue@TridentItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 84, symbol: ?use@TridentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@TridentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 87, symbol: ?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;

    // vIndex: 89, symbol: ?hurtActor@TridentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // symbol: ?CHARGE_THRESHOLD_TIME@TridentItem@@2HB
    MCAPI static int const CHARGE_THRESHOLD_TIME;

    // symbol: ?THROW_THRESHOLD_TIME@TridentItem@@2HB
    MCAPI static int const THROW_THRESHOLD_TIME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setupProjectile@TridentItem@@AEBAPEAVActor@@PEAV2@VItemStack@@_N@Z
    MCAPI class Actor* _setupProjectile(class Actor*, class ItemStack, bool) const;

    // NOLINTEND
};
