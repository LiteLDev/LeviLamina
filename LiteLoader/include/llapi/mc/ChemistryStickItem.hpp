/**
 * @file  ChemistryStickItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChemistryStickItem.
 *
 */
class ChemistryStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYSTICKITEM
public:
    class ChemistryStickItem& operator=(class ChemistryStickItem const &) = delete;
    ChemistryStickItem(class ChemistryStickItem const &) = delete;
    ChemistryStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChemistryStickItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1088719487
     * @vftbl  31
     * @symbol ?setMaxDamage@ChemistryStickItem@@UEAAAEAVItem@@H@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1947695961
     * @vftbl  62
     * @symbol ?isValidRepairItem@ChemistryStickItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1092135551
     * @vftbl  85
     * @symbol ?use@ChemistryStickItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1233924049
     * @vftbl  87
     * @symbol ?useTimeDepleted@ChemistryStickItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   1781454749
     * @vftbl  90
     * @symbol ?hurtActor@ChemistryStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1042237596
     * @vftbl  94
     * @symbol ?mineBlock@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   1173259119
     * @vftbl  102
     * @symbol ?inventoryTick@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   -1294746334
     * @vftbl  106
     * @symbol ?fixupCommon@ChemistryStickItem@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYSTICKITEM
    /**
     * @hash   -1567906388
     * @symbol ?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @hash   1947406734
     * @symbol ?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   1094547789
     * @symbol ??0ChemistryStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ChemistryStickItem(std::string const &, int);
    /**
     * @hash   1930391157
     * @symbol ?getColorType@ChemistryStickItem@@SA?AW4ItemColor@@H@Z
     */
    MCAPI static enum class ItemColor getColorType(int);
    /**
     * @hash   -899256827
     * @symbol ?isActive@ChemistryStickItem@@SA_NH@Z
     */
    MCAPI static bool isActive(int);
    /**
     * @hash   1643576535
     * @symbol ?isChemistryStick@ChemistryStickItem@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isChemistryStick(class ItemStackBase const &);

//protected:
    /**
     * @hash   2078681671
     * @symbol ?_getColorName@ChemistryStickItem@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI std::string _getColorName(int) const;
    /**
     * @hash   834140286
     * @symbol ?_tick@ChemistryStickItem@@IEBA_NAEAVItemStack@@_K@Z
     */
    MCAPI bool _tick(class ItemStack &, unsigned __int64) const;

//private:
    /**
     * @hash   -1628833490
     * @symbol ?_storeActivationTimestamp@ChemistryStickItem@@AEBAXAEAVItemStack@@_KH@Z
     */
    MCAPI void _storeActivationTimestamp(class ItemStack &, unsigned __int64, int) const;

protected:

private:
    /**
     * @hash   287436812
     * @symbol ?ACTIVATION_TIMESTAMP_TAG@ChemistryStickItem@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;
    /**
     * @hash   -1226883311
     * @symbol ?ACTIVE_BIT@ChemistryStickItem@@0HB
     */
    MCAPI static int const ACTIVE_BIT;
    /**
     * @hash   -1811213289
     * @symbol ?COLOR_BITS@ChemistryStickItem@@0HB
     */
    MCAPI static int const COLOR_BITS;
    /**
     * @hash   -1002266943
     * @symbol ?COLOR_MASK@ChemistryStickItem@@0HB
     */
    MCAPI static int const COLOR_MASK;
    /**
     * @hash   634142779
     * @symbol ?DAMAGE_BITS@ChemistryStickItem@@0HB
     */
    MCAPI static int const DAMAGE_BITS;
    /**
     * @hash   1443089125
     * @symbol ?DAMAGE_MASK@ChemistryStickItem@@0HB
     */
    MCAPI static int const DAMAGE_MASK;
    /**
     * @hash   -470961151
     * @symbol ?DAMAGE_START_BIT@ChemistryStickItem@@0HB
     */
    MCAPI static int const DAMAGE_START_BIT;

};