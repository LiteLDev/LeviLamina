#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
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
        class BlockDefinitionGroup*                group,
        class Core::PathBuffer<std::string> const* heapPathBuffer,
        std::string                                resourcePackLocation,
        class SemVersion                           engineVersion,
        class Experiments const*                   experiments,
        bool                                       isBaseGamePack
    );

    MCAPI class Puv::LoadResult<struct BlockDefinition> load(std::string const& input) const;

    MCAPI ~BlockDefinitionLoader();

    // NOLINTEND
};
