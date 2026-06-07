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

struct RiverInit : public ::OperationNodeFilters::FilterBase<1, 1, int, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mNoRiverBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    RiverInit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RiverInit(::BiomeRegistry const& biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeRegistry const& biomeRegistry);
    // NOLINTEND
};

} // namespace OperationNodeFilters
