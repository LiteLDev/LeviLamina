#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CraftingDataEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGDATAENTRY
public:
    CraftingDataEntry& operator=(CraftingDataEntry const&) = delete;
    CraftingDataEntry(CraftingDataEntry const&)            = delete;
    CraftingDataEntry()                                    = delete;
#endif

public:
    /**
     * @symbol ?fillFromMultiRecipe\@CraftingDataEntry\@\@QEAAXAEBVMultiRecipe\@\@\@Z
     */
    MCAPI void fillFromMultiRecipe(class MultiRecipe const&);
    /**
     * @symbol ?fillFromRecipe\@CraftingDataEntry\@\@QEAAXAEBVRecipe\@\@\@Z
     */
    MCAPI void fillFromRecipe(class Recipe const&);
    /**
     * @symbol ?write\@CraftingDataEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const;
    /**
     * @symbol ??1CraftingDataEntry\@\@QEAA\@XZ
     */
    MCAPI ~CraftingDataEntry();
};
