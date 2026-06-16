#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LocateCommandUtil {

enum class Biomes : int {};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::LocateCommandUtil::Biomes>();
// clang-format on
