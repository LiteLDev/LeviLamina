/**
 * @file  JsonHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace JsonHelpers.
 *
 */
namespace JsonHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?addObjectField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI void addObjectField(class Json::Value &, std::string const &, class Json::Value const &);
    /**
     * @symbol ?addStringField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void addStringField(class Json::Value &, std::string const &, std::string const &);
    /**
     * @symbol ?parseJson\@JsonHelpers\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI bool parseJson(std::string const &, class Json::Value &);
    /**
     * @symbol ?serialize\@JsonHelpers\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI std::string serialize(class Json::Value const &);

};