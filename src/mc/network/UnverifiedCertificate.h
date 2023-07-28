#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UnverifiedCertificate {

public:
    class WebToken const                   mRawToken;
    std::unique_ptr<UnverifiedCertificate> mParentUnverifiedCertificate;

    UnverifiedCertificate() = delete;

public:
    /**
     * @symbol ??0UnverifiedCertificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const&); // NOLINT
    /**
     * @symbol ??0UnverifiedCertificate\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate&&); // NOLINT
    /**
     * @symbol
     * ?getIdentityPublicKey\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const; // NOLINT
    /**
     * @symbol
     * ?toString\@UnverifiedCertificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol
     * ?verify\@UnverifiedCertificate\@\@QEBA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol ??1UnverifiedCertificate\@\@QEAA\@XZ
     */
    MCAPI ~UnverifiedCertificate(); // NOLINT
    /**
     * @symbol
     * ?fromString\@UnverifiedCertificate\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class UnverifiedCertificate fromString(std::string const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0UnverifiedCertificate\@\@AEAA\@AEBVWebToken\@\@V?$unique_ptr\@VUnverifiedCertificate\@\@U?$default_delete\@VUnverifiedCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI UnverifiedCertificate(class WebToken const&, std::unique_ptr<class UnverifiedCertificate>); // NOLINT
    /**
     * @symbol ?addToChain\@UnverifiedCertificate\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void addToChain(class Json::Value&) const; // NOLINT

private:
};
