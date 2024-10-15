#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ClientInputLockType.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

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

    MCAPI ClientInputLockComponent(struct ClientInputLockComponent&& rhs);

    MCAPI ClientInputLockComponent(struct ClientInputLockComponent const& rhs);

    MCAPI bool hasAnyLock() const;

    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    MCAPI struct ClientInputLockComponent& operator=(struct ClientInputLockComponent&& rhs);

    MCAPI class Bedrock::PubSub::Subscription
    registerLockCategoryChangeCallback(std::function<void(::ClientInputLockCategory, bool)> callback);

    MCAPI uint serialize() const;

    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);

    MCAPI ~ClientInputLockComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ClientInputLockComponent&& rhs);

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ClientInputLockComponent const& rhs);

    MCAPI void dtor$();

    // NOLINTEND
};
