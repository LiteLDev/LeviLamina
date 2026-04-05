#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class EditorNetworkPacket;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Network { class INetworkPayload; }
namespace Editor::Network { struct PayloadMetrics; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class PayloadServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PayloadServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> dispatchToSelf(::Editor::Network::INetworkPayload& payload) = 0;

    virtual void onReceivePayload(::EditorNetworkPacket const& packet) = 0;

    virtual ::std::vector<::std::pair<::std::string, ::Editor::Network::PayloadMetrics>>
    collectMetricsReport() const = 0;

    virtual bool isCollectingMetrics() const = 0;

    virtual ::Editor::Network::PayloadMetrics* _registerPayload(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    _send(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics) = 0;

    virtual ::Scripting::Result_deprecated<void>
    _sendToManager(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics) = 0;

    virtual ::Scripting::Result_deprecated<void> _sendToClientId(
        ::mce::UUID const&                  clientId,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> _sendToClientIds(
        ::std::vector<::mce::UUID> const&   clientIds,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    _broadcastToClients(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics) = 0;

    virtual ::Scripting::Result_deprecated<void> _broadcastToClientManagers(
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> _listenFor(
        char const*                                                      payloadName,
        ::std::function<void(::Editor::Network::INetworkPayload const&)> fnSubscriber
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Network
