/**
 * @file  ClientInputLockComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ClientInputLockComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINPUTLOCKCOMPONENT
public:
    struct ClientInputLockComponent& operator=(struct ClientInputLockComponent const &) = delete;
    ClientInputLockComponent(struct ClientInputLockComponent const &) = delete;
    ClientInputLockComponent() = delete;
#endif

public:
    /**
     * @symbol ?hasAnyLock\@ClientInputLockComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyLock() const;
    /**
     * @symbol ?hasLockCategory\@ClientInputLockComponent\@\@QEBA_NW4ClientInputLockCategory\@\@\@Z
     */
    MCAPI bool hasLockCategory(enum class ClientInputLockCategory) const;
    /**
     * @symbol ?hasLockType\@ClientInputLockComponent\@\@QEBA_NW4ClientInputLockType\@\@\@Z
     */
    MCAPI bool hasLockType(enum class ClientInputLockType) const;
    /**
     * @symbol ?serialize\@ClientInputLockComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int serialize() const;
    /**
     * @symbol ?setLockCategory\@ClientInputLockComponent\@\@QEAAXW4ClientInputLockCategory\@\@_N\@Z
     */
    MCAPI void setLockCategory(enum class ClientInputLockCategory, bool);

};