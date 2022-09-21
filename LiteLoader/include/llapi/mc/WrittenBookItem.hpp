/**
 * @file  MC/WrittenBookItem.hpp
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
 * @brief MC class WrittenBookItem.
 *
 */
class WrittenBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    class WrittenBookItem& operator=(class WrittenBookItem const &) = delete;
    WrittenBookItem(class WrittenBookItem const &) = delete;
    WrittenBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WrittenBookItem();
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
     * @hash   1739697635
     * @vftbl  51
     * @symbol ?isGlint@WrittenBookItem@@MEBA_NAEBVItemStackBase@@@Z
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
     * @hash   1907997673
     * @vftbl  60
     * @symbol ?requiresInteract@WrittenBookItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   771094956
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@WrittenBookItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
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
     * @hash   376958587
     * @vftbl  85
     * @symbol ?use@WrittenBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   403847639
     * @vftbl  96
     * @symbol ?buildDescriptionId@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   635281182
     * @vftbl  118
     * @symbol ?getInteractText@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   -346747679
     * @symbol ??0WrittenBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI WrittenBookItem(std::string const &, int);
    /**
     * @hash   -1405933127
     * @symbol ?MAX_GENERATION@WrittenBookItem@@2HB
     */
    MCAPI static int const MAX_GENERATION;
    /**
     * @hash   1643594307
     * @symbol ?MAX_PAGES@WrittenBookItem@@2HB
     */
    MCAPI static int const MAX_PAGES;
    /**
     * @hash   1208390243
     * @symbol ?MAX_PAGE_LENGTH@WrittenBookItem@@2HB
     */
    MCAPI static int const MAX_PAGE_LENGTH;
    /**
     * @hash   93607575
     * @symbol ?MAX_TITLE_LENGTH@WrittenBookItem@@2HB
     */
    MCAPI static int const MAX_TITLE_LENGTH;
    /**
     * @hash   -1946126831
     * @symbol ?TAG_AUTHOR@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
    /**
     * @hash   1523928049
     * @symbol ?TAG_GENERATION@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
    /**
     * @hash   54304001
     * @symbol ?TAG_ID@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
    /**
     * @hash   498017967
     * @symbol ?TAG_PAGES@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
    /**
     * @hash   59312815
     * @symbol ?TAG_PAGE_PHOTO_NAME@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
    /**
     * @hash   -1128325921
     * @symbol ?TAG_PAGE_TEXT@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
    /**
     * @hash   1416110145
     * @symbol ?TAG_RESOLVED@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
    /**
     * @hash   -1686067457
     * @symbol ?TAG_TITLE@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
    /**
     * @hash   -321928063
     * @symbol ?TAG_XUID@WrittenBookItem@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    /**
     * @hash   1991718342
     * @symbol ?canBeCopied@WrittenBookItem@@SA_NPEBVCompoundTag@@@Z
     */
    MCAPI static bool canBeCopied(class CompoundTag const *);
    /**
     * @hash   -1220701340
     * @symbol ?getGeneration@WrittenBookItem@@SAHPEBVCompoundTag@@@Z
     */
    MCAPI static int getGeneration(class CompoundTag const *);
    /**
     * @hash   -367948651
     * @symbol ?getPageCount@WrittenBookItem@@SAHAEBVItemStack@@@Z
     */
    MCAPI static int getPageCount(class ItemStack const &);
    /**
     * @hash   -168858011
     * @symbol ?getPages@WrittenBookItem@@SA?AV?$vector@UPageContent@@V?$allocator@UPageContent@@@std@@@std@@AEBVItemStack@@@Z
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

};