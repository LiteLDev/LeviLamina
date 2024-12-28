#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class Certificate;
class EntityContext;
class NetworkIdentifier;
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>            mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId>                    mClientSubId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     mClientUUID;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlayFabIdUnverified;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Certificate>> mCertificate;
    // NOLINTEND

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserEntityIdentifierComponent(
        ::NetworkIdentifier const&       networkId,
        ::SubClientId                    clientSubId,
        ::mce::UUID                      clientUUID,
        ::std::string const&             playFabID,
        ::std::unique_ptr<::Certificate> certificate
    );

    MCAPI bool isPrimaryClient() const;

    MCAPI ::UserEntityIdentifierComponent& operator=(::UserEntityIdentifierComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UserEntityIdentifierComponent* tryGetFromEntity(::EntityContext& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::NetworkIdentifier const&       networkId,
        ::SubClientId                    clientSubId,
        ::mce::UUID                      clientUUID,
        ::std::string const&             playFabID,
        ::std::unique_ptr<::Certificate> certificate
    );
    // NOLINTEND
};
