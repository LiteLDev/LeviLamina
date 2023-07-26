#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CraftingDataEntry {

public:
    // prevent constructor by default
    CraftingDataEntry& operator=(CraftingDataEntry const&) = delete;
    CraftingDataEntry(CraftingDataEntry const&)            = delete;
    CraftingDataEntry()                                    = delete;

public:
    /**
     * @symbol ?fillFromMultiRecipe\@CraftingDataEntry\@\@QEAAXAEBVMultiRecipe\@\@\@Z
     */
    MCAPI void fillFromMultiRecipe(class MultiRecipe const&); // NOLINT
    /**
     * @symbol ?fillFromRecipe\@CraftingDataEntry\@\@QEAAXAEBVRecipe\@\@\@Z
     */
    MCAPI void fillFromRecipe(class Recipe const&); // NOLINT
    /**
     * @symbol ?write\@CraftingDataEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const; // NOLINT
    /**
     * @symbol ??1CraftingDataEntry\@\@QEAA\@XZ
     */
    MCAPI ~CraftingDataEntry(); // NOLINT
};
