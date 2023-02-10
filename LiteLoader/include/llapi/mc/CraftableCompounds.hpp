/**
 * @file  CraftableCompounds.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftableCompounds.
 *
 */
class CraftableCompounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTABLECOMPOUNDS
public:
    class CraftableCompounds& operator=(class CraftableCompounds const &) = delete;
    CraftableCompounds(class CraftableCompounds const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CraftableCompounds();
    /**
     * @hash   1637188504
     * @vftbl  1
     * @symbol  ?_registerCompound\@CraftableCompounds\@\@MEAAXAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@\@Z
     */
    virtual void _registerCompound(std::vector<class ItemStack> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);
    /**
     * @hash   1375701866
     * @symbol  ??0CraftableCompounds\@\@QEAA\@XZ
     */
    MCAPI CraftableCompounds();
    /**
     * @hash   -831638768
     * @symbol  ?getComponents\@CraftableCompounds\@\@QEBAPEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> const * getComponents(class ItemDescriptor const &) const;
    /**
     * @hash   241626825
     * @symbol  ?getCompound\@CraftableCompounds\@\@QEAAAEBVItemStack\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ItemStack const & getCompound(std::vector<class ItemStack> const &);
    /**
     * @hash   -960661985
     * @symbol  ?getReaction\@CraftableCompounds\@\@QEAA?AW4LabTableReactionType\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI enum class LabTableReactionType getReaction(std::vector<class ItemStack> const &);
    /**
     * @hash   576104131
     * @symbol  ?registerCompounds\@CraftableCompounds\@\@QEAAXXZ
     */
    MCAPI void registerCompounds();

//protected:
    /**
     * @hash   -1778607537
     * @symbol  ?_getCompoundId\@CraftableCompounds\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const &);
    /**
     * @hash   -715979503
     * @symbol  ?_registerCompound\@CraftableCompounds\@\@IEAAXAEBV?$vector\@UChemistryIngredient\@\@V?$allocator\@UChemistryIngredient\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@\@Z
     */
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);
    /**
     * @hash   590511371
     * @symbol  ?_registerCompound\@CraftableCompounds\@\@IEAAXAEBV?$vector\@UChemistryIngredient\@\@V?$allocator\@UChemistryIngredient\@\@\@std\@\@\@std\@\@W4CompoundType\@\@W4LabTableReactionType\@\@W4CompoundContainerType\@\@H\@Z
     */
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, enum class CompoundType, enum class LabTableReactionType, enum class CompoundContainerType, int);

protected:

};