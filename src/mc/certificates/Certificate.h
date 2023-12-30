#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/UnverifiedCertificate.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Certificate {
public:
    class UnverifiedCertificate  mUnverifiedCertificate;
    std::unique_ptr<Certificate> mParentCertificate;
    bool                         mIsValid;

    Certificate() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Certificate@@QEAA@AEBV0@@Z
    MCAPI Certificate(class Certificate const& other);

    // symbol: ?getExpirationDate@Certificate@@QEBA_JXZ
    MCAPI int64 getExpirationDate() const;

    // symbol:
    // ?getExtraData@Certificate@@QEBA?AVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI class Json::Value getExtraData(std::string const& key, class Json::Value const& defaultValue) const;

    // symbol: ?getIdentityPublicKey@Certificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getIdentityPublicKey() const;

    // symbol: ?getNotBeforeDate@Certificate@@QEBA_JXZ
    MCAPI int64 getNotBeforeDate() const;

    // symbol: ?isSelfSigned@Certificate@@QEBA_NXZ
    MCAPI bool isSelfSigned() const;

    // symbol: ?isValid@Certificate@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?toString@Certificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?validate@Certificate@@QEAA_N_J_N@Z
    MCAPI bool validate(int64, bool);

    // symbol: ??1Certificate@@QEAA@XZ
    MCAPI ~Certificate();

    // symbol:
    // ?createWrappedCertificate@Certificate@@SA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@AEAVPrivateKeyManager@@_J1AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@_NPEBVValue@Json@@V23@@Z
    MCAPI static std::unique_ptr<class Certificate> createWrappedCertificate(
        class PrivateKeyManager&           signer,
        int64                              notBeforeDate,
        int64                              expirationDate,
        std::string const&                 identityPublicKey,
        bool                               isCertificateAuthority,
        class Json::Value const*           extraData,
        std::unique_ptr<class Certificate> parentCertificate
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0Certificate@@AEAA@AEBVUnverifiedCertificate@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@@Z
    MCAPI Certificate(
        class UnverifiedCertificate const& unverifiedCertificate,
        std::unique_ptr<class Certificate> parentCertificate
    );

    // symbol:
    // ?createWebToken@Certificate@@CA?AV?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEAVPrivateKeyManager@@_J1AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@_NPEBVValue@Json@@@Z
    MCAPI static std::unique_ptr<class WebToken> createWebToken(
        class PrivateKeyManager& signer,
        int64                    notBeforeDate,
        int64                    expirationDate,
        std::string const&       identityPublicKey,
        bool                     isCertificateAuthority,
        class Json::Value const* extraData
    );

    // NOLINTEND
};
