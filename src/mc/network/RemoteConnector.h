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
    // vIndex: 9
    virtual bool host(::ConnectionDefinition const& definition) = 0;

    // vIndex: 10
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) = 0;

    // vIndex: 11
    virtual void disconnect() = 0;

    // vIndex: 12
    virtual void tick() = 0;

    // vIndex: 13
    virtual void runEvents() = 0;

    // vIndex: 14
    virtual bool isServer() const = 0;

    // vIndex: 15
    virtual void closeNetworkConnection(::NetworkIdentifier const&) = 0;

    // vIndex: 16
    virtual ::NetworkIdentifier getNetworkIdentifier() const = 0;

    // vIndex: 17
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) = 0;

    // vIndex: 0
    virtual ~RemoteConnector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
