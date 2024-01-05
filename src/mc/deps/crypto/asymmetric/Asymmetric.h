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
    Asymmetric& operator=(Asymmetric const&);
    Asymmetric(Asymmetric const&);
    Asymmetric();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Asymmetric@Asymmetric@Crypto@@UEAA@XZ
    virtual ~Asymmetric() = default;

    // vIndex: 1, symbol:
    // ?generateKeyPair@Asymmetric@1Crypto@@UEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool generateKeyPair(std::string& privateKey, std::string& publicKey);

    // vIndex: 2, symbol:
    // ?encryptData@Asymmetric@1Crypto@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@0W4Padding@12@W4PubKeyFormat@12@@Z
    virtual std::string encryptData(
        std::string const& publicKey,
        std::string const& data,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    );

    // vIndex: 3, symbol:
    // ?decryptData@Asymmetric@1Crypto@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@0W4Padding@12@@Z
    virtual std::string
    decryptData(std::string const& privateKey, std::string const& data, ::Crypto::Asymmetric::Padding);

    // vIndex: 4, symbol:
    // ?signData@Asymmetric@1Crypto@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@0W4HashType@Hash@2@@Z
    virtual std::string signData(std::string const& privateKey, std::string const& data, ::Crypto::Hash::HashType hash);

    // vIndex: 5, symbol:
    // ?verifyData@Asymmetric@1Crypto@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4HashType@Hash@2@@Z
    virtual bool verifyData(
        std::string const&       publicKey,
        std::string const&       signature,
        std::string const&       data,
        ::Crypto::Hash::HashType hash
    );

    // vIndex: 6, symbol:
    // ?computeSharedSecret@Asymmetric@1Crypto@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@0@Z
    virtual std::string computeSharedSecret(std::string const&, std::string const&);

    // symbol: ??0Asymmetric@0Crypto@@QEAA@W4System@01@@Z
    MCAPI explicit Asymmetric(::Crypto::Asymmetric::System system);

    // symbol: ?canComputeSecret@Asymmetric@1Crypto@@QEAA_NXZ
    MCAPI bool canComputeSecret();

    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
