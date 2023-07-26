#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
enum class GeneratorType;
// clang-format on

namespace OperationNodeFilters {

class BiomeInit {

public:
    // prevent constructor by default
    BiomeInit& operator=(BiomeInit const&) = delete;
    BiomeInit(BiomeInit const&)            = delete;
    BiomeInit()                            = delete;

public:
    /**
     * @symbol ??0BiomeInit\@OperationNodeFilters\@\@QEAA\@AEBVBiomeRegistry\@\@AEAVBiome\@\@1W4GeneratorType\@\@\@Z
     */
    MCAPI BiomeInit(class BiomeRegistry const&, class Biome&, class Biome&, enum class GeneratorType); // NOLINT
};

}; // namespace OperationNodeFilters
