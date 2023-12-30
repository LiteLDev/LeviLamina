#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

class BiomeRegistryMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // prevent constructor by default
    BiomeRegistryMergeStrategy& operator=(BiomeRegistryMergeStrategy const&);
    BiomeRegistryMergeStrategy(BiomeRegistryMergeStrategy const&);
    BiomeRegistryMergeStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BiomeRegistryMergeStrategy@@UEAA@XZ
    virtual ~BiomeRegistryMergeStrategy();

    // vIndex: 1, symbol:
    // ?mergeFiles@BiomeRegistryMergeStrategy@@UEAAXAEBV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@@Z
    virtual void mergeFiles(std::vector<class LoadedResourceData> const& fileStack);

    // NOLINTEND
};
