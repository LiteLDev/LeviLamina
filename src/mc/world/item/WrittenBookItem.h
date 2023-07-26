#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WrittenBookItem : public ::Item {

public:
    // prevent constructor by default
    WrittenBookItem& operator=(WrittenBookItem const&) = delete;
    WrittenBookItem(WrittenBookItem const&)            = delete;
    WrittenBookItem()                                  = delete;

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
     * @vftbl 50
     * @symbol ?isGlint\@WrittenBookItem\@\@MEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const&) const; // NOLINT
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
     * @symbol ?requiresInteract\@WrittenBookItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const; // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@WrittenBookItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
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
     * @symbol ?use\@WrittenBookItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
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
     * ?getInteractText\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const; // NOLINT
    /**
     * @symbol ?canBeCopied\@WrittenBookItem\@\@SA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool canBeCopied(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?getGeneration\@WrittenBookItem\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getGeneration(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?getPageCount\@WrittenBookItem\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getPageCount(class ItemStack const&); // NOLINT
    /**
     * @symbol
     * ?getPages\@WrittenBookItem\@\@SA?AV?$vector\@UPageContent\@\@V?$allocator\@UPageContent\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const&); // NOLINT
    /**
     * @symbol ?MAX_GENERATION\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_GENERATION; // NOLINT
    /**
     * @symbol ?MAX_PAGES\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGES; // NOLINT
    /**
     * @symbol ?MAX_PAGE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGE_LENGTH; // NOLINT
    /**
     * @symbol ?MAX_TITLE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_TITLE_LENGTH; // NOLINT
    /**
     * @symbol ?TAG_AUTHOR\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_AUTHOR; // NOLINT
    /**
     * @symbol ?TAG_GENERATION\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_GENERATION; // NOLINT
    /**
     * @symbol ?TAG_ID\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_ID; // NOLINT
    /**
     * @symbol ?TAG_PAGES\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGES; // NOLINT
    /**
     * @symbol ?TAG_PAGE_PHOTO_NAME\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGE_PHOTO_NAME; // NOLINT
    /**
     * @symbol ?TAG_PAGE_TEXT\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGE_TEXT; // NOLINT
    /**
     * @symbol ?TAG_RESOLVED\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_RESOLVED; // NOLINT
    /**
     * @symbol ?TAG_TITLE\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_TITLE; // NOLINT
    /**
     * @symbol ?TAG_XUID\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_XUID; // NOLINT
};
