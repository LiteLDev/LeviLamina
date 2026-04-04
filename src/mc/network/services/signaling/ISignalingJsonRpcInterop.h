#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class MessageTracker;
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class ISignalingJsonRpcInterop {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingJsonRpcInterop() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>> sendJsonRpcTo(
        ::PlayerMessaging::NetworkID          networkIdTo,
        ::std::optional<::std::string> const& messageId,
        ::std::string const&                  message
    ) const = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
    sendJsonRpc(::std::string const& message) const = 0;

    virtual ::std::shared_ptr<::MessageTracker> getMessageTracker() = 0;

    virtual void parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId) = 0;

    virtual void parseTurnConfig(::Json::Value const& config) = 0;

    virtual void setTurnConfig(
        ::std::vector<::NetherNet::StunRelayServer>&& config,
        ::std::chrono::steady_clock::time_point       expiration
    ) = 0;

    virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const& error) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
