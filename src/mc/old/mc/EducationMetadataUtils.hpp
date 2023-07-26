/**
 * @file  EducationMetadataUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace EducationMetadataUtils.
 *
 */
namespace EducationMetadataUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?parse\@EducationMetadataUtils\@\@YA?AUEducationMetadata\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@AEAVPackReport\@\@\@Z
     */
    MCAPI struct EducationMetadata parse(std::string const &, std::vector<std::string> &, class PackReport &);
    /**
     * @symbol  ?parseEducationMetadataContent\@EducationMetadataUtils\@\@YAXAEBVValue\@Json\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAUEducationMetadata\@\@AEAVPackReport\@\@\@Z
     */
    MCAPI void parseEducationMetadataContent(class Json::Value const &, std::vector<std::string> &, struct EducationMetadata &, class PackReport &);

};