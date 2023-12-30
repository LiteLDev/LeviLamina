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
    // NOLINTBEGIN
    // symbol: ??0UnverifiedCertificate@@QEAA@$$QEAV0@@Z
    MCAPI UnverifiedCertificate(class UnverifiedCertificate&& other);

    // symbol: ??0UnverifiedCertificate@@QEAA@AEBV0@@Z
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const& other);

    // symbol:
    // ?getIdentityPublicKey@UnverifiedCertificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getIdentityPublicKey() const;

    // symbol: ?toString@UnverifiedCertificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol:
    // ?verify@UnverifiedCertificate@@QEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const& trustedKeys) const;

    // symbol: ??1UnverifiedCertificate@@QEAA@XZ
    MCAPI ~UnverifiedCertificate();

    // symbol:
    // ?fromString@UnverifiedCertificate@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class UnverifiedCertificate fromString(std::string const& input);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0UnverifiedCertificate@@AEAA@AEBVWebToken@@V?$unique_ptr@VUnverifiedCertificate@@U?$default_delete@VUnverifiedCertificate@@@std@@@std@@@Z
    MCAPI UnverifiedCertificate(
        class WebToken const&                        rawToken,
        std::unique_ptr<class UnverifiedCertificate> parentUnverifiedCertificate
    );

    // symbol: ?addToChain@UnverifiedCertificate@@AEBAXAEAVValue@Json@@@Z
    MCAPI void addToChain(class Json::Value& chain) const;

    // NOLINTEND
};
