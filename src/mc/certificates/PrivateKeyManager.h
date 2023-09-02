#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/System.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&) = delete;
    PrivateKeyManager(PrivateKeyManager const&)            = delete;
    PrivateKeyManager()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValid@PrivateKeyManager@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??1PrivateKeyManager@@UEAA@XZ
    MCVAPI ~PrivateKeyManager();

    // symbol: ??0PrivateKeyManager@@QEAA@W4System@Asymmetric@Crypto@@@Z
    MCAPI PrivateKeyManager(::Crypto::Asymmetric::System);

    // symbol:
    // ?computeSecret@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVKeyManager@@@Z
    MCAPI std::string computeSecret(class KeyManager const&) const;

    // NOLINTEND
};
