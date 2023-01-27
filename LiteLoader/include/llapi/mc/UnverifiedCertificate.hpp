/**
 * @file  UnverifiedCertificate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "WebToken.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class UnverifiedCertificate.
 *
 */
class UnverifiedCertificate {

#define AFTER_EXTRA
// Add Member There
    const WebToken mRawToken;
    std::unique_ptr<UnverifiedCertificate> mParentUnverifiedCertificate;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNVERIFIEDCERTIFICATE
public:
    class UnverifiedCertificate& operator=(class UnverifiedCertificate const &) = delete;
    UnverifiedCertificate() = delete;
#endif

public:
    /**
     * @hash   1184547041
     * @symbol  ??0UnverifiedCertificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const &);
    /**
     * @hash   1260789973
     * @symbol  ??0UnverifiedCertificate\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate &&);
    /**
     * @hash   1021551410
     * @symbol  ?getIdentityPublicKey\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @hash   -1135899550
     * @symbol  ?toString\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @hash   -514830632
     * @symbol  ?verify\@UnverifiedCertificate\@\@QEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const &) const;
    /**
     * @hash   -295347422
     * @symbol  ??1UnverifiedCertificate\@\@QEAA\@XZ
     */
    MCAPI ~UnverifiedCertificate();
    /**
     * @hash   -109524266
     * @symbol  ?fromString\@UnverifiedCertificate\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class UnverifiedCertificate fromString(std::string const &);

//private:
    /**
     * @hash   -1389227873
     * @symbol  ??0UnverifiedCertificate\@\@AEAA\@AEBVWebToken\@\@V?$unique_ptr\@VUnverifiedCertificate\@\@U?$default_delete\@VUnverifiedCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI UnverifiedCertificate(class WebToken const &, std::unique_ptr<class UnverifiedCertificate>);
    /**
     * @hash   1800556551
     * @symbol  ?addToChain\@UnverifiedCertificate\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void addToChain(class Json::Value &) const;

private:

};