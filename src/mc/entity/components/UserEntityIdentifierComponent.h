#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationInfo.h"
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class UserEntityIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>        mNetworkId;
    ::ll::TypedStorage<1, 1, ::SubClientId>                mClientSubId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mClientUUID;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>   mAuthenticationType;
    ::ll::TypedStorage<8, 320, ::PlayerAuthenticationInfo> mTrustedPlayerInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    UserEntityIdentifierComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserEntityIdentifierComponent(
        ::NetworkIdentifier const&        networkId,
        ::SubClientId                     clientSubId,
        ::mce::UUID                       clientUUID,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& trustedInfo
    );

    MCFOLD ::PlayerAuthenticationType getAuthenticationType() const;

    MCAPI ::mce::UUID getClientUUID() const;

    MCAPI ::std::string getIdentityName() const;

    MCFOLD ::NetworkIdentifier const& getNetworkId() const;

    MCAPI ::std::string getPlayFabId() const;

    MCFOLD ::SubClientId getSubClientId() const;

    MCFOLD ::std::string getXuid() const;

    MCAPI bool isLoggedIntoXboxLive() const;

    MCAPI bool isPrimaryClient() const;
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
        ::NetworkIdentifier const&        networkId,
        ::SubClientId                     clientSubId,
        ::mce::UUID                       clientUUID,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& trustedInfo
    );
    // NOLINTEND
};
