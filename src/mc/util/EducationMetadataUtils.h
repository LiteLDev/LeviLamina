#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace EducationMetadataUtils {
/**
 * @symbol
 * ?parse\@EducationMetadataUtils\@\@YA?AUEducationMetadata\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@AEAVPackReport\@\@\@Z
 */
MCAPI struct EducationMetadata parse(std::string const&, std::vector<std::string>&, class PackReport&);
/**
 * @symbol
 * ?parseEducationMetadataContent\@EducationMetadataUtils\@\@YAXAEBVValue\@Json\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAUEducationMetadata\@\@AEAVPackReport\@\@\@Z
 */
MCAPI void
parseEducationMetadataContent(class Json::Value const&, std::vector<std::string>&, struct EducationMetadata&, class PackReport&);

}; // namespace EducationMetadataUtils
