/**
 * @file  CompoundItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundItem.
 *
 */
class CompoundItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDITEM
public:
    class CompoundItem& operator=(class CompoundItem const &) = delete;
    CompoundItem(class CompoundItem const &) = delete;
    CompoundItem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@CompoundItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 95
     * @symbol ?buildDescriptionId\@CompoundItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 119
     * @symbol ?setIconInfo\@CompoundItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@CompoundItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @symbol ??0CompoundItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVExperiments\@\@\@Z
     */
    MCAPI CompoundItem(std::string const &, int, class Experiments const &);
    /**
     * @symbol ?getCompoundType\@CompoundItem\@\@SA?AW4CompoundType\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI static enum class CompoundType getCompoundType(class ItemDescriptor const &);
    /**
     * @symbol ?getIngredientForCompound\@CompoundItem\@\@SA?AVRecipeIngredient\@\@W4CompoundType\@\@\@Z
     */
    MCAPI static class RecipeIngredient getIngredientForCompound(enum class CompoundType);
    /**
     * @symbol ?getItemForCompound\@CompoundItem\@\@SA?AVItemInstance\@\@W4CompoundType\@\@H\@Z
     */
    MCAPI static class ItemInstance getItemForCompound(enum class CompoundType, int);
    /**
     * @symbol ?isCompoundItem\@CompoundItem\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isCompoundItem(class ItemStackBase const &);
    /**
     * @symbol ?unregisterSpecialCompounds\@CompoundItem\@\@SAXXZ
     */
    MCAPI static void unregisterSpecialCompounds();

//private:
    /**
     * @symbol ?_registerSpecialCompound\@CompoundItem\@\@AEAAXAEBVItemInstance\@\@W4CompoundType\@\@\@Z
     */
    MCAPI void _registerSpecialCompound(class ItemInstance const &, enum class CompoundType);
    /**
     * @symbol ?_getName\@CompoundItem\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CompoundType\@\@\@Z
     */
    MCAPI static std::string _getName(enum class CompoundType);

private:
    /**
     * @symbol ?mIdToSpecialCompound\@CompoundItem\@\@0V?$unordered_map\@HHU?$hash\@H\@std\@\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHH\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, int>>> mIdToSpecialCompound;
    /**
     * @symbol ?mTypeToSpecialCompound\@CompoundItem\@\@0V?$unordered_map\@HVItemInstance\@\@U?$hash\@H\@std\@\@U?$equal_to\@H\@3\@V?$allocator\@U?$pair\@$$CBHVItemInstance\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<int, class ItemInstance, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class ItemInstance>>> mTypeToSpecialCompound;

};
