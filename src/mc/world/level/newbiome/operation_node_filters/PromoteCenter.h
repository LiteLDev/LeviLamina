#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class PromoteCenter : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*> mFrom;
    ::ll::TypedStorage<8, 8, ::Biome const*> mTo;
    // NOLINTEND

public:
    // prevent constructor by default
    PromoteCenter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PromoteCenter(::Biome const& from, ::Biome const& to);

    MCAPI ::Biome const* operator()(::OperationNodeDetails::NeighborhoodReader<::Biome const*, 1, 1>& reader) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Biome const& from, ::Biome const& to);
    // NOLINTEND
};

} // namespace OperationNodeFilters
