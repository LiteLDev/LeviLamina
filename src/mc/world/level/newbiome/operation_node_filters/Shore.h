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

class Shore : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk503916;
    ::ll::UntypedStorage<8, 24> mUnk5b517c;
    // NOLINTEND

public:
    // prevent constructor by default
    Shore& operator=(Shore const&);
    Shore(Shore const&);
    Shore();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Shore(::BiomeRegistry const& registry, ::Biome const& defaultShore);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeRegistry const& registry, ::Biome const& defaultShore);
    // NOLINTEND
};

} // namespace OperationNodeFilters
