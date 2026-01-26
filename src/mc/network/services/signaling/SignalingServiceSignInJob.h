#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/ILanEventHandler.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
struct NetherNetConnector;
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingServiceSignInJob : public ::NetherNet::ILanEventHandler,
                                  public ::std::enable_shared_from_this<::SignalingServiceSignInJob> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e1ef6;
    ::ll::UntypedStorage<8, 16> mUnk503029;
    ::ll::UntypedStorage<8, 8>  mUnk2f768f;
    ::ll::UntypedStorage<8, 48> mUnk63e84c;
    ::ll::UntypedStorage<8, 16> mUnk3d4965;
    ::ll::UntypedStorage<1, 1>  mUnkabebe1;
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
#ifdef LL_PLAT_S
    virtual ~SignalingServiceSignInJob() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~SignalingServiceSignInJob() /*override*/;
#endif

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const& event) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleSignInResult(
        ::std::error_code                                       error,
        ::Bedrock::Threading::AsyncPromise<::std::error_code>&& signInPromise,
        bool                                                    fetchRelayConfig
    ) const;

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin(bool fetchRelayConfig);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&                        netherNetConnector,
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        bool                                                                         useJsonRpc,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
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
#ifdef LL_PLAT_C
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const& event);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageReceived const& event);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
