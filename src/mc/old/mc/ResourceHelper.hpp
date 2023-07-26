/**
 * @file  ResourceHelper.hpp
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
 * @brief MC namespace ResourceHelper.
 *
 */
namespace ResourceHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?deserializePackStackEntry\@ResourceHelper\@\@YA_NAEBVValue\@Json\@\@AEAUPackInstanceId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool deserializePackStackEntry(class Json::Value const &, struct PackInstanceId &, std::string const &);
    /**
     * @symbol  ?stringifyResourceMetadataGeneratedWith\@ResourceHelper\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVResourceMetadata\@\@\@Z
     */
    MCAPI std::string stringifyResourceMetadataGeneratedWith(class ResourceMetadata const &);

};