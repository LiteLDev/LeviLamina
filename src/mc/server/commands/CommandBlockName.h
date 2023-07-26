#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockName {

public:
    // prevent constructor by default
    CommandBlockName& operator=(CommandBlockName const&) = delete;
    CommandBlockName(CommandBlockName const&)            = delete;
    CommandBlockName()                                   = delete;

public:
    /**
     * @symbol ??0CommandBlockName\@\@QEAA\@_K\@Z
     */
    MCAPI CommandBlockName(unsigned __int64); // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@CommandBlockName\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol ??BCommandBlockName\@\@QEBA_KXZ
     */
    MCAPI operator unsigned __int64() const; // NOLINT
    /**
     * @symbol
     * ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@HAEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, int, class CommandOutput&) const; // NOLINT
    /**
     * @symbol
     * ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@H\@Z
     */
    MCAPI class CommandBlockNameResult resolveBlock(int) const; // NOLINT
};
