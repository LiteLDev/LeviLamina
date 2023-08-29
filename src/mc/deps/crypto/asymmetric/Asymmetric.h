#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/System.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class Asymmetric {

public:
    // prevent constructor by default
    Asymmetric& operator=(Asymmetric const&) = delete;
    Asymmetric(Asymmetric const&)            = delete;
    Asymmetric()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?generateKeyPair\@Asymmetric\@1Crypto\@\@UEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool generateKeyPair(std::string&, std::string&);
    /**
     * @vftbl 2
     * @symbol
     * ?encryptData\@Asymmetric\@1Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0W4Padding\@12\@W4PubKeyFormat\@12\@\@Z
     */
    virtual std::string encryptData(
        std::string const&,
        std::string const&,
        enum class Crypto::Asymmetric::Padding,
        enum class Crypto::Asymmetric::PubKeyFormat
    );
    /**
     * @vftbl 3
     * @symbol
     * ?decryptData\@Asymmetric\@1Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0W4Padding\@12\@\@Z
     */
    virtual std::string decryptData(std::string const&, std::string const&, enum class Crypto::Asymmetric::Padding);
    /**
     * @vftbl 4
     * @symbol
     * ?signData\@Asymmetric\@1Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0W4HashType\@Hash\@2\@\@Z
     */
    virtual std::string signData(std::string const&, std::string const&, enum class Crypto::Hash::HashType);
    /**
     * @vftbl 5
     * @symbol
     * ?verifyData\@Asymmetric\@1Crypto\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4HashType\@Hash\@2\@\@Z
     */
    virtual bool
    verifyData(std::string const&, std::string const&, std::string const&, enum class Crypto::Hash::HashType);
    /**
     * @vftbl 6
     * @symbol
     * ?computeSharedSecret\@Asymmetric\@1Crypto\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0\@Z
     */
    virtual std::string computeSharedSecret(std::string const&, std::string const&);
    /**
     * @symbol ??0Asymmetric\@0Crypto\@\@QEAA\@W4System\@01\@\@Z
     */
    MCAPI Asymmetric(enum class Crypto::Asymmetric::System);
    /**
     * @symbol ?canComputeSecret\@Asymmetric\@1Crypto\@\@QEAA_NXZ
     */
    MCAPI bool canComputeSecret();
    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
