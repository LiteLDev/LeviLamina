#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/WorldPlayersListListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
class PlayerListManager;
struct LocalPlayerChangedConnector;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace mce { class UUID; }
// clang-format on

namespace World {

class WorldPlayerListTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>               mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerListManager>> mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mLocalPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mLocalPlayerLoaded;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                      mPlayerList;
    ::ll::TypedStorage<8, 8, double>                                           mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double>                                           mTimestampMs;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirtyOperation;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                                 mListSubscribers;
    ::ll::TypedStorage<8, 72, ::World::WorldPlayersListListener> mWorldPlayersListListener;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayerListTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayerListTracker();

    virtual ::PlayerListEntry const* getPlayerEntry(::mce::UUID const& uuid);

    virtual ::std::vector<::mce::UUID> _getCurrentLobby() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayerListTracker(
        ::std::function<::LocalPlayer*()> getCurrentLocalPlayer,
        ::LocalPlayerChangedConnector     localPlayerChangedConnector
    );

    MCAPI void _init();

    MCAPI void refresh();

    MCFOLD ::Bedrock::PubSub::Subscription registerListener(::std::function<void()> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::LocalPlayer*()> getCurrentLocalPlayer,
        ::LocalPlayerChangedConnector     localPlayerChangedConnector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::PlayerListEntry const* $getPlayerEntry(::mce::UUID const& uuid);

    MCAPI ::std::vector<::mce::UUID> $_getCurrentLobby() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
