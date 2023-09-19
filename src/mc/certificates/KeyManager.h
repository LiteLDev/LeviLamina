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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValid@KeyManager@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??1KeyManager@@UEAA@XZ
    MCVAPI ~KeyManager();

    // symbol:
    // ??0KeyManager@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4System@Asymmetric@Crypto@@@Z
    MCAPI KeyManager(std::string const&, ::Crypto::Asymmetric::System);

    // symbol: ?getPublicKey@KeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPublicKey() const;

    // NOLINTEND
};
