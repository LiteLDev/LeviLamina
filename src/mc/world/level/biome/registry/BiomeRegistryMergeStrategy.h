#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

class BiomeRegistryMergeStrategy : public ::ResourcePackMergeStrategy {

public:
    // prevent constructor by default
    BiomeRegistryMergeStrategy& operator=(BiomeRegistryMergeStrategy const&) = delete;
    BiomeRegistryMergeStrategy(BiomeRegistryMergeStrategy const&)            = delete;
    BiomeRegistryMergeStrategy()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?mergeFiles\@BiomeRegistryMergeStrategy\@\@UEAAXAEBV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void mergeFiles(std::vector<class LoadedResourceData> const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEREGISTRYMERGESTRATEGY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BiomeRegistryMergeStrategy();
#endif
    // NOLINTEND
};
