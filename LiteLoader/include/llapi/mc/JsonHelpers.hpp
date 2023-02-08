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
     * @hash   -160205741
     * @symbol  ?addObjectArrayField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VValue\@Json\@\@V?$allocator\@VValue\@Json\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void addObjectArrayField(class Json::Value &, std::string const &, std::vector<class Json::Value> const &);
    /**
     * @hash   -1671368349
     * @symbol  ?addObjectField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI void addObjectField(class Json::Value &, std::string const &, class Json::Value const &);
    /**
     * @hash   -577383275
     * @symbol  ?addStringField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void addStringField(class Json::Value &, std::string const &, std::string const &);
    /**
     * @hash   2098824854
     * @symbol  ?addUint32Field\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBI\@Z
     */
    MCAPI void addUint32Field(class Json::Value &, std::string const &, unsigned int const &);
    /**
     * @hash   -506335643
     * @symbol  ?parseJson\@JsonHelpers\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI bool parseJson(std::string const &, class Json::Value &);
    /**
     * @hash   1182988276
     * @symbol  ?serialize\@JsonHelpers\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI std::string serialize(class Json::Value const &);

};