/**
 * @file  CraftingDataEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingDataEntry.
 *
 */
class CraftingDataEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGDATAENTRY
public:
    class CraftingDataEntry& operator=(class CraftingDataEntry const &) = delete;
    CraftingDataEntry(class CraftingDataEntry const &) = delete;
    CraftingDataEntry() = delete;
#endif

public:
    /**
     * @hash   -667311234
     * @symbol ?fillFromMultiRecipe@CraftingDataEntry@@QEAAXAEBVMultiRecipe@@@Z
     */
    MCAPI void fillFromMultiRecipe(class MultiRecipe const &);
    /**
     * @hash   1453207256
     * @symbol ?fillFromRecipe@CraftingDataEntry@@QEAAXAEBVRecipe@@@Z
     */
    MCAPI void fillFromRecipe(class Recipe const &);
    /**
     * @hash   669357092
     * @symbol ?write@CraftingDataEntry@@QEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @hash   279936050
     * @symbol ??1CraftingDataEntry@@QEAA@XZ
     */
    MCAPI ~CraftingDataEntry();

};