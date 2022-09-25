/**
 * @file  JsonUtil.hpp
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
 * @brief MC namespace JsonUtil.
 *
 */
namespace JsonUtil {

#define AFTER_EXTRA
// Add Member There
class JsonSchemaNodeBase {
public:
    JsonSchemaNodeBase() = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&) = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&&) = delete;
};
class EmptyClass {
public:
    EmptyClass() = delete;
    EmptyClass(EmptyClass const&) = delete;
    EmptyClass(EmptyClass const&&) = delete;
};
template <typename T0, typename T1>
class JsonSchemaObjectNode {
public:
    JsonSchemaObjectNode() = delete;
    JsonSchemaObjectNode(JsonSchemaObjectNode const&) = delete;
    JsonSchemaObjectNode(JsonSchemaObjectNode const&&) = delete;
};
template <typename T0, typename T1>
class JsonParseState {
public:
    JsonParseState() = delete;
    JsonParseState(JsonParseState const&) = delete;
    JsonParseState(JsonParseState const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   486091751
     * @symbol ?LogMissingChildSchemaOption@JsonUtil@@YAXW4LogArea@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@22@Z
     */
    MCAPI void LogMissingChildSchemaOption(enum LogArea, class Json::Value const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1742444923
     * @symbol ?LogUnknownChildSchemaOption@JsonUtil@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@AEBVValue@Json@@@Z
     */
    MCAPI void LogUnknownChildSchemaOption(std::string const &, enum LogArea, class Json::Value const &);
    /**
     * @hash   -682626454
     * @symbol ?eraseSchema@JsonUtil@@YAXAEBVHashedString@@AEBVSemVersion@@@Z
     */
    MCAPI void eraseSchema(class HashedString const &, class SemVersion const &);
    /**
     * @hash   1304378131
     * @symbol ?getMemberByCaseInsensitiveName@JsonUtil@@YAAEAVValue@Json@@AEAV23@AEBV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Json::Value & getMemberByCaseInsensitiveName(class Json::Value &, class gsl::basic_string_span<char const, -1> const &);
    /**
     * @hash   191919593
     * @symbol ?getMemberByCaseInsensitiveNameConst@JsonUtil@@YAAEBVValue@Json@@AEBV23@AEBV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI class Json::Value const & getMemberByCaseInsensitiveNameConst(class Json::Value const &, class gsl::basic_string_span<char const, -1> const &);
    /**
     * @hash   -1819356987
     * @symbol ?getSchemaMap@JsonUtil@@YAAEAV?$map@VHashedString@@V?$map@VSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@U?$less@VSemVersion@@@3@V?$allocator@U?$pair@$$CBVSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@@std@@@3@@std@@U?$less@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$map@VSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@U?$less@VSemVersion@@@3@V?$allocator@U?$pair@$$CBVSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@@std@@@3@@std@@@std@@@3@@std@@XZ
     */
    MCAPI class std::map<class HashedString, class std::map<class SemVersion, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>, struct std::less<class SemVersion>, class std::allocator<struct std::pair<class SemVersion const, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::map<class SemVersion, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>, struct std::less<class SemVersion>, class std::allocator<struct std::pair<class SemVersion const, class std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>>>>> & getSchemaMap();
    /**
     * @hash   -1213819837
     * @symbol ?getSchemaMapLock@JsonUtil@@YAAEAVmutex@std@@XZ
     */
    MCAPI class std::mutex & getSchemaMapLock();
    /**
     * @hash   -194021829
     * @symbol ?parseBannerBlockType@JsonUtil@@YA_NAEAW4BannerBlockType@@AEBVValue@Json@@@Z
     */
    MCAPI bool parseBannerBlockType(enum BannerBlockType &, class Json::Value const &);
    /**
     * @symbol ?parseItem@JsonUtil@@YA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAHV?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
     */
    MCAPI bool parseItem(std::string &, std::string &, int &, class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @hash   1607868373
     * @symbol ?parseItemColor@JsonUtil@@YA_NAEAW4ItemColor@@AEBVValue@Json@@@Z
     */
    MCAPI bool parseItemColor(enum ItemColor &, class Json::Value const &);
    /**
     * @hash   -724513838
     * @symbol ?parseRange@JsonUtil@@YA_NAEBVValue@Json@@AEAH1@Z
     */
    MCAPI bool parseRange(class Json::Value const &, int &, int &);
    /**
     * @hash   1543125733
     * @symbol ?parseVec3@JsonUtil@@YA_NAEAVVec3@@AEBVValue@Json@@@Z
     */
    MCAPI bool parseVec3(class Vec3 &, class Json::Value const &);
    /**
     * @hash   -1517020685
     * @symbol ?printJsonSchema_childNode@JsonUtil@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBVHashedString@@1_N_K411@Z
     */
    MCAPI void printJsonSchema_childNode(std::string &, std::string const &, class HashedString const &, std::string const &, bool, unsigned __int64, unsigned __int64, std::string const &, std::string const &);
    /**
     * @hash   -32924552
     * @symbol ?setDefaultPrettyName@JsonUtil@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVHashedString@@@Z
     */
    MCAPI void setDefaultPrettyName(std::string &, class HashedString const &);

};