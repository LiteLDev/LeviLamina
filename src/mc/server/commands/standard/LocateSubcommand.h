#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LocateSubcommand : uchar {
    Structure = 0,
    Biome     = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::LocateSubcommand>();
// clang-format on
