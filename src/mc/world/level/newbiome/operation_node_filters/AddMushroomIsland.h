#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

struct AddMushroomIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk40f27f;
    ::ll::UntypedStorage<8, 8> mUnk62bcbc;
    // NOLINTEND

public:
    // prevent constructor by default
    AddMushroomIsland& operator=(AddMushroomIsland const&);
    AddMushroomIsland(AddMushroomIsland const&);
    AddMushroomIsland();
};

} // namespace OperationNodeFilters
