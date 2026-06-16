#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

enum class LiquidSettings : uchar {
    ApplyWaterlogging  = 0,
    IgnoreWaterlogging = 1,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::br::worldgen::LiquidSettings>();
// clang-format on
