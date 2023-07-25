#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

class Shore {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_SHORE
public:
    Shore& operator=(Shore const&) = delete;
    Shore(Shore const&)            = delete;
    Shore()                        = delete;
#endif

public:
    /**
     * @symbol ??0Shore\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@\@Z
     */
    MCAPI Shore(class BiomeRegistry const&, class Biome&);
};

}; // namespace OperationNodeFilters
