#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CompoundItem : public ::Item {

public:
    // prevent constructor by default
    CompoundItem& operator=(CompoundItem const&) = delete;
    CompoundItem(CompoundItem const&)            = delete;
    CompoundItem()                               = delete;

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
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@CompoundItem\@\@UEBA_NH\@Z
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
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@CompoundItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
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
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@CompoundItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@CompoundItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @symbol
     * ??0CompoundItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVExperiments\@\@\@Z
     */
    MCAPI CompoundItem(std::string const&, int, class Experiments const&); // NOLINT
    /**
     * @symbol ?getCompoundType\@CompoundItem\@\@SA?AW4CompoundType\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI static enum class CompoundType getCompoundType(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?getIngredientForCompound\@CompoundItem\@\@SA?AVRecipeIngredient\@\@W4CompoundType\@\@\@Z
     */
    MCAPI static class RecipeIngredient getIngredientForCompound(enum class CompoundType); // NOLINT
    /**
     * @symbol ?getItemForCompound\@CompoundItem\@\@SA?AVItemInstance\@\@W4CompoundType\@\@H\@Z
     */
    MCAPI static class ItemInstance getItemForCompound(enum class CompoundType, int); // NOLINT
    /**
     * @symbol ?isCompoundItem\@CompoundItem\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isCompoundItem(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?unregisterSpecialCompounds\@CompoundItem\@\@SAXXZ
     */
    MCAPI static void unregisterSpecialCompounds(); // NOLINT

    // private:
    /**
     * @symbol ?_registerSpecialCompound\@CompoundItem\@\@AEAAXAEBVItemInstance\@\@W4CompoundType\@\@\@Z
     */
    MCAPI void _registerSpecialCompound(class ItemInstance const&, enum class CompoundType); // NOLINT
    /**
     * @symbol
     * ?_getName\@CompoundItem\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CompoundType\@\@\@Z
     */
    MCAPI static std::string _getName(enum class CompoundType); // NOLINT

private:
    /**
     * @symbol
     * ?mIdToSpecialCompound\@CompoundItem\@\@0V?$unordered_map\@HHU?$hash\@H\@std\@\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHH\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        int,
        int,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, int>>>
        mIdToSpecialCompound; // NOLINT
    /**
     * @symbol
     * ?mTypeToSpecialCompound\@CompoundItem\@\@0V?$unordered_map\@HVItemInstance\@\@U?$hash\@H\@std\@\@U?$equal_to\@H\@3\@V?$allocator\@U?$pair\@$$CBHVItemInstance\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        int,
        class ItemInstance,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, class ItemInstance>>>
        mTypeToSpecialCompound; // NOLINT
};
