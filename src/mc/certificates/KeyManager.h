#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { enum class System; }
// clang-format on

class KeyManager {

public:
    // prevent constructor by default
    KeyManager& operator=(KeyManager const&) = delete;
    KeyManager(KeyManager const&)            = delete;
    KeyManager()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isValid\@KeyManager\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KEYMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~KeyManager(); // NOLINT
#endif
    /**
     * @symbol
     * ??0KeyManager\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4System\@Asymmetric\@Crypto\@\@\@Z
     */
    MCAPI KeyManager(std::string const&, enum class Crypto::Asymmetric::System); // NOLINT
    /**
     * @symbol
     * ?getPublicKey\@KeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPublicKey() const; // NOLINT
};
