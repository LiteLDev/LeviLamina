#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/System.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&);
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PrivateKeyManager@@UEAA@XZ
    virtual ~PrivateKeyManager();

    // vIndex: 1, symbol: ?isValid@PrivateKeyManager@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0PrivateKeyManager@@QEAA@W4System@Asymmetric@Crypto@@@Z
    MCAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);

    // symbol:
    // ?computeSecret@PrivateKeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVKeyManager@@@Z
    MCAPI std::string computeSecret(class KeyManager const&) const;

    // NOLINTEND
};
