#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/PacketSender.h"

// auto generated forward declare list
// clang-format off
class ClientOrServerNetworkSystemRef;
class EntityContext;
class NetEventCallback;
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
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
    // prevent constructor by default
    LoopbackPacketSender& operator=(LoopbackPacketSender const&);
    LoopbackPacketSender(LoopbackPacketSender const&);
    LoopbackPacketSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isInitialized() const /*override*/;

    // vIndex: 2
    virtual void send(::Packet& packet) /*override*/;

    // vIndex: 3
    virtual void sendToServer(::Packet& packet) /*override*/;

    // vIndex: 4
    virtual void sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId subid) /*override*/;

    // vIndex: 5
    virtual void
    sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) /*override*/;

    // vIndex: 6
    virtual void
    sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    // vIndex: 8
    virtual void sendBroadcast(::Packet const& packet) /*override*/;

    // vIndex: 7
    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) /*override*/;

    // vIndex: 9
    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) /*override*/;

    // vIndex: 0
    virtual ~LoopbackPacketSender() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoopbackPacketSender(::SubClientId subid, ::ServerNetworkSystem& network);

    MCAPI void addLoopbackCallback(::NetEventCallback& callback);

    MCAPI void removeLoopbackCallback(::NetEventCallback& callback);

    MCAPI void setUserList(::std::vector<::OwnerPtr<::EntityContext>> const* userList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientId subid, ::ServerNetworkSystem& network);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInitialized() const;

    MCAPI void $send(::Packet& packet);

    MCAPI void $sendToServer(::Packet& packet);

    MCAPI void $sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId subid);

    MCAPI void $sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet);

    MCAPI void $sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $sendBroadcast(::Packet const& packet);

    MCAPI void $sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet);

    MCAPI void $flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
