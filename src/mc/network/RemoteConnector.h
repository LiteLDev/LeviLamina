#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/Connector.h"
#include "mc/network/NetworkEnableDisableListener.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
struct ConnectionDefinition;
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnector : public ::Connector,
                        public ::NetworkEnableDisableListener,
                        public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool host(::ConnectionDefinition const& definition) = 0;

    virtual bool connect(
        ::Social::GameConnectionInfo const& gameConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) = 0;

    virtual void disconnect() = 0;

    virtual void tick() = 0;

    virtual void runEvents() = 0;

    virtual bool isServer() const = 0;

    virtual void closeNetworkConnection(::NetworkIdentifier const&) = 0;

    virtual ::NetworkIdentifier getNetworkIdentifier() const = 0;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) = 0;

    virtual void setDisableLanSignaling(bool) = 0;

    virtual void setDisableTrickleIce(bool) = 0;

    virtual ~RemoteConnector() /*override*/;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
