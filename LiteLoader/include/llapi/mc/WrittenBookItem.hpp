/**
 * @file  WrittenBookItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../Item.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~WrittenBookItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1839595507
     * @vftbl  50
     * @symbol  ?isGlint\@WrittenBookItem\@\@MEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   2007895545
     * @vftbl  59
     * @symbol  ?requiresInteract\@WrittenBookItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @hash   1651017308
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@WrittenBookItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   1256788683
     * @vftbl  84
     * @symbol  ?use\@WrittenBookItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1283769991
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1515172782
     * @vftbl  119
     * @symbol  ?getInteractText\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   533174673
     * @symbol  ??0WrittenBookItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI WrittenBookItem(std::string const &, int);
    /**
     * @hash   -362440887
     * @symbol  ?MAX_GENERATION\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_GENERATION;
    /**
     * @hash   -1607880749
     * @symbol  ?MAX_PAGES\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGES;
    /**
     * @hash   -2043084813
     * @symbol  ?MAX_PAGE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGE_LENGTH;
    /**
     * @hash   1137099815
     * @symbol  ?MAX_TITLE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_TITLE_LENGTH;
    /**
     * @hash   -1047122863
     * @symbol  ?TAG_AUTHOR\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
    /**
     * @hash   -1872035279
     * @symbol  ?TAG_GENERATION\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
    /**
     * @hash   953307969
     * @symbol  ?TAG_ID\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
    /**
     * @hash   1397021935
     * @symbol  ?TAG_PAGES\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
    /**
     * @hash   958316783
     * @symbol  ?TAG_PAGE_PHOTO_NAME\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
    /**
     * @hash   -229321953
     * @symbol  ?TAG_PAGE_TEXT\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
    /**
     * @hash   -1979853183
     * @symbol  ?TAG_RESOLVED\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
    /**
     * @hash   -787063489
     * @symbol  ?TAG_TITLE\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
    /**
     * @hash   577075905
     * @symbol  ?TAG_XUID\@WrittenBookItem\@\@2V?$basic_string_span\@$$CBD$0?0\@gsl\@\@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    /**
     * @hash   -1423341978
     * @symbol  ?canBeCopied\@WrittenBookItem\@\@SA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool canBeCopied(class CompoundTag const *);
    /**
     * @hash   -340794364
     * @symbol  ?getGeneration\@WrittenBookItem\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getGeneration(class CompoundTag const *);
    /**
     * @hash   511973701
     * @symbol  ?getPageCount\@WrittenBookItem\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getPageCount(class ItemStack const &);
    /**
     * @hash   711033589
     * @symbol  ?getPages\@WrittenBookItem\@\@SA?AV?$vector\@UPageContent\@\@V?$allocator\@UPageContent\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

};