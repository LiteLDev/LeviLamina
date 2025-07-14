#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/ILanEventHandler.h"
#include "mc/network/services/signaling/SignalServiceConnectStage.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
struct NetherNetConnector;
namespace Json { class Value; }
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
// clang-format on

class SignalingServiceSignInJob : public ::NetherNet::ILanEventHandler,
                                  public ::std::enable_shared_from_this<::SignalingServiceSignInJob> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e1ef6;
    ::ll::UntypedStorage<8, 24> mUnk79b023;
    ::ll::UntypedStorage<8, 8>  mUnk2f768f;
    ::ll::UntypedStorage<8, 16> mUnk3ab861;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceSignInJob& operator=(SignalingServiceSignInJob const&);
    SignalingServiceSignInJob(SignalingServiceSignInJob const&);
    SignalingServiceSignInJob();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignalingServiceSignInJob() /*override*/;

    // vIndex: 4
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const& event) /*override*/;

    // vIndex: 3
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingServiceSignInJob(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& netherNetConnector,
        ::Bedrock::NotNullNonOwnerPtr<::SignalingService>     signalingService
    );

    MCNAPI void
    _fireEventSignalServiceConnect(::SignalServiceConnectStage stage, ::Json::Value const& properties) const;

    MCNAPI void _handleRelayConfig(
        ::std::vector<::NetherNet::StunRelayServer> const&      config,
        ::Bedrock::Threading::AsyncPromise<::std::error_code>&& signInPromise
    ) const;

    MCNAPI void _handleSignInResult(
        ::std::error_code                                       error,
        ::Bedrock::Threading::AsyncPromise<::std::error_code>&& signInPromise,
        bool                                                    fetchRelayConfig
    ) const;

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::error_code>> signin(bool fetchRelayConfig) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& netherNetConnector,
        ::Bedrock::NotNullNonOwnerPtr<::SignalingService>     signalingService
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
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
