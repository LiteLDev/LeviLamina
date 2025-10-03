#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct FilterSet; }
// clang-format on

namespace RakNet {

struct FilteredSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::FilterSet*> filter;
    ::ll::TypedStorage<4, 4, uint>                 timeEnteredThisSet;
    // NOLINTEND
};

} // namespace RakNet
