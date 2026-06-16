#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

enum class CollectionSpecification : uchar {
    SpecificItem = 0,
    AllItems     = 1,
    None         = 2,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::AgentComponents::CollectionSpecification>();
// clang-format on
