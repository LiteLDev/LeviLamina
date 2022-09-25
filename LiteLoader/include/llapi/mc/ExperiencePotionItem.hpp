/**
 * @file  ExperiencePotionItem.hpp
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
 * @brief MC class ExperiencePotionItem.
 *
 */
class ExperiencePotionItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEPOTIONITEM
public:
    class ExperiencePotionItem& operator=(class ExperiencePotionItem const &) = delete;
    ExperiencePotionItem(class ExperiencePotionItem const &) = delete;
    ExperiencePotionItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ExperiencePotionItem();
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
     * @hash   488416222
     * @vftbl  23
     * @symbol ?isThrowable@ExperiencePotionItem@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @hash   1624999769
     * @vftbl  51
     * @symbol ?isGlint@ExperiencePotionItem@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
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
     * @hash   -2071915314
     * @vftbl  85
     * @symbol ?use@ExperiencePotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   838868924
     * @vftbl  86
     * @symbol ?dispense@ExperiencePotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   318740798
     * @symbol ??0ExperiencePotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ExperiencePotionItem(std::string const &, int);

};