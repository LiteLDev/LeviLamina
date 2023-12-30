#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CraftingDataEntry {
public:
    // prevent constructor by default
    CraftingDataEntry& operator=(CraftingDataEntry const&);
    CraftingDataEntry(CraftingDataEntry const&);
    CraftingDataEntry();

public:
    // NOLINTBEGIN
    // symbol: ?fillFromMultiRecipe@CraftingDataEntry@@QEAAXAEBVMultiRecipe@@@Z
    MCAPI void fillFromMultiRecipe(class MultiRecipe const& recipe);

    // symbol: ?fillFromRecipe@CraftingDataEntry@@QEAAXAEBVRecipe@@@Z
    MCAPI void fillFromRecipe(class Recipe const& recipe);

    // symbol: ?write@CraftingDataEntry@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream& stream) const;

    // symbol: ??1CraftingDataEntry@@QEAA@XZ
    MCAPI ~CraftingDataEntry();

    // NOLINTEND
};
