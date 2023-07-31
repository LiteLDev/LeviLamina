#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputLockComponent {

public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&) = delete;
    ClientInputLockComponent(ClientInputLockComponent const&)            = delete;
    ClientInputLockComponent()                                           = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
