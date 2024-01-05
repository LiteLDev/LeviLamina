#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ClientInputLockCategory.h"
#include "mc/enums/ClientInputLockType.h"

struct ClientInputLockComponent {
public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&);
    ClientInputLockComponent(ClientInputLockComponent const&);
    ClientInputLockComponent();

public:
    // NOLINTBEGIN
    // symbol: ?hasAnyLock@ClientInputLockComponent@@QEBA_NXZ
    MCAPI bool hasAnyLock() const;

    // symbol: ?hasLockCategory@ClientInputLockComponent@@QEBA_NW4ClientInputLockCategory@@@Z
    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    // symbol: ?hasLockType@ClientInputLockComponent@@QEBA_NW4ClientInputLockType@@@Z
    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    // symbol: ?serialize@ClientInputLockComponent@@QEBAIXZ
    MCAPI uint serialize() const;

    // symbol: ?setLockCategory@ClientInputLockComponent@@QEAAXW4ClientInputLockCategory@@_N@Z
    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);

    // NOLINTEND
};
