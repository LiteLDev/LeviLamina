#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // member variables
    // NOLINTBEGIN
    float mOffset;
    bool  mRelative;
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::RelativeFloat>();
// clang-format on
