#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class NetherNetTransportFactory;
class NetworkIdentifier;
class NetworkSessionOwner;
class RakNetConnector;
struct ConnectionDefinition;
struct NetherNetConnector;
namespace RakNet { struct RakPeerConfiguration; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RemoteConnectorComposite : public ::RemoteConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc0ba51;
    ::ll::UntypedStorage<8, 8>  mUnkc713eb;
    ::ll::UntypedStorage<8, 8>  mUnkc90c2a;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteConnectorComposite& operator=(RemoteConnectorComposite const&);
    RemoteConnectorComposite(RemoteConnectorComposite const&);
    RemoteConnectorComposite();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RemoteConnectorComposite() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~RemoteConnectorComposite() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void setDisableLanSignaling(bool) /*override*/;
#else // LL_PLAT_C
    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;
#endif

    virtual ::std::string getLocalIp() /*override*/;

    virtual ushort getPort() const /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual bool isIPv4Supported() const /*override*/;

    virtual bool isIPv6Supported() const /*override*/;

    virtual ushort getIPv4Port() const /*override*/;

    virtual ushort getIPv6Port() const /*override*/;

#ifdef LL_PLAT_S
    virtual bool host(::ConnectionDefinition const&) /*override*/;
#else // LL_PLAT_C
    virtual bool host(::ConnectionDefinition const& definition) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool connect(::Social::GameConnectionInfo const&, ::Social::GameConnectionInfo const&) /*override*/;
#else // LL_PLAT_C
    virtual bool connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    ) /*override*/;
#endif

    virtual void disconnect() /*override*/;

    virtual void tick() /*override*/;

    virtual void runEvents() /*override*/;

    virtual bool isServer() const /*override*/;

#ifdef LL_PLAT_S
    virtual void closeNetworkConnection(::NetworkIdentifier const&) /*override*/;
#else // LL_PLAT_C
    virtual void closeNetworkConnection(::NetworkIdentifier const& id) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const&) /*override*/;
#else // LL_PLAT_C
    virtual bool setApplicationHandshakeCompleted(::NetworkIdentifier const& id) /*override*/;
#endif

    virtual ::NetworkIdentifier getNetworkIdentifier() const /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;

    virtual ::TransportLayer getNetworkType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI RemoteConnectorComposite(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector> getActiveConnector() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector> getNetherNetConnector() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::RakNetConnector> getRakNetConnector() const;

    MCNAPI void initializeNetherNetConnector(::NetherNetTransportFactory const& transportFactory);

    MCNAPI void initializeRakNetConnector(
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::RakNet::RakPeerConfiguration const&            rakPeerConfig
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&     appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const& primaryConnection,
        ::Social::GameConnectionInfo const& backupConnection
    );

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
