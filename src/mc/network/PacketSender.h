#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {
public:
    SubClientId mSenderSubId; // this+0x18

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
    virtual void
    sendToClient(class UserEntityIdentifierComponent const* userIdentifier, class Packet const& packet) = 0;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
