#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/network/PacketSender.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
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
    LoopbackPacketSender();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInitialized() const /*override*/;

    virtual void send(::Packet& packet) /*override*/;

    virtual void sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet) /*override*/;

    virtual void sendToServer(::Packet& packet) /*override*/;

    virtual void
    sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId) /*override*/;

    virtual void
    sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet) /*override*/;

    virtual void
    sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    virtual void sendBroadcast(::Packet const& packet) /*override*/;

    virtual void
    sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet) /*override*/;

    virtual void flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI LoopbackPacketSender(::SubClientId subid, ::ClientNetworkSystem& network);
#endif

    MCAPI LoopbackPacketSender(::SubClientId subid, ::ServerNetworkSystem& network);

    MCFOLD void addLoopbackCallback(::NetEventCallback& callback);

    MCAPI void removeLoopbackCallback(::NetEventCallback& callback);

    MCFOLD void setUserList(::std::vector<::OwnerPtr<::EntityContext>> const* userList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SubClientId subid, ::ClientNetworkSystem& network);
#endif

    MCAPI void* $ctor(::SubClientId subid, ::ServerNetworkSystem& network);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInitialized() const;

    MCAPI void $send(::Packet& packet);

    MCAPI void $sendTo(::NetworkIdentifier const& id, ::SubClientId subid, ::Packet& packet);

    MCAPI void $sendToServer(::Packet& packet);

    MCAPI void $sendToClient(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId recipientSubId);

    MCAPI void $sendToClient(::UserEntityIdentifierComponent const* userIdentifier, ::Packet const& packet);

    MCAPI void $sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $sendBroadcast(::Packet const& packet);

    MCAPI void $sendBroadcast(::NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, ::Packet const& packet);

    MCAPI void $flush(::NetworkIdentifier const& id, ::std::function<void()>&& callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
