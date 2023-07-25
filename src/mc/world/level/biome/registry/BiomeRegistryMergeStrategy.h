#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeRegistryMergeStrategy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEREGISTRYMERGESTRATEGY
public:
    BiomeRegistryMergeStrategy& operator=(BiomeRegistryMergeStrategy const&) = delete;
    BiomeRegistryMergeStrategy(BiomeRegistryMergeStrategy const&)            = delete;
    BiomeRegistryMergeStrategy()                                             = delete;
#endif

public:
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
};
