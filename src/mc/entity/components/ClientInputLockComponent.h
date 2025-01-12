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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk6314bf;
    ::ll::UntypedStorage<4, 4>   mUnkd0f48f;
    ::ll::UntypedStorage<8, 128> mUnka6fa64;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientInputLockComponent();

    MCAPI ClientInputLockComponent(::ClientInputLockComponent const& rhs);

    MCAPI ClientInputLockComponent(::ClientInputLockComponent&& rhs);

    MCAPI bool hasAnyLock() const;

    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    MCAPI ::ClientInputLockComponent& operator=(::ClientInputLockComponent&& rhs);

    MCAPI ::Bedrock::PubSub::Subscription
    registerLockCategoryChangeCallback(::std::function<void(::ClientInputLockCategory, bool)> callback);

    MCFOLD uint serialize() const;

    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);

    MCAPI ~ClientInputLockComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ClientInputLockComponent const& rhs);

    MCAPI void* $ctor(::ClientInputLockComponent&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
