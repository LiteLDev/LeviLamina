#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
class UserEntityIdentifierComponent;
struct NetworkIdentifierWithSubId;
// clang-format on

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSender() /*override*/ = default;

    virtual bool isInitialized() const = 0;

    virtual void send(::Packet& packet) = 0;

    virtual void sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet) = 0;

    virtual void sendToServer(::Packet& packet) = 0;

    virtual void sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) = 0;

    virtual void sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId) = 0;

    virtual void sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) = 0;

    virtual void sendBroadcast(::Packet const& packet) = 0;

    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) = 0;

    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
