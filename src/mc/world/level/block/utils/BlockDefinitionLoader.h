#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class BlockDefinitionLoader {
public:
    // prevent constructor by default
    BlockDefinitionLoader& operator=(BlockDefinitionLoader const&);
    BlockDefinitionLoader(BlockDefinitionLoader const&);
    BlockDefinitionLoader();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0BlockDefinitionLoader@@QEAA@PEAVBlockDefinitionGroup@@PEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSemVersion@@PEBVExperiments@@_N@Z
    MCAPI BlockDefinitionLoader(
        class BlockDefinitionGroup*,
        class Core::PathBuffer<std::string> const*,
        std::string,
        class SemVersion,
        class Experiments const*,
        bool
    );

    // symbol: ??1BlockDefinitionLoader@@QEAA@XZ
    MCAPI ~BlockDefinitionLoader();

    // NOLINTEND
};
