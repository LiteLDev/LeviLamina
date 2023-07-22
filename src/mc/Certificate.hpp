/**
 * @file  Certificate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "UnverifiedCertificate.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class Certificate.
 *
 */
class Certificate {

#define AFTER_EXTRA
// Add Member There
public:
    UnverifiedCertificate mUnverifiedCertificate;
    std::unique_ptr<Certificate> mParentCertificate;
    bool mIsValid;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CERTIFICATE
public:
    class Certificate& operator=(class Certificate const &) = delete;
    Certificate() = delete;
#endif

public:
    /**
     * @symbol  ??0Certificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Certificate(class Certificate const &);
    /**
     * @symbol  ?getExpirationDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getExpirationDate() const;
    /**
     * @symbol  ?getExtraData\@Certificate\@\@QEBA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI class Json::Value getExtraData(std::string const &, class Json::Value const &) const;
    /**
     * @symbol  ?getIdentityPublicKey\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @symbol  ?getNotBeforeDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getNotBeforeDate() const;
    /**
     * @symbol  ?isValid\@Certificate\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?toString\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol  ?validate\@Certificate\@\@QEAA_N_J\@Z
     */
    MCAPI bool validate(__int64);
    /**
     * @symbol  ??1Certificate\@\@QEAA\@XZ
     */
    MCAPI ~Certificate();
    /**
     * @symbol  ?createWrappedCertificate\@Certificate\@\@SA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@V23\@\@Z
     */
    MCAPI static std::unique_ptr<class Certificate> createWrappedCertificate(class PrivateKeyManager &, __int64, __int64, std::string const &, bool, class Json::Value const *, std::unique_ptr<class Certificate>);

//private:
    /**
     * @symbol  ??0Certificate\@\@AEAA\@AEBVUnverifiedCertificate\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI Certificate(class UnverifiedCertificate const &, std::unique_ptr<class Certificate>);
    /**
     * @symbol  ?createWebToken\@Certificate\@\@CA?AV?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class WebToken> createWebToken(class PrivateKeyManager &, __int64, __int64, std::string const &, bool, class Json::Value const *);

private:

};