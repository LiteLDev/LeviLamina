#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { enum class System; }
// clang-format on

class PrivateKeyManager {

public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&) = delete;
    PrivateKeyManager(PrivateKeyManager const&)            = delete;
    PrivateKeyManager()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isValid\@PrivateKeyManager\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRIVATEKEYMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PrivateKeyManager();
#endif
    /**
     * @symbol ??0PrivateKeyManager\@\@QEAA\@W4System\@Asymmetric\@Crypto\@\@\@Z
     */
    MCAPI PrivateKeyManager(enum class Crypto::Asymmetric::System);
    /**
     * @symbol
     * ?computeSecret\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVKeyManager\@\@\@Z
     */
    MCAPI std::string computeSecret(class KeyManager const&) const;
    // NOLINTEND
};
