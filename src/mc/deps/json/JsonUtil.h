#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class JsonSchemaNodeBase; }
// clang-format on

namespace JsonUtil {
// NOLINTBEGIN
/**
 * @symbol
 * ?LogMissingChildSchemaOption\@JsonUtil\@\@YAXW4LogArea\@\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@22\@Z
 */
MCAPI void
LogMissingChildSchemaOption(enum class LogArea, class Json::Value const&, std::string const&, std::string const&, std::string const&);
/**
 * @symbol
 * ?LogUnknownChildSchemaOption\@JsonUtil\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LogArea\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI void LogUnknownChildSchemaOption(std::string const&, enum class LogArea, class Json::Value const&);
/**
 * @symbol ?eraseSchema\@JsonUtil\@\@YAXAEBVHashedString\@\@AEBVSemVersion\@\@\@Z
 */
MCAPI void eraseSchema(class HashedString const&, class SemVersion const&);
/**
 * @symbol
 * ?getMemberByCaseInsensitiveName\@JsonUtil\@\@YAAEAVValue\@Json\@\@AEAV23\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI class Json::Value& getMemberByCaseInsensitiveName(class Json::Value&, std::string_view const&);
/**
 * @symbol
 * ?getMemberByCaseInsensitiveNameConst\@JsonUtil\@\@YAAEBVValue\@Json\@\@AEBV23\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI class Json::Value const& getMemberByCaseInsensitiveNameConst(class Json::Value const&, std::string_view const&);
/**
 * @symbol
 * ?getSchemaMap\@JsonUtil\@\@YAAEAV?$map\@VHashedString\@\@V?$map\@VSemVersion\@\@V?$shared_ptr\@VJsonSchemaNodeBase\@JsonUtil\@\@\@std\@\@U?$less\@VSemVersion\@\@\@3\@V?$allocator\@U?$pair\@$$CBVSemVersion\@\@V?$shared_ptr\@VJsonSchemaNodeBase\@JsonUtil\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$map\@VSemVersion\@\@V?$shared_ptr\@VJsonSchemaNodeBase\@JsonUtil\@\@\@std\@\@U?$less\@VSemVersion\@\@\@3\@V?$allocator\@U?$pair\@$$CBVSemVersion\@\@V?$shared_ptr\@VJsonSchemaNodeBase\@JsonUtil\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
 */
MCAPI std::map<class HashedString, std::map<class SemVersion, std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>&
      getSchemaMap();
/**
 * @symbol ?getSchemaMapLock\@JsonUtil\@\@YAAEAVmutex\@std\@\@XZ
 */
MCAPI std::mutex& getSchemaMapLock();
/**
 * @symbol ?parseBannerBlockType\@JsonUtil\@\@YA_NAEAW4BannerBlockType\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI bool parseBannerBlockType(enum class BannerBlockType&, class Json::Value const&);
/**
 * @symbol
 * ?parseItem\@JsonUtil\@\@YA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
 */
MCAPI bool parseItem(std::string&, std::string&, int&, std::string_view);
/**
 * @symbol ?parseItemColor\@JsonUtil\@\@YA_NAEAW4ItemColor\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI bool parseItemColor(enum class ItemColor&, class Json::Value const&);
/**
 * @symbol ?parseRange\@JsonUtil\@\@YA_NAEBVValue\@Json\@\@AEAH1\@Z
 */
MCAPI bool parseRange(class Json::Value const&, int&, int&);
/**
 * @symbol ?parseVec3\@JsonUtil\@\@YA_NAEAVVec3\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI bool parseVec3(class Vec3&, class Json::Value const&);
/**
 * @symbol
 * ?printJsonSchema_childNode\@JsonUtil\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBVHashedString\@\@1_N_K411\@Z
 */
MCAPI void
printJsonSchema_childNode(std::string&, std::string const&, class HashedString const&, std::string const&, bool, uint64_t, uint64_t, std::string const&, std::string const&);
/**
 * @symbol
 * ?setDefaultPrettyName\@JsonUtil\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVHashedString\@\@\@Z
 */
MCAPI void setDefaultPrettyName(std::string&, class HashedString const&);
// NOLINTEND

}; // namespace JsonUtil
