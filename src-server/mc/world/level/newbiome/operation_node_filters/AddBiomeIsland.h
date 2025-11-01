#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_filters/FilterBase.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class AddBiomeIsland : public ::OperationNodeFilters::FilterBase<3, 3, ::Biome const*, ::Biome const*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk12088d;
    ::ll::UntypedStorage<8, 8> mUnk8bc886;
    ::ll::UntypedStorage<8, 24> mUnke6c20c;
    // NOLINTEND

public:
    // prevent constructor by default
    AddBiomeIsland& operator=(AddBiomeIsland const&);
    AddBiomeIsland(AddBiomeIsland const&);
    AddBiomeIsland();

};

}
