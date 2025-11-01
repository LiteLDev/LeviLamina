#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class RareBiomeSpot : public ::OperationNodeFilters::FilterBase<1, 1, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4aed31;
    ::ll::UntypedStorage<8, 8> mUnkaf403b;
    ::ll::UntypedStorage<8, 8> mUnkd0a5b6;
    // NOLINTEND

public:
    // prevent constructor by default
    RareBiomeSpot& operator=(RareBiomeSpot const&);
    RareBiomeSpot(RareBiomeSpot const&);
    RareBiomeSpot();
};

} // namespace OperationNodeFilters
