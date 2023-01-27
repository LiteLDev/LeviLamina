/**
 * @file  WebToken.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WebToken.
 *
 */
class WebToken {

#define AFTER_EXTRA
// Add Member There

public:
    std::string mHeader;
    Json::Value mHeaderInfo;
    std::string mData;
    Json::Value mDataInfo;
    std::string mSignature;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBTOKEN
public:
    class WebToken& operator=(class WebToken const &) = delete;
    WebToken(class WebToken const &) = delete;
    WebToken() = delete;
#endif

public:
    /**
     * @hash   -448177750
     * @symbol  ??0WebToken\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI WebToken(std::string);
    /**
     * @hash   1310200554
     * @symbol  ?toString\@WebToken\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @hash   -1847590998
     * @symbol  ?verifyWithIncludedKey\@WebToken\@\@QEBA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool verifyWithIncludedKey(std::vector<std::string> const &) const;
    /**
     * @hash   1739324335
     * @symbol  ??1WebToken\@\@QEAA\@XZ
     */
    MCAPI ~WebToken();
    /**
     * @hash   631270956
     * @symbol  ?createFromData\@WebToken\@\@SA?AV?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEBVValue\@Json\@\@AEBVPrivateKeyManager\@\@\@Z
     */
    MCAPI static std::unique_ptr<class WebToken> createFromData(class Json::Value const &, class PrivateKeyManager const &);

//private:
    /**
     * @hash   694023988
     * @symbol  ?_parse\@WebToken\@\@AEAAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _parse(class Json::Value &, std::string const &);
    /**
     * @hash   2060882063
     * @symbol  ?_signatureToDER\@WebToken\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _signatureToDER() const;
    /**
     * @hash   279305960
     * @symbol  ?_DERToBinary\@WebToken\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@H\@Z
     */
    MCAPI static std::string _DERToBinary(std::string const &, int);

private:

};