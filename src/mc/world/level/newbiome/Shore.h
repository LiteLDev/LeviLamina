#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

class Shore {

public:
    // prevent constructor by default
    Shore& operator=(Shore const&) = delete;
    Shore(Shore const&)            = delete;
    Shore()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Shore\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@\@Z
     */
    MCAPI Shore(class BiomeRegistry const&, class Biome&);
    // NOLINTEND
};

}; // namespace OperationNodeFilters
