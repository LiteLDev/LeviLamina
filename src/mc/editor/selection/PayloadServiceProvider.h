#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class EditorNetworkPacket;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Network { class INetworkPayload; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class PayloadServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PayloadServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> dispatchToSelf(::Editor::Network::INetworkPayload&) = 0;

    virtual void onReceivePayload(::EditorNetworkPacket const&) = 0;

    virtual void
    _registerPayload(char const*, ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()>) = 0;

    virtual ::Scripting::Result_deprecated<void> _send(::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<void> _sendToManager(::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    _sendToClientId(::mce::UUID const&, ::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    _sendToClientIds(::std::vector<::mce::UUID> const&, ::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<void> _broadcastToClients(::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<void> _broadcastToClientManagers(::Editor::Network::INetworkPayload&) = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    _listenFor(char const*, ::std::function<void(::Editor::Network::INetworkPayload const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Network
