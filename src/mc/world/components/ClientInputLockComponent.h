#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ClientInputLockCategory.h"
#include "mc/enums/ClientInputLockType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

struct ClientInputLockComponent {
public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ClientInputLockComponent@@QEAA@XZ
    MCAPI ClientInputLockComponent();

    // symbol: ??0ClientInputLockComponent@@QEAA@$$QEAU0@@Z
    MCAPI ClientInputLockComponent(struct ClientInputLockComponent&&);

    // symbol: ??0ClientInputLockComponent@@QEAA@AEBU0@@Z
    MCAPI ClientInputLockComponent(struct ClientInputLockComponent const&);

    // symbol: ?hasAnyLock@ClientInputLockComponent@@QEBA_NXZ
    MCAPI bool hasAnyLock() const;

    // symbol: ?hasLockCategory@ClientInputLockComponent@@QEBA_NW4ClientInputLockCategory@@@Z
    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    // symbol: ?hasLockType@ClientInputLockComponent@@QEBA_NW4ClientInputLockType@@@Z
    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    // symbol: ??4ClientInputLockComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ClientInputLockComponent& operator=(struct ClientInputLockComponent&&);

    // symbol:
    // ?registerLockCategoryChangeCallback@ClientInputLockComponent@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXW4ClientInputLockCategory@@_N@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerLockCategoryChangeCallback(std::function<void(::ClientInputLockCategory, bool)>);

    // symbol: ?serialize@ClientInputLockComponent@@QEBAIXZ
    MCAPI uint serialize() const;

    // symbol: ?setLockCategory@ClientInputLockComponent@@QEAAXW4ClientInputLockCategory@@_N@Z
    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);

    // symbol: ??1ClientInputLockComponent@@QEAA@XZ
    MCAPI ~ClientInputLockComponent();

    // NOLINTEND
};
