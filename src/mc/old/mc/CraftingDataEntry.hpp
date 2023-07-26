/**
 * @file  CraftingDataEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?fillFromMultiRecipe\@CraftingDataEntry\@\@QEAAXAEBVMultiRecipe\@\@\@Z
     */
    MCAPI void fillFromMultiRecipe(class MultiRecipe const &);
    /**
     * @symbol  ?fillFromRecipe\@CraftingDataEntry\@\@QEAAXAEBVRecipe\@\@\@Z
     */
    MCAPI void fillFromRecipe(class Recipe const &);
    /**
     * @symbol  ?write\@CraftingDataEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol  ??1CraftingDataEntry\@\@QEAA\@XZ
     */
    MCAPI ~CraftingDataEntry();

};