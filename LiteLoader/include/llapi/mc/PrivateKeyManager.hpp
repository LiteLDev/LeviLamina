/**
 * @file  PrivateKeyManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -641089735
     * @vftbl  1
     * @symbol  ?isValid\@PrivateKeyManager\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1877313200
     * @symbol  ??0PrivateKeyManager\@\@QEAA\@W4System\@Asymmetric\@Crypto\@\@\@Z
     */
    MCAPI PrivateKeyManager(enum class Crypto::Asymmetric::System);
    /**
     * @hash   -892930817
     * @symbol  ?computeSecret\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVKeyManager\@\@\@Z
     */
    MCAPI std::string computeSecret(class KeyManager const &) const;
    /**
     * @hash   -1731216892
     * @symbol  ?sign\@PrivateKeyManager\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4HashType\@Hash\@Crypto\@\@\@Z
     */
    MCAPI std::string sign(std::string const &, enum class Crypto::Hash::HashType) const;

};