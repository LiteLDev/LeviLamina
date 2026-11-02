#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"

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
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::PlayerListEntry>> mPlayerList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>           mPacketSender;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver>> mPlayerLocationReceiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationSender>>   mPlayerLocationSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnPlayerListEntryAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                                    mOnPlayerListEntryRemoved;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerListPacket>> mPendingPlayerListRemovePacket;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onAnyGameplayUsersRemoved();

    MCNAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);

#ifdef LL_PLAT_C
    MCNAPI void addPlayerEntry(::mce::UUID const& uuid, ::PlayerListEntry&& playerListEntry);
#endif

    MCNAPI void
    initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI void removeByUUID(::mce::UUID const& uuid);

    MCNAPI void setPlayerLocationReceiver(::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> playerLocationReceiver);

    MCNAPI void setPlayerLocationSender(::Bedrock::NonOwnerPointer<::PlayerLocationSender> playerLocationSender);

    MCNAPI ::PlayerListEntry* tryGetPlayerEntry(::mce::UUID const& uuid);

    MCNAPI ~PlayerListManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
