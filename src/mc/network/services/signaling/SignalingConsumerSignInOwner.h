#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class SignalingConsumerSignInOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk87492c;
    ::ll::UntypedStorage<8, 16> mUnk162295;
    ::ll::UntypedStorage<8, 8>  mUnk348f01;
    ::ll::UntypedStorage<8, 32> mUnka2abae;
    ::ll::UntypedStorage<8, 16> mUnk251788;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingConsumerSignInOwner& operator=(SignalingConsumerSignInOwner const&);
    SignalingConsumerSignInOwner(SignalingConsumerSignInOwner const&);
    SignalingConsumerSignInOwner();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SignalingConsumerSignInOwner(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin(::NetherNet::NetworkID const& netherNetId);

    MCNAPI ~SignalingConsumerSignInOwner();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
