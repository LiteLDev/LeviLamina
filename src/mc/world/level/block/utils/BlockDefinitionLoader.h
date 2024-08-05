#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

class BlockDefinitionLoader {
public:
    // prevent constructor by default
    BlockDefinitionLoader& operator=(BlockDefinitionLoader const&);
    BlockDefinitionLoader(BlockDefinitionLoader const&);
    BlockDefinitionLoader();

public:
    // NOLINTBEGIN
    MCAPI BlockDefinitionLoader(
        class BlockDefinitionGroup*,
        class Core::PathBuffer<std::string> const*,
        std::string,
        class SemVersion,
        class Experiments const*,
        bool
    );

    MCAPI class Puv::LoadResult<struct BlockDefinition> load(std::string const&) const;

    MCAPI ~BlockDefinitionLoader();

    // NOLINTEND
};
