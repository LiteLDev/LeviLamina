#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class IEntityRegistryOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntityRegistryOwner() /*override*/;

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() = 0;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
