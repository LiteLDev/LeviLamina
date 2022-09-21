/**
 * @file  MC/DiggerItem.hpp
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
 * @brief MC class DiggerItem.
 *
 */
class DiggerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEM
public:
    class DiggerItem& operator=(class DiggerItem const &) = delete;
    DiggerItem(class DiggerItem const &) = delete;
    DiggerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DiggerItem();
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
     * @hash   -1132777133
     * @vftbl  49
     * @symbol ?getAttackDamage@DiggerItem@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @hash   166782123
     * @vftbl  50
     * @symbol ?isHandEquipped@DiggerItem@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
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
     * @hash   878164122
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@DiggerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @hash   179908605
     * @vftbl  62
     * @symbol ?isValidRepairItem@DiggerItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @hash   376146388
     * @vftbl  64
     * @symbol ?getEnchantValue@DiggerItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
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
     * @hash   1432773829
     * @vftbl  89
     * @symbol ?getDestroySpeed@DiggerItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   -976816410
     * @vftbl  94
     * @symbol ?mineBlock@DiggerItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -637343514
     * @symbol ?setBlocks@DiggerItem@@QEAAXAEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@std@@@Z
     */
    MCAPI void setBlocks(std::vector<class Block const *> const &);

//protected:
    /**
     * @hash   -2087098104
     * @symbol ??0DiggerItem@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHAEBVTier@Item@@AEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@2@@Z
     */
    MCAPI DiggerItem(std::string const &, int, int, class Item::Tier const &, std::vector<class Block const *> const &);

protected:

};