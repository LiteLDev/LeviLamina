#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 8> mUnk2bf212;
    ::ll::UntypedStorage<8, 8> mUnkd0b3ea;
    // NOLINTEND

public:
    // prevent constructor by default
    PromoteCenter& operator=(PromoteCenter const&);
    PromoteCenter(PromoteCenter const&);
    PromoteCenter();

};

}
