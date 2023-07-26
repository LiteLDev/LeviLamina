#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CraftableCompounds {

public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&) = delete;
    CraftableCompounds(CraftableCompounds const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?_registerCompound\@CraftableCompounds\@\@MEAAXAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@\@Z
     */
    virtual void _registerCompound(
        std::vector<class ItemStack> const&,
        class ItemStack const&,
        enum class LabTableReactionType,
        enum class CompoundContainerType
    ); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTABLECOMPOUNDS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftableCompounds(); // NOLINT
#endif
    /**
     * @symbol ??0CraftableCompounds\@\@QEAA\@XZ
     */
    MCAPI CraftableCompounds(); // NOLINT
    /**
     * @symbol
     * ?getComponents\@CraftableCompounds\@\@QEBAPEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> const* getComponents(class ItemDescriptor const&) const; // NOLINT
    /**
     * @symbol
     * ?getCompound\@CraftableCompounds\@\@QEAAAEBVItemStack\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ItemStack const& getCompound(std::vector<class ItemStack> const&); // NOLINT
    /**
     * @symbol
     * ?getReaction\@CraftableCompounds\@\@QEAA?AW4LabTableReactionType\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI enum class LabTableReactionType getReaction(std::vector<class ItemStack> const&); // NOLINT
    /**
     * @symbol ?registerCompounds\@CraftableCompounds\@\@QEAAXXZ
     */
    MCAPI void registerCompounds(); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_getCompoundId\@CraftableCompounds\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const&); // NOLINT
    /**
     * @symbol
     * ?_registerCompound\@CraftableCompounds\@\@IEAAXAEBV?$vector\@UChemistryIngredient\@\@V?$allocator\@UChemistryIngredient\@\@\@std\@\@\@std\@\@W4CompoundType\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@H\@Z
     */
    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const&,
        enum class CompoundType,
        enum class LabTableReactionType,
        enum class CompoundContainerType,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?_registerCompound\@CraftableCompounds\@\@IEAAXAEBV?$vector\@UChemistryIngredient\@\@V?$allocator\@UChemistryIngredient\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@\@Z
     */
    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const&,
        class ItemStack const&,
        enum class LabTableReactionType,
        enum class CompoundContainerType
    ); // NOLINT

protected:
};
