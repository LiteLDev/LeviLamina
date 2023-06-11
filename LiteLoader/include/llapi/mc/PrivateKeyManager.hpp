/**
 * @file  PrivateKeyManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrivateKeyManager.
 *
 */
class PrivateKeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIVATEKEYMANAGER
public:
    class PrivateKeyManager& operator=(class PrivateKeyManager const &) = delete;
    PrivateKeyManager(class PrivateKeyManager const &) = delete;
    PrivateKeyManager() = delete;
#endif

public:
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
     * @symbol ?computeSecret\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVKeyManager\@\@\@Z
     */
    MCAPI std::string computeSecret(class KeyManager const &) const;

};
