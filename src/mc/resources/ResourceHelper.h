#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ResourceHelper {
// NOLINTBEGIN
// symbol:
// ?deserializePackStackEntry@ResourceHelper@@YA_NAEBVValue@Json@@AEAUPackInstanceId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool
deserializePackStackEntry(class Json::Value const& entry, struct PackInstanceId& output, std::string const& packIdSalt);

// symbol:
// ?stringifyCapabilities@ResourceHelper@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI std::string stringifyCapabilities(std::vector<std::string> const&);

// symbol:
// ?stringifyResourceMetadataGeneratedWith@ResourceHelper@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceMetadata@@@Z
MCAPI std::string stringifyResourceMetadataGeneratedWith(class ResourceMetadata const&);
// NOLINTEND

}; // namespace ResourceHelper
