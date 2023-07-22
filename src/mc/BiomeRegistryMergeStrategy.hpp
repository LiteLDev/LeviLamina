/**
 * @file  BiomeRegistryMergeStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeRegistryMergeStrategy.
 *
 */
class BiomeRegistryMergeStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEREGISTRYMERGESTRATEGY
public:
    class BiomeRegistryMergeStrategy& operator=(class BiomeRegistryMergeStrategy const &) = delete;
    BiomeRegistryMergeStrategy(class BiomeRegistryMergeStrategy const &) = delete;
    BiomeRegistryMergeStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BiomeRegistryMergeStrategy();
    /**
     * @vftbl  1
     * @symbol  ?mergeFiles\@BiomeRegistryMergeStrategy\@\@UEAAXAEBV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void mergeFiles(std::vector<class LoadedResourceData> const &);

};