#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/network/services/signaling/MessagePerformance.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcError; }
namespace PlayerMessaging { struct NetworkID; }
namespace mce { class UUID; }
// clang-format on

class MessageTracker {
public:
    // MessageTracker inner types declare
    // clang-format off
    struct MessageStatus;
    // clang-format on

    // MessageTracker inner types define
    struct MessageStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke1b276;
        ::ll::UntypedStorage<8, 16> mUnkc4ec43;
        ::ll::UntypedStorage<8, 16> mUnkff686d;
        ::ll::UntypedStorage<8, 24> mUnk8e645e;
        ::ll::UntypedStorage<1, 1>  mUnk8a6cb0;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3969f8;
    ::ll::UntypedStorage<8, 80> mUnka39c88;
    ::ll::UntypedStorage<8, 80> mUnk80568d;
    ::ll::UntypedStorage<8, 48> mUnkbcdda6;
    ::ll::UntypedStorage<8, 48> mUnkdc3254;
    ::ll::UntypedStorage<8, 8>  mUnkc75976;
    ::ll::UntypedStorage<8, 8>  mUnk11e362;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageTracker& operator=(MessageTracker const&);
    MessageTracker(MessageTracker const&);
    MessageTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _complete(
        ::NetherNet::ESessionError        result,
        ::mce::UUID                       key,
        ::MessageTracker::MessageStatus&& value,
        ::MessagePerformance::Status      status
    );

    MCNAPI void _continueTracking(::mce::UUID key, ::MessageTracker::MessageStatus&& value);

    MCNAPI void _tryGetValue(
        ::std::string const&                                                    messageId,
        ::std::function<void(::mce::UUID, ::MessageTracker::MessageStatus&&)>&& fn
    );

    MCNAPI ::Bedrock::Threading::Async<::NetherNet::ESessionError> add(::std::string const& messageId, bool isP2P);

    MCNAPI void messageAccepted(::std::string const& messageId);

    MCNAPI void messageError(::std::string const& messageId, ::JsonRpc::JsonRpcError const& error);

    MCNAPI void messageSent(
        ::std::optional<::PlayerMessaging::NetworkID> to,
        ::std::string const&                          message,
        ::std::string const&                          messageId,
        ::std::error_code                             error
    );
    // NOLINTEND
};
