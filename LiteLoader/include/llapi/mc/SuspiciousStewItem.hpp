/**
 * @file  SuspiciousStewItem.hpp
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
 * @brief MC class SuspiciousStewItem.
 *
 */
class SuspiciousStewItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPICIOUSSTEWITEM
public:
    class SuspiciousStewItem& operator=(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SuspiciousStewItem();
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
     * @hash   -59799645
     * @vftbl  87
     * @symbol ?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPICIOUSSTEWITEM
    /**
     * @hash   -1960403702
     * @symbol ?uniqueAuxValues@SuspiciousStewItem@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   560240310
     * @symbol ??0SuspiciousStewItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI SuspiciousStewItem(std::string const &, short);
    /**
     * @hash   69847149
     * @symbol ?applyStewEffect@SuspiciousStewItem@@SAXAEBVItemStack@@AEAVActor@@@Z
     */
    MCAPI static void applyStewEffect(class ItemStack const &, class Actor &);

};