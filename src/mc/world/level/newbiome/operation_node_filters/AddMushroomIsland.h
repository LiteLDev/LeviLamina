#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

struct AddMushroomIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const&>         mMushroomBiome;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    AddMushroomIsland& operator=(AddMushroomIsland const&);
    AddMushroomIsland(AddMushroomIsland const&);
    AddMushroomIsland();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddMushroomIsland(::Biome const& mushroomBiome, ::BiomeRegistry const& biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Biome const& mushroomBiome, ::BiomeRegistry const& biomeRegistry);
    // NOLINTEND
};

} // namespace OperationNodeFilters
