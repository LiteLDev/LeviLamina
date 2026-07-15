#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
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
    ::ll::UntypedStorage<8, 72> mUnk7fb513;
    ::ll::UntypedStorage<8, 8>  mUnk83278f;
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
    virtual ~SignalingServiceSignInJob() /*override*/ = default;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SignalingServiceSignInJob(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&                        netherNetConnector,
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin(bool fetchRelayConfig);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&&                        netherNetConnector,
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
