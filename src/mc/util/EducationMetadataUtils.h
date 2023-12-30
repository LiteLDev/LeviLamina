#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace EducationMetadataUtils {
// NOLINTBEGIN
// symbol:
// ?parse@EducationMetadataUtils@@YA?AUEducationMetadata@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEAVPackReport@@@Z
MCAPI struct EducationMetadata
parse(std::string const& manifestContent, std::vector<std::string>& errorPath, class PackReport& report);

// symbol:
// ?parseEducationMetadataContent@EducationMetadataUtils@@YAXAEBVValue@Json@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAUEducationMetadata@@AEAVPackReport@@@Z
MCAPI void parseEducationMetadataContent(
    class Json::Value const&  root,
    std::vector<std::string>& errorPath,
    struct EducationMetadata& metadata,
    class PackReport&         report
);
// NOLINTEND

}; // namespace EducationMetadataUtils
