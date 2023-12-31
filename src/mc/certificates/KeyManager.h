#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/System.h"

class KeyManager {
public:
    // prevent constructor by default
    KeyManager& operator=(KeyManager const&);
    KeyManager(KeyManager const&);
    KeyManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1KeyManager@@UEAA@XZ
    virtual ~KeyManager();

    // vIndex: 1, symbol: ?isValid@KeyManager@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol:
    // ??0KeyManager@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4System@Asymmetric@Crypto@@@Z
    MCAPI KeyManager(std::string const& publicKey, ::Crypto::Asymmetric::System system);

    // symbol: ?getPublicKey@KeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPublicKey() const;

    // NOLINTEND
};
