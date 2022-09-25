/**
 * @file  WarpedFungusOnAStickItem.hpp
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
 * @brief MC class WarpedFungusOnAStickItem.
 *
 */
class WarpedFungusOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARPEDFUNGUSONASTICKITEM
public:
    class WarpedFungusOnAStickItem& operator=(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WarpedFungusOnAStickItem();
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
     * @hash   1004130690
     * @vftbl  50
     * @symbol ?isHandEquipped@WarpedFungusOnAStickItem@@UEBA_NXZ
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
     * @hash   -420483250
     * @vftbl  60
     * @symbol ?requiresInteract@WarpedFungusOnAStickItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   -1895104994
     * @vftbl  63
     * @symbol ?getEnchantSlot@WarpedFungusOnAStickItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @hash   1903857003
     * @vftbl  64
     * @symbol ?getEnchantValue@WarpedFungusOnAStickItem@@UEBAHXZ
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
     * @hash   543184621
     * @vftbl  94
     * @symbol ?mineBlock@WarpedFungusOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   2006284684
     * @symbol ??0WarpedFungusOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI WarpedFungusOnAStickItem(std::string const &, int);

};