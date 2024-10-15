#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {
public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();

public:
    // NOLINTBEGIN
    MCAPI UserEntityIdentifierComponent(class UserEntityIdentifierComponent&&);

    MCAPI UserEntityIdentifierComponent(
        class NetworkIdentifier const&     networkId,
        ::SubClientId                      clientSubId,
        class mce::UUID                    clientUUID,
        std::string const&                 playFabID,
        std::unique_ptr<class Certificate> certificate
    );

    MCAPI bool isPrimaryClient() const;

    MCAPI class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent&&);

    MCAPI ~UserEntityIdentifierComponent();

    MCAPI static class UserEntityIdentifierComponent* tryGetFromEntity(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class UserEntityIdentifierComponent&&);

    MCAPI void* ctor$(
        class NetworkIdentifier const&     networkId,
        ::SubClientId                      clientSubId,
        class mce::UUID                    clientUUID,
        std::string const&                 playFabID,
        std::unique_ptr<class Certificate> certificate
    );

    MCAPI void dtor$();

    // NOLINTEND
};
