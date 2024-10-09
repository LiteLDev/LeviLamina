#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {
public:
    class NetworkIdentifier            mNetworkId;   // this+0x0
    ::SubClientId                      mClientSubId; // this+0xA0
    mce::UUID                          mClientUUID;  // this+0xA8
    std::string                        mPlayFabId;   // this+0xB8
    std::unique_ptr<class Certificate> mCertificate; // this+0xD8

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
};
