#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeRegistryMergeStrategy {

public:
    // prevent constructor by default
    BiomeRegistryMergeStrategy& operator=(BiomeRegistryMergeStrategy const&) = delete;
    BiomeRegistryMergeStrategy(BiomeRegistryMergeStrategy const&)            = delete;
    BiomeRegistryMergeStrategy()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?mergeFiles\@BiomeRegistryMergeStrategy\@\@UEAAXAEBV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void mergeFiles(std::vector<class LoadedResourceData> const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEREGISTRYMERGESTRATEGY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BiomeRegistryMergeStrategy(); // NOLINT
#endif
};
