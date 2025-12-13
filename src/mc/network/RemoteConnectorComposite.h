#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetworkIdentifier;
class NetworkSessionOwner;
struct ConnectionDefinition;
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnectorComposite : public ::RemoteConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc0ba51;
    ::ll::UntypedStorage<8, 8>  mUnk48bddd;
    ::ll::UntypedStorage<8, 8>  mUnk39d08b;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteConnectorComposite& operator=(RemoteConnectorComposite const&);
    RemoteConnectorComposite(RemoteConnectorComposite const&);
    RemoteConnectorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteConnectorComposite() /*override*/ = default;

    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;

    virtual ::std::string getLocalIp() /*override*/;

    virtual ushort getPort() const /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual bool isIPv4Supported() const /*override*/;

    virtual bool isIPv6Supported() const /*override*/;

    virtual ushort getIPv4Port() const /*override*/;

    virtual ushort getIPv6Port() const /*override*/;

    virtual bool host(::ConnectionDefinition const& definition) /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const& gameConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;

    virtual void disconnect() /*override*/;

    virtual void tick() /*override*/;

    virtual void runEvents() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual void closeNetworkConnection(::NetworkIdentifier const& id) /*override*/;

    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) /*override*/;

    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;

    virtual ::TransportLayer getNetworkType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RemoteConnectorComposite(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector> getActiveConnector() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setDisableLanSignaling(bool disableLanSignaling);

    MCNAPI ::std::string $getLocalIp();

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI bool $host(::ConnectionDefinition const& definition);

    MCNAPI bool
    $connect(::Social::GameConnectionInfo const& gameConnection, ::Social::GameConnectionInfo const& backupConnection);

    MCNAPI void $disconnect();

    MCNAPI void $tick();

    MCNAPI void $runEvents();

    MCNAPI bool $isServer() const;

    MCNAPI void $closeNetworkConnection(::NetworkIdentifier const& id);

    MCNAPI bool $setApplicationHandshakeCompleted(::NetworkIdentifier const& id);

    MCNAPI ::NetworkIdentifier $getNetworkIdentifier() const;

    MCNAPI void $_onDisable();

    MCNAPI void $_onEnable();

    MCNAPI ::TransportLayer $getNetworkType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};
