#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChemistryStickItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    ChemistryStickItem& operator=(ChemistryStickItem const&);
    ChemistryStickItem(ChemistryStickItem const&);
    ChemistryStickItem();

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

    // vIndex: 30, symbol: ?setMaxDamage@ChemistryStickItem@@UEAAAEAVItem@@H@Z
    virtual class Item& setMaxDamage(int);

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 61, symbol: ?isValidRepairItem@ChemistryStickItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

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

    // vIndex: 84, symbol: ?use@ChemistryStickItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 86, symbol:
    // ?useTimeDepleted@ChemistryStickItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 89, symbol: ?hurtActor@ChemistryStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 93, symbol: ?mineBlock@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 101, symbol: ?inventoryTick@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;

    // vIndex: 105, symbol: ?fixupCommon@ChemistryStickItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // symbol: ?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ
    MCVAPI bool showsDurabilityInCreative() const;

    // symbol: ?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol: ??1ChemistryStickItem@@UEAA@XZ
    MCVAPI ~ChemistryStickItem();

    // symbol: ??0ChemistryStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChemistryStickItem(std::string const&, int);

    // symbol: ?getColorType@ChemistryStickItem@@SA?AW4ItemColor@@H@Z
    MCAPI static ::ItemColor getColorType(int);

    // symbol: ?isActive@ChemistryStickItem@@SA_NH@Z
    MCAPI static bool isActive(int);

    // symbol: ?isChemistryStick@ChemistryStickItem@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isChemistryStick(class ItemStackBase const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getColorName@ChemistryStickItem@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string _getColorName(int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_storeActivationTimestamp@ChemistryStickItem@@AEBAXAEAVItemStack@@_KH@Z
    MCAPI void _storeActivationTimestamp(class ItemStack&, uint64, int) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?ACTIVATION_TIMESTAMP_TAG@ChemistryStickItem@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;

    // symbol: ?ACTIVE_BIT@ChemistryStickItem@@0HB
    MCAPI static int const ACTIVE_BIT;

    // symbol: ?COLOR_BITS@ChemistryStickItem@@0HB
    MCAPI static int const COLOR_BITS;

    // symbol: ?COLOR_MASK@ChemistryStickItem@@0HB
    MCAPI static int const COLOR_MASK;

    // symbol: ?DAMAGE_BITS@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_BITS;

    // symbol: ?DAMAGE_MASK@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_MASK;

    // symbol: ?DAMAGE_START_BIT@ChemistryStickItem@@0HB
    MCAPI static int const DAMAGE_START_BIT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $ACTIVATION_TIMESTAMP_TAG() { return ACTIVATION_TIMESTAMP_TAG; }

    auto& $ACTIVE_BIT() { return ACTIVE_BIT; }

    auto& $COLOR_BITS() { return COLOR_BITS; }

    auto& $COLOR_MASK() { return COLOR_MASK; }

    auto& $DAMAGE_BITS() { return DAMAGE_BITS; }

    auto& $DAMAGE_MASK() { return DAMAGE_MASK; }

    auto& $DAMAGE_START_BIT() { return DAMAGE_START_BIT; }

    // NOLINTEND
};
