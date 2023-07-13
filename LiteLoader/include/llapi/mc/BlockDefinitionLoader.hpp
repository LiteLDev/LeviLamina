/**
 * @file  BlockDefinitionLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Puv.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockDefinitionLoader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITIONLOADER
public:
    class BlockDefinitionLoader& operator=(class BlockDefinitionLoader const &) = delete;
    BlockDefinitionLoader(class BlockDefinitionLoader const &) = delete;
    BlockDefinitionLoader() = delete;
#endif

public:
    /**
     * @symbol ??0BlockDefinitionLoader\@\@QEAA\@PEAVBlockDefinitionGroup\@\@PEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@PEBVExperiments\@\@\@Z
     */
    MCAPI BlockDefinitionLoader(class BlockDefinitionGroup *, class Core::PathBuffer<std::string> const *, std::string, class SemVersion, class Experiments const *);
    /**
     * @symbol ?load\@BlockDefinitionLoader\@\@QEBA?AV?$LoadResult\@UBlockDefinition\@\@\@Puv\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Puv::LoadResult<struct BlockDefinition> load(std::string const &) const;
    /**
     * @symbol ??1BlockDefinitionLoader\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionLoader();

};
