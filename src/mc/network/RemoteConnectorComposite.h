#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class NetherNetTransportFactory;
class NetworkIdentifier;
class NetworkSessionOwner;
class PrivateKeyManager;
struct ConnectionDefinition;
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace RakNet { struct RakPeerConfiguration; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct ResolvedExperienceInfo; }
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
    virtual ~RemoteConnectorComposite() /*override*/ = default;

    virtual void setDisableLanSignaling(bool disableLanSignaling) /*override*/;

    virtual ::std::string getLocalIp() /*override*/;

    virtual ushort getPort() const /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual void setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    ) /*override*/;

    virtual bool isIPv4Supported() const /*override*/;

    virtual bool isIPv6Supported() const /*override*/;

    virtual ushort getIPv4Port() const /*override*/;

    virtual ushort getIPv6Port() const /*override*/;

    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
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
#ifdef LL_PLAT_C
    MCNAPI RemoteConnectorComposite(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::brstd::copyable_function<bool() const>             isNetworkAllowed,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector> getActiveConnector() const;

    MCNAPI void initializeNetherNetConnector(
        ::NetherNetTransportFactory const& transportFactory,
        ::std::shared_ptr<void>            httpLibraryToken
    );

    MCNAPI void initializeRakNetConnector(
        ::RakPeerHelper::IPSupportInterface&  ipInterface,
        ::RakNet::RakPeerConfiguration const& rakPeerConfig
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::RakNetConnector::ConnectionCallbacks&              callbacks,
        ::brstd::copyable_function<bool() const>             isNetworkAllowed,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner> networkSessionOwner
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setDisableLanSignaling(bool disableLanSignaling);

    MCNAPI ::std::string $getLocalIp();

    MCNAPI ushort $getPort() const;

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI void $setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    );

    MCNAPI bool $isIPv4Supported() const;

    MCNAPI bool $isIPv6Supported() const;

    MCNAPI ushort $getIPv4Port() const;

    MCNAPI ushort $getIPv6Port() const;

    MCNAPI bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
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
};
