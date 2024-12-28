#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpgradePatchHelpers {
// functions
// NOLINTBEGIN
MCAPI void setVersion(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            version
);
// NOLINTEND

} // namespace UpgradePatchHelpers
