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
    MCAPI ClientInputLockComponent();

    MCAPI ClientInputLockComponent(struct ClientInputLockComponent&&);

    MCAPI ClientInputLockComponent(struct ClientInputLockComponent const&);

    MCAPI bool hasAnyLock() const;

    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    MCAPI struct ClientInputLockComponent& operator=(struct ClientInputLockComponent&&);

    MCAPI class Bedrock::PubSub::Subscription
        registerLockCategoryChangeCallback(std::function<void(::ClientInputLockCategory, bool)>);

    MCAPI uint serialize() const;

    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);

    MCAPI ~ClientInputLockComponent();

    // NOLINTEND
};
