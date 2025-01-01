#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/Certificate.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/UUID.h"


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
    ::NetworkIdentifier              mNetworkId;
    ::SubClientId                    mClientSubId;
    ::mce::UUID                      mClientUUID;
    ::std::string                    mPlayFabIdUnverified;
    ::std::unique_ptr<::Certificate> mCertificate;
    // NOLINTEND

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
