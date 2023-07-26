#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WritableBookItem : public ::Item {

public:
    // prevent constructor by default
    WritableBookItem& operator=(WritableBookItem const&) = delete;
    WritableBookItem(WritableBookItem const&)            = delete;
    WritableBookItem()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 59
     * @symbol ?requiresInteract\@WritableBookItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?use\@WritableBookItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 121
     * @symbol
     * ?getInteractText\@WritableBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const; // NOLINT
    /**
     * @symbol ?addPageAt\@WritableBookItem\@\@SAXAEAVItemStack\@\@HAEBUPageContent\@\@\@Z
     */
    MCAPI static void addPageAt(class ItemStack&, int, struct PageContent const&); // NOLINT
    /**
     * @symbol ?deletePage\@WritableBookItem\@\@SA?AUPageContent\@\@AEAVItemStack\@\@H\@Z
     */
    MCAPI static struct PageContent deletePage(class ItemStack&, int); // NOLINT
    /**
     * @symbol ?replacePage\@WritableBookItem\@\@SAXAEAVItemStack\@\@HAEBUPageContent\@\@\@Z
     */
    MCAPI static void replacePage(class ItemStack&, int, struct PageContent const&); // NOLINT
    /**
     * @symbol
     * ?signBook\@WritableBookItem\@\@SAXAEAVItemStack\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11\@Z
     */
    MCAPI static void signBook(class ItemStack&, std::string, std::string, std::string); // NOLINT
    /**
     * @symbol ?swapPages\@WritableBookItem\@\@SAXAEAVItemStack\@\@HH\@Z
     */
    MCAPI static void swapPages(class ItemStack&, int, int); // NOLINT
};
