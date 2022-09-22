/**
 * @file  HatchetItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"
#include "DiggerItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HatchetItem.
 *
 */
class HatchetItem : public DiggerItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HATCHETITEM
public:
    class HatchetItem& operator=(class HatchetItem const &) = delete;
    HatchetItem(class HatchetItem const &) = delete;
    HatchetItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HatchetItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -950859721
     * @vftbl  10
     * @symbol ?executeEvent@HatchetItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
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
     * @hash   -908987350
     * @vftbl  63
     * @symbol ?getEnchantSlot@HatchetItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
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
     * @hash   -497626504
     * @vftbl  89
     * @symbol ?getDestroySpeed@HatchetItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @hash   1068951479
     * @symbol ??0HatchetItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
     */
    MCAPI HatchetItem(std::string const &, int, class Item::Tier const &);

};