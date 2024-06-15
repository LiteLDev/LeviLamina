#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpgradePatchHelpers {
// NOLINTBEGIN
// symbol:
// ?setVersion@UpgradePatchHelpers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void setVersion(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            version
);
// NOLINTEND

}; // namespace UpgradePatchHelpers
