/**
 * @file  Certificate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   212527089
     * @symbol ??0Certificate@@QEAA@AEBV0@@Z
     */
    MCAPI Certificate(class Certificate const &);
    /**
     * @hash   -1437581279
     * @symbol ?getExpirationDate@Certificate@@QEBA_JXZ
     */
    MCAPI __int64 getExpirationDate() const;
    /**
     * @hash   -239085254
     * @symbol ?getExtraData@Certificate@@QEBA?AVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI class Json::Value getExtraData(std::string const &, class Json::Value const &) const;
    /**
     * @hash   848574656
     * @symbol ?getIdentityPublicKey@Certificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @hash   514962707
     * @symbol ?getNotBeforeDate@Certificate@@QEBA_JXZ
     */
    MCAPI __int64 getNotBeforeDate() const;
    /**
     * @hash   -1198818016
     * @symbol ?isValid@Certificate@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -241046784
     * @symbol ?toString@Certificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @hash   -459988550
     * @symbol ?validate@Certificate@@QEAA_N_J@Z
     */
    MCAPI bool validate(__int64);
    /**
     * @hash   1357432691
     * @symbol ??1Certificate@@QEAA@XZ
     */
    MCAPI ~Certificate();

//private:
    /**
     * @hash   1568761310
     * @symbol ??0Certificate@@AEAA@AEBVUnverifiedCertificate@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@@Z
     */
    MCAPI Certificate(class UnverifiedCertificate const &, std::unique_ptr<class Certificate>);

private:

};