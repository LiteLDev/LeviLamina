#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeFilters {

class BiomeInit {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPERATIONNODEFILTERS_BIOMEINIT
public:
    BiomeInit& operator=(BiomeInit const&) = delete;
    BiomeInit(BiomeInit const&)            = delete;
    BiomeInit()                            = delete;
#endif

public:
    /**
     * @symbol ??0BiomeInit\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@1W4GeneratorType\@\@\@Z
     */
    MCAPI BiomeInit(class BiomeRegistry const&, class Biome&, class Biome&, enum class GeneratorType);
};

}; // namespace OperationNodeFilters
