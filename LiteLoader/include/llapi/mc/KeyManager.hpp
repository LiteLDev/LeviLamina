/**
 * @file  KeyManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Crypto.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KeyManager.
 *
 */
class KeyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYMANAGER
public:
    class KeyManager& operator=(class KeyManager const &) = delete;
    KeyManager(class KeyManager const &) = delete;
    KeyManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~KeyManager();
    /**
     * @hash   -1931169380
     * @vftbl  1
     * @symbol ?isValid@KeyManager@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   1609740930
     * @symbol ??0KeyManager@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4System@Asymmetric@Crypto@@@Z
     */
    MCAPI KeyManager(std::string const &, enum Crypto::Asymmetric::System);
    /**
     * @hash   1084045440
     * @symbol ?getPublicKey@KeyManager@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getPublicKey() const;
    /**
     * @hash   81230186
     * @symbol ?verify@KeyManager@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4HashType@Hash@Crypto@@@Z
     */
    MCAPI bool verify(std::string const &, std::string const &, enum Crypto::Hash::HashType) const;

};