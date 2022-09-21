/**
 * @file  MC/ResourceHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -399103176
     * @symbol ?deserializePackStackEntry@ResourceHelper@@YA_NAEBVValue@Json@@AEAUPackInstanceId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool deserializePackStackEntry(class Json::Value const &, struct PackInstanceId &, std::string const &);
    /**
     * @hash   -484072102
     * @symbol ?stringifyResourceMetadataGeneratedWith@ResourceHelper@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceMetadata@@@Z
     */
    MCAPI std::string stringifyResourceMetadataGeneratedWith(class ResourceMetadata const &);

};