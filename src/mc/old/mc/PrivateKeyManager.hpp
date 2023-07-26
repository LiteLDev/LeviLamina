/**
 * @file  PrivateKeyManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Crypto.hpp"

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PrivateKeyManager();
    /**
     * @vftbl  1
     * @symbol  ?isValid\@PrivateKeyManager\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0PrivateKeyManager\@\@QEAA\@W4System\@Asymmetric\@Crypto\@\@\@Z
     */
    MCAPI PrivateKeyManager(enum class Crypto::Asymmetric::System);
    /**
     * @symbol  ?computeSecret\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVKeyManager\@\@\@Z
     */
    MCAPI std::string computeSecret(class KeyManager const &) const;
    /**
     * @symbol  ?sign\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4HashType\@Hash\@Crypto\@\@\@Z
     */
    MCAPI std::string sign(std::string const &, enum class Crypto::Hash::HashType) const;

};