#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UnverifiedCertificate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNVERIFIEDCERTIFICATE
public:
    UnverifiedCertificate& operator=(UnverifiedCertificate const&) = delete;
    UnverifiedCertificate()                                        = delete;
#endif

public:
    /**
     * @symbol ??0UnverifiedCertificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const&);
    /**
     * @symbol ??0UnverifiedCertificate\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate&&);
    /**
     * @symbol
     * ?getIdentityPublicKey\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @symbol
     * ?toString\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol
     * ?verify\@UnverifiedCertificate\@\@QEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const&) const;
    /**
     * @symbol ??1UnverifiedCertificate\@\@QEAA\@XZ
     */
    MCAPI ~UnverifiedCertificate();
    /**
     * @symbol
     * ?fromString\@UnverifiedCertificate\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class UnverifiedCertificate fromString(std::string const&);

    // private:
    /**
     * @symbol
     * ??0UnverifiedCertificate\@\@AEAA\@AEBVWebToken\@\@V?$unique_ptr\@VUnverifiedCertificate\@\@U?$default_delete\@VUnverifiedCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI UnverifiedCertificate(class WebToken const&, std::unique_ptr<class UnverifiedCertificate>);
    /**
     * @symbol ?addToChain\@UnverifiedCertificate\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void addToChain(class Json::Value&) const;

private:
};
