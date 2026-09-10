#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/Connector.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
class IIdentityAssertionVerifier;
class NetherNetTransportFactory;
class PrivateKeyManager;
struct ConnectionDefinition;
namespace NetherNet { struct NetworkID; }
// clang-format on

struct ServerNetherNetConnector : public ::NetherNetConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7a1c8a;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetherNetConnector& operator=(ServerNetherNetConnector const&);
    ServerNetherNetConnector(ServerNetherNetConnector const&);
    ServerNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetherNetConnector() /*override*/;

    virtual bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys) /*override*/;

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<bool>
    OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool) /*override*/;

    virtual void OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetherNetConnector(
        ::NetherNetTransportFactory const&                               factory,
        ::Connector::ConnectionCallbacks&                                callbacks,
        ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>> clientIdentityVerifier,
        ::std::optional<::NetherNet::NetworkID>                          networkID
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNetTransportFactory const&                               factory,
        ::Connector::ConnectionCallbacks&                                callbacks,
        ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>> clientIdentityVerifier,
        ::std::optional<::NetherNet::NetworkID>                          networkID
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI ::Bedrock::Threading::Async<bool> $OnSessionRequested(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );

    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, bool isLan);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};
