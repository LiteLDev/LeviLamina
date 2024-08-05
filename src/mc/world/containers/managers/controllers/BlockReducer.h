#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockReducer {
public:
    // prevent constructor by default
    BlockReducer& operator=(BlockReducer const&);
    BlockReducer(BlockReducer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockReducer() = default;

    // vIndex: 1
    virtual void registerBlock(class ItemStack const& block, std::vector<class ItemStack>&& elements);

    MCAPI BlockReducer();

    MCAPI std::vector<class ItemStack> const* getReduction(class ItemStackBase const& block) const;

    MCAPI std::unordered_map<int, std::vector<class ItemStack>> const& getReductionMap() const;

    MCAPI class ItemDescriptor tryGetItemDescriptorFromKey(int) const;

    // NOLINTEND
};
