#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct IBiomeComponentGlue;
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeComponentGlue>()>>>
        mComponentGlueFactories;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void applyToBiome(::Biome& biome, ::BiomeJsonDocumentGlueResolvedBiomeData const& resolvedBiomeData);
    // NOLINTEND
};
