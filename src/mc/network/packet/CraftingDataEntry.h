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
    MCAPI void fillFromMultiRecipe(class MultiRecipe const& recipe);

    MCAPI void fillFromRecipe(class Recipe const& recipe);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~CraftingDataEntry();

    // NOLINTEND
};
