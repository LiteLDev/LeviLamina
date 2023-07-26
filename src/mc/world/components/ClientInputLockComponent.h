#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputLockComponent {

public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&) = delete;
    ClientInputLockComponent(ClientInputLockComponent const&)            = delete;
    ClientInputLockComponent()                                           = delete;

public:
    /**
     * @symbol ?hasAnyLock\@ClientInputLockComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyLock() const; // NOLINT
    /**
     * @symbol ?hasLockCategory\@ClientInputLockComponent\@\@QEBA_NW4ClientInputLockCategory\@\@\@Z
     */
    MCAPI bool hasLockCategory(enum class ClientInputLockCategory) const; // NOLINT
    /**
     * @symbol ?hasLockType\@ClientInputLockComponent\@\@QEBA_NW4ClientInputLockType\@\@\@Z
     */
    MCAPI bool hasLockType(enum class ClientInputLockType) const; // NOLINT
    /**
     * @symbol ?serialize\@ClientInputLockComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int serialize() const; // NOLINT
    /**
     * @symbol ?setLockCategory\@ClientInputLockComponent\@\@QEAAXW4ClientInputLockCategory\@\@_N\@Z
     */
    MCAPI void setLockCategory(enum class ClientInputLockCategory, bool); // NOLINT
};
