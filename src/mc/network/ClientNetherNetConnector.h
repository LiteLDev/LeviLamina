#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/NetherNetConnector.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { struct NetworkID; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct ResolvedExperienceInfo; }
// clang-format on

struct ClientNetherNetConnector : public ::NetherNetConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 752> mUnkb30d11;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetherNetConnector& operator=(ClientNetherNetConnector const&);
    ClientNetherNetConnector(ClientNetherNetConnector const&);
    ClientNetherNetConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetherNetConnector() /*override*/ = default;

    virtual bool closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId) /*override*/;

    virtual ::Social::GameConnectionInfo const& getConnectedGameInfo() const /*override*/;

    virtual void setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    ) /*override*/;

    virtual bool connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    ) /*override*/;

    virtual void disconnect() /*override*/;

    virtual bool isServer() const /*override*/;

    virtual ::Bedrock::Threading::Async<bool>
    OnSessionRequested(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool) /*override*/;

    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    ) /*override*/;

    virtual void
    OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, ::std::string_view, bool isLan) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $closeSessionWithUser(::NetherNet::NetworkID remoteId, uint64 sessionId);

    MCNAPI ::Social::GameConnectionInfo const& $getConnectedGameInfo() const;

    MCNAPI void $setConnectedResolvedExperienceInfo(
        ::std::optional<::Social::ResolvedExperienceInfo> const& resolvedExperienceInfo
    );

    MCNAPI bool $connect(
        ::Social::GameConnectionInfo const&                         primaryConnection,
        ::Social::GameConnectionInfo const&                         backupConnection,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator> identityGenerator
    );

    MCNAPI void $disconnect();

    MCNAPI bool $isServer() const;

    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionRequested(::NetherNet::NetworkID, uint64, ::std::string_view, ::std::string_view, bool);

    MCNAPI ::Bedrock::Threading::Async<bool> $OnSessionResponse(
        ::NetherNet::NetworkID networkID,
        uint64                 sessionId,
        ::std::string_view     assertion,
        ::std::string_view     fingerprintJson,
        bool                   isLan
    );

    MCNAPI void $OnSessionOpen(::NetherNet::NetworkID networkID, uint64 sessionId, ::std::string_view, bool isLan);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForNetworkEnableDisableListener();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
