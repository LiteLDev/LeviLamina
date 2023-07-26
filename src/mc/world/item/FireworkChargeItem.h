#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class FireworkChargeItem : public ::Item {
public:
    // FireworkChargeItem inner types declare
    // clang-format off

    // clang-format on

    // FireworkChargeItem inner types define
    enum class Shape {};

public:
    // prevent constructor by default
    FireworkChargeItem& operator=(FireworkChargeItem const&) = delete;
    FireworkChargeItem(FireworkChargeItem const&)            = delete;
    FireworkChargeItem()                                     = delete;

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
     * @vftbl 18
     * @symbol ?isDyeable\@FireworkChargeItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const; // NOLINT
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
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@FireworkChargeItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@FireworkChargeItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const; // NOLINT
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
     * @vftbl 73
     * @symbol ?getColor\@FireworkChargeItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const; // NOLINT
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
     * @vftbl 117
     * @symbol ?hasSameRelevantUserData\@FireworkChargeItem\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol
     * ??0FireworkChargeItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI FireworkChargeItem(std::string const&, int); // NOLINT
    /**
     * @symbol
     * ?getFormattedHoverText\@FireworkChargeItem\@\@SAXAEBVCompoundTag\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI static void getFormattedHoverText(class CompoundTag const&, std::string&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?initFireworkChargeItem\@FireworkChargeItem\@\@SAAEBVItemInstance\@\@AEAV2\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static class ItemInstance const& initFireworkChargeItem(
        class ItemInstance&,
        enum class FireworkChargeItem::Shape,
        std::vector<unsigned char>,
        std::vector<unsigned char>,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?initFireworkChargeItem\@FireworkChargeItem\@\@SAAEBVItemStack\@\@AEAV2\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static class ItemStack const& initFireworkChargeItem(
        class ItemStack&,
        enum class FireworkChargeItem::Shape,
        std::vector<unsigned char>,
        std::vector<unsigned char>,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol ?setColor\@FireworkChargeItem\@\@SAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI static void setColor(class ItemStackBase&); // NOLINT
    /**
     * @symbol
     * ?TAG_EXPLOSION\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_EXPLOSION; // NOLINT
    /**
     * @symbol
     * ?TAG_E_COLORS\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_COLORS; // NOLINT
    /**
     * @symbol
     * ?TAG_E_FADECOLORS\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_FADECOLORS; // NOLINT
    /**
     * @symbol
     * ?TAG_E_FLICKER\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_FLICKER; // NOLINT
    /**
     * @symbol
     * ?TAG_E_TRAIL\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_TRAIL; // NOLINT
    /**
     * @symbol
     * ?TAG_E_TYPE\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_TYPE; // NOLINT

    // private:
    /**
     * @symbol
     * ?_initFireworkChargeItem\@FireworkChargeItem\@\@CAXAEAVItemStackBase\@\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static void _initFireworkChargeItem(
        class ItemStackBase&,
        enum class FireworkChargeItem::Shape,
        std::vector<unsigned char>,
        std::vector<unsigned char>,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?appendColors\@FireworkChargeItem\@\@CAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@EV?$allocator\@E\@std\@\@\@3\@\@Z
     */
    MCAPI static void appendColors(std::string&, std::vector<unsigned char>); // NOLINT

private:
};
