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
    MCAPI void _applyActiveCategoryLocks();
    // NOLINTEND
};
