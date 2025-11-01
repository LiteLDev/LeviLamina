#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/nether_net/ILanEventHandler.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
// clang-format on

class SignalingServiceSignInJob : public ::NetherNet::ILanEventHandler, public ::std::enable_shared_from_this<::SignalingServiceSignInJob> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e1ef6;
    ::ll::UntypedStorage<8, 16> mUnk503029;
    ::ll::UntypedStorage<8, 8> mUnk2f768f;
    ::ll::UntypedStorage<8, 48> mUnk63e84c;
    ::ll::UntypedStorage<8, 16> mUnk3d4965;
    ::ll::UntypedStorage<1, 1> mUnkabebe1;
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
    virtual ~SignalingServiceSignInJob() /*override*/ = default;

    // vIndex: 4
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&) /*override*/;

    // vIndex: 3
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleSignInResult(::std::error_code error, ::Bedrock::Threading::AsyncPromise<::std::error_code>&& signInPromise, bool fetchRelayConfig) const;

    MCNAPI ::Bedrock::Threading::Async<::std::error_code> signin(bool fetchRelayConfig);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
