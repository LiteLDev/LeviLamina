#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class EditorNetworkPacket;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Network { class INetworkPayload; }
// clang-format on

namespace Editor::Network {

class PayloadServiceProvider {
public:
    // prevent constructor by default
    PayloadServiceProvider& operator=(PayloadServiceProvider const&);
    PayloadServiceProvider(PayloadServiceProvider const&);
    PayloadServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PayloadServiceProvider();

    // vIndex: 1
    virtual ::Scripting::Result<void> dispatchToSelf(::Editor::Network::INetworkPayload&) = 0;

    // vIndex: 2
    virtual void onReceivePayload(::EditorNetworkPacket const&) = 0;

    // vIndex: 3
    virtual void
    _registerPayload(char const*, ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()>) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<void> _send(::Editor::Network::INetworkPayload&) = 0;

    // vIndex: 5
    virtual ::Scripting::Result<void> _sendToManager(::Editor::Network::INetworkPayload&) = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void> _broadcastToClients(::Editor::Network::INetworkPayload&) = 0;

    // vIndex: 7
    virtual ::Scripting::Result<void> _broadcastToClientManagers(::Editor::Network::INetworkPayload&) = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    _listenFor(char const*, ::std::function<void(::Editor::Network::INetworkPayload const&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Network
