#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Certificate {

public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&) = delete;
    Certificate()                              = delete;

public:
    /**
     * @symbol ??0Certificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Certificate(class Certificate const&); // NOLINT
    /**
     * @symbol ?getExpirationDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getExpirationDate() const; // NOLINT
    /**
     * @symbol
     * ?getExtraData\@Certificate\@\@QEBA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI class Json::Value getExtraData(std::string const&, class Json::Value const&) const; // NOLINT
    /**
     * @symbol
     * ?getIdentityPublicKey\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const; // NOLINT
    /**
     * @symbol ?getNotBeforeDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getNotBeforeDate() const; // NOLINT
    /**
     * @symbol ?isSelfSigned\@Certificate\@\@QEBA_NXZ
     */
    MCAPI bool isSelfSigned() const; // NOLINT
    /**
     * @symbol ?isValid\@Certificate\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol
     * ?toString\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?validate\@Certificate\@\@QEAA_N_J_N\@Z
     */
    MCAPI bool validate(__int64, bool); // NOLINT
    /**
     * @symbol ??1Certificate\@\@QEAA\@XZ
     */
    MCAPI ~Certificate(); // NOLINT
    /**
     * @symbol
     * ?createWrappedCertificate\@Certificate\@\@SA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@V23\@\@Z
     */
    MCAPI static std::unique_ptr<class Certificate>
    createWrappedCertificate(class PrivateKeyManager&, __int64, __int64, std::string const&, bool, class Json::Value const*, std::unique_ptr<class Certificate>); // NOLINT

    // private:
    /**
     * @symbol
     * ??0Certificate\@\@AEAA\@AEBVUnverifiedCertificate\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI Certificate(class UnverifiedCertificate const&, std::unique_ptr<class Certificate>); // NOLINT
    /**
     * @symbol
     * ?createWebToken\@Certificate\@\@CA?AV?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class WebToken>
    createWebToken(class PrivateKeyManager&, __int64, __int64, std::string const&, bool, class Json::Value const*); // NOLINT

private:
};
