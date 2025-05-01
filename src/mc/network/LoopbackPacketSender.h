#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/network/PacketSender.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NetEventCallback;
class NetworkIdentifier;
class Packet;
class UserEntityIdentifierComponent;
struct NetworkIdentifierWithSubId;
// clang-format on

class LoopbackPacketSender : public ::PacketSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                 mNetwork;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetEventCallback*>>               mLoopbackCallbacks;
    ::ll::TypedStorage<8, 8, ::std::vector<::OwnerPtr<::EntityContext>> const*> mUserList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>>      mTempUserIds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isInitialized() const /*override*/;

    // vIndex: 2
    virtual void send(::Packet& packet) /*override*/;

    // vIndex: 3
    virtual void sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet) /*override*/;

    // vIndex: 4
    virtual void sendToServer(::Packet& packet) /*override*/;

    // vIndex: 5
    virtual void
    sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId) /*override*/;

    // vIndex: 6
    virtual void
    sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) /*override*/;

    // vIndex: 7
    virtual void
    sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    // vIndex: 9
    virtual void sendBroadcast(::Packet const& packet) /*override*/;

    // vIndex: 8
    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) /*override*/;

    // vIndex: 10
    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) /*override*/;

    // vIndex: 0
    virtual ~LoopbackPacketSender() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInitialized() const;

    MCNAPI void $send(::Packet& packet);

    MCNAPI void $sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet);

    MCNAPI void $sendToServer(::Packet& packet);

    MCNAPI void $sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId);

    MCNAPI void $sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet);

    MCNAPI void $sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCNAPI void $sendBroadcast(::Packet const& packet);

    MCNAPI void $sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet);

    MCNAPI void $flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
