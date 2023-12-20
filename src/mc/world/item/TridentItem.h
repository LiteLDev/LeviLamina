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

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 19, symbol: ?isThrowable@TridentItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 33, symbol: ?getMaxDamage@TridentItem@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 34, symbol: ?getAttackDamage@TridentItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: ?canDestroyInCreative@TridentItem@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@TridentItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 48, symbol: ?getEnchantSlot@TridentItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 49, symbol: ?getEnchantValue@TridentItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: ?use@TridentItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 71, symbol: ?dispense@TridentItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 73, symbol: ?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;

    // vIndex: 75, symbol: ?hurtActor@TridentItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

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
