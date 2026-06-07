#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/entity/components/ClientInputLockType.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct ClientInputLockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ClientInputLockCategory, 13>> mActiveCategories;
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ClientInputLockType, 11>>     mClientInputLocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void deserialize(uint data);
#endif

    MCAPI bool hasLockCategory(::ClientInputLockCategory category) const;

    MCAPI bool hasLockType(::ClientInputLockType lock) const;

    MCFOLD uint serialize() const;

    MCAPI void setLockCategory(::ClientInputLockCategory category, bool state);
    // NOLINTEND
};
