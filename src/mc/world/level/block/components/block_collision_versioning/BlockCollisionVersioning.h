#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCollisionVersioning {
// functions
// NOLINTBEGIN
MCAPI bool checkPreviousSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);
// NOLINTEND

} // namespace BlockCollisionVersioning
