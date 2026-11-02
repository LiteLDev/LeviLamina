#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSelectionBoxVersioning {
// functions
// NOLINTBEGIN
MCNAPI bool checkPreviousSchema(
    ::rapidjson::GenericValue<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
);
// NOLINTEND

} // namespace BlockSelectionBoxVersioning
