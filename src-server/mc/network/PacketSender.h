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
    // vIndex: 0
    virtual ~PacketSender() /*override*/ = default;

    // vIndex: 1
    virtual bool isInitialized() const = 0;

    // vIndex: 2
    virtual void send(::Packet&) = 0;

    // vIndex: 3
    virtual void sendTo(::NetworkIdentifier const&, ::SubClientId, ::Packet&) = 0;

    // vIndex: 4
    virtual void sendToServer(::Packet&) = 0;

    // vIndex: 6
    virtual void sendToClient(::UserEntityIdentifierComponent const*, ::Packet const&) = 0;

    // vIndex: 5
    virtual void sendToClient(::NetworkIdentifier const&, ::Packet const&, ::SubClientId) = 0;

    // vIndex: 7
    virtual void sendToClients(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) = 0;

    // vIndex: 9
    virtual void sendBroadcast(::Packet const&) = 0;

    // vIndex: 8
    virtual void sendBroadcast(::NetworkIdentifier const&, ::SubClientId, ::Packet const&) = 0;

    // vIndex: 10
    virtual void flush(::NetworkIdentifier const&, ::std::function<void()>&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
