/**
 * @file  MC/WritableBookItem.hpp
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
 * @brief MC class WritableBookItem.
 *
 */
class WritableBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITABLEBOOKITEM
public:
    class WritableBookItem& operator=(class WritableBookItem const &) = delete;
    WritableBookItem(class WritableBookItem const &) = delete;
    WritableBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WritableBookItem();
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
     * @hash   -926640096
     * @vftbl  60
     * @symbol ?requiresInteract@WritableBookItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
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
     * @hash   -388087998
     * @vftbl  85
     * @symbol ?use@WritableBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1575895177
     * @vftbl  118
     * @symbol ?getInteractText@WritableBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   800932458
     * @symbol ??0WritableBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI WritableBookItem(std::string const &, int);
    /**
     * @hash   -773655606
     * @symbol ?addPageAt@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
     */
    MCAPI static void addPageAt(class ItemStack &, int, struct PageContent const &);
    /**
     * @hash   -1384502504
     * @symbol ?deletePage@WritableBookItem@@SA?AUPageContent@@AEAVItemStack@@H@Z
     */
    MCAPI static struct PageContent deletePage(class ItemStack &, int);
    /**
     * @hash   -269648678
     * @symbol ?replacePage@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
     */
    MCAPI static void replacePage(class ItemStack &, int, struct PageContent const &);
    /**
     * @hash   -1793995853
     * @symbol ?signBook@WritableBookItem@@SAXAEAVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
     */
    MCAPI static void signBook(class ItemStack &, std::string, std::string, std::string);
    /**
     * @hash   2011739362
     * @symbol ?swapPages@WritableBookItem@@SAXAEAVItemStack@@HH@Z
     */
    MCAPI static void swapPages(class ItemStack &, int, int);

};