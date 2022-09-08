/**
 * @file  ChemistryStickItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -608507959
     */
    virtual ~ChemistryStickItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  31
     * @symbol ?setMaxDamage@ChemistryStickItem@@UEAAAEAVItem@@H@Z
     * @hash   1088719487
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -224495357
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  62
     * @symbol ?isValidRepairItem@ChemistryStickItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -1947695961
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -168160576
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  85
     * @symbol ?use@ChemistryStickItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   1092135551
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  87
     * @symbol ?useTimeDepleted@ChemistryStickItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   -1233924049
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  90
     * @symbol ?hurtActor@ChemistryStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   1781454749
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  94
     * @symbol ?mineBlock@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   1042237596
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  102
     * @symbol ?inventoryTick@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   1173259119
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  106
     * @symbol ?fixupCommon@ChemistryStickItem@@UEBAXAEAVItemStackBase@@@Z
     * @hash   -1294746334
     */
    virtual void fixupCommon(class ItemStackBase &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYSTICKITEM
    /**
     * @symbol ?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ
     * @hash   -1567906388
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @symbol ?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ
     * @hash   1947406734
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0ChemistryStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1094547789
     */
    MCAPI ChemistryStickItem(std::string const &, int);
    /**
     * @symbol ?getColorType@ChemistryStickItem@@SA?AW4ItemColor@@H@Z
     * @hash   1930391157
     */
    MCAPI static enum ItemColor getColorType(int);
    /**
     * @symbol ?isActive@ChemistryStickItem@@SA_NH@Z
     * @hash   -899256827
     */
    MCAPI static bool isActive(int);
    /**
     * @symbol ?isChemistryStick@ChemistryStickItem@@SA_NAEBVItemStackBase@@@Z
     * @hash   1643576535
     */
    MCAPI static bool isChemistryStick(class ItemStackBase const &);

//protected:
    /**
     * @symbol ?_getColorName@ChemistryStickItem@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   2078681671
     */
    MCAPI std::string _getColorName(int) const;
    /**
     * @symbol ?_tick@ChemistryStickItem@@IEBA_NAEAVItemStack@@_K@Z
     * @hash   834140286
     */
    MCAPI bool _tick(class ItemStack &, unsigned __int64) const;

//private:
    /**
     * @symbol ?_storeActivationTimestamp@ChemistryStickItem@@AEBAXAEAVItemStack@@_KH@Z
     * @hash   -1628833490
     */
    MCAPI void _storeActivationTimestamp(class ItemStack &, unsigned __int64, int) const;

protected:

private:
    /**
     * @symbol ?ACTIVATION_TIMESTAMP_TAG@ChemistryStickItem@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   287436812
     */
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;
    /**
     * @symbol ?ACTIVE_BIT@ChemistryStickItem@@0HB
     * @hash   -1226883311
     */
    MCAPI static int const ACTIVE_BIT;
    /**
     * @symbol ?COLOR_BITS@ChemistryStickItem@@0HB
     * @hash   -1811213289
     */
    MCAPI static int const COLOR_BITS;
    /**
     * @symbol ?COLOR_MASK@ChemistryStickItem@@0HB
     * @hash   -1002266943
     */
    MCAPI static int const COLOR_MASK;
    /**
     * @symbol ?DAMAGE_BITS@ChemistryStickItem@@0HB
     * @hash   634142779
     */
    MCAPI static int const DAMAGE_BITS;
    /**
     * @symbol ?DAMAGE_MASK@ChemistryStickItem@@0HB
     * @hash   1443089125
     */
    MCAPI static int const DAMAGE_MASK;
    /**
     * @symbol ?DAMAGE_START_BIT@ChemistryStickItem@@0HB
     * @hash   -470961151
     */
    MCAPI static int const DAMAGE_START_BIT;

};