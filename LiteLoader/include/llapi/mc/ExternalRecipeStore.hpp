/**
 * @file  MC/ExternalRecipeStore.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExternalRecipeStore.
 *
 */
class ExternalRecipeStore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALRECIPESTORE
public:
    class ExternalRecipeStore& operator=(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore() = delete;
#endif

public:
    /**
     * @hash   1688407995
     * @symbol ?registerBlockReduction@ExternalRecipeStore@@QEAAXAEBVItemStack@@$$QEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     */
    MCAPI void registerBlockReduction(class ItemStack const &, std::vector<class ItemStack> &&);
    /**
     * @hash   2133703977
     * @symbol ?setBlockReducer@ExternalRecipeStore@@QEAAXPEAVBlockReducer@@@Z
     */
    MCAPI void setBlockReducer(class BlockReducer *);

};