#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/enums/CraftingDataEntryType.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/Recipe.h"

class CraftingDataEntry {
public:
    std::unique_ptr<Recipe>       mRecipe;     // this+0x0
    int                           mItemData;   // this+0x8
    int                           mItemAux;    // this+0xC
    HashedString                  mTag;        // this+0x10
    NetworkItemInstanceDescriptor mItemResult; // this+0x40
    CraftingDataEntryType         mEntryType;  // this+0x80

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
