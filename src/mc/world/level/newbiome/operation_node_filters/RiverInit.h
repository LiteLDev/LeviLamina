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
    ::ll::UntypedStorage<8, 24> mUnk541ac1;
    // NOLINTEND

public:
    // prevent constructor by default
    RiverInit& operator=(RiverInit const&);
    RiverInit(RiverInit const&);
    RiverInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RiverInit(::BiomeRegistry const& biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeRegistry const& biomeRegistry);
    // NOLINTEND
};

} // namespace OperationNodeFilters
