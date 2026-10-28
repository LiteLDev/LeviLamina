#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PrivateKeyManager;
struct ConnectionDefinition;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnector : public ::Connector,
                        public ::NetworkEnableDisableListener,
                        public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    RemoteConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) = 0;

    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) = 0;

    virtual void disconnect() = 0;

    virtual void tick() = 0;

    virtual void runEvents() = 0;

    virtual bool isServer() const = 0;

    virtual void closeNetworkConnection(::NetworkIdentifier const& id) = 0;

    virtual ::NetworkIdentifier getNetworkIdentifier() const = 0;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) = 0;

    virtual void setDisableLanSignaling(bool disableLanSignaling) = 0;

    virtual ~RemoteConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RemoteConnector(
        ::Connector::ConnectionCallbacks&        callbacks,
        ::brstd::copyable_function<bool() const> isNetworkAllowed
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Connector::ConnectionCallbacks& callbacks, ::brstd::copyable_function<bool() const> isNetworkAllowed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
