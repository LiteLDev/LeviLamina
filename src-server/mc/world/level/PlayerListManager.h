#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class PacketSender;
class PlayerListEntry;
class PlayerListPacket;
class PlayerLocationReceiver;
class PlayerLocationSender;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::PlayerListEntry>> mPlayerList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver>> mPlayerLocationReceiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationSender>> mPlayerLocationSender;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>> mOnPlayerListEntryAdded;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>> mOnPlayerListEntryRemoved;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerListPacket>> mPendingPlayerListRemovePacket;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerListManager();

    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI void initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void removeByUUID(::mce::UUID const& uuid);

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI void setPlayerLocationReceiver(::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> playerLocationReceiver);

    MCAPI void setPlayerLocationSender(::Bedrock::NonOwnerPointer<::PlayerLocationSender> playerLocationSender);

    MCAPI ~PlayerListManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
