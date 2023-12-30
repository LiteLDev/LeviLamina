#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
// clang-format on

namespace rtc {

class OpenSSLKeyPair {
public:
    // prevent constructor by default
    OpenSSLKeyPair& operator=(OpenSSLKeyPair const&);
    OpenSSLKeyPair(OpenSSLKeyPair const&);
    OpenSSLKeyPair();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Clone@OpenSSLKeyPair@rtc@@QEAA?AV?$unique_ptr@VOpenSSLKeyPair@rtc@@U?$default_delete@VOpenSSLKeyPair@rtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class rtc::OpenSSLKeyPair> Clone();

    // symbol:
    // ?PrivateKeyToPEMString@OpenSSLKeyPair@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string PrivateKeyToPEMString() const;

    // symbol:
    // ?PublicKeyToPEMString@OpenSSLKeyPair@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string PublicKeyToPEMString() const;

    // symbol: ??1OpenSSLKeyPair@rtc@@QEAA@XZ
    MCAPI ~OpenSSLKeyPair();

    // symbol:
    // ?Generate@OpenSSLKeyPair@rtc@@SA?AV?$unique_ptr@VOpenSSLKeyPair@rtc@@U?$default_delete@VOpenSSLKeyPair@rtc@@@std@@@std@@AEBVKeyParams@2@@Z
    MCAPI static std::unique_ptr<class rtc::OpenSSLKeyPair> Generate(class rtc::KeyParams const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddReference@OpenSSLKeyPair@rtc@@AEAAXXZ
    MCAPI void AddReference();

    // NOLINTEND
};

}; // namespace rtc
