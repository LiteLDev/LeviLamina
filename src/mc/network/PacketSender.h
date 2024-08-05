#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    PacketSender& operator=(PacketSender const&);
    PacketSender(PacketSender const&);
    PacketSender();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketSender() = default;

    // vIndex: 1
    virtual void send(class Packet& packet) = 0;

    // vIndex: 2
    virtual void sendToServer(class Packet& packet) = 0;

    // vIndex: 3
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const& packet) = 0;

    // vIndex: 4
    virtual void sendToClient(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId subid) = 0;

    // vIndex: 5
    virtual void
    sendToClients(std::vector<struct NetworkIdentifierWithSubId> const& ids, class Packet const& packet) = 0;

    // vIndex: 6
    virtual void sendBroadcast(class Packet const& packet) = 0;

    // vIndex: 7
    virtual void
    sendBroadcast(class NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, class Packet const& packet) = 0;

    // vIndex: 8
    virtual void flush(class NetworkIdentifier const& id, std::function<void()>&& callback) = 0;

    // NOLINTEND
};
