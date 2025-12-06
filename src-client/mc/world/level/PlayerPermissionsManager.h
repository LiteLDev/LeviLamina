#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerAbilitiesManager;
class PlayerListManager;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PlayerPermissionsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>> mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerListManager>>      mPlayerListManager;
    ::ll::TypedStorage<8, 64, ::std::function<::Player*()>>                         mGetPrimaryLocalPlayer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                       mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>>              mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::AbilitiesIndex, bool>>>   mCurrentPlayerPermissionsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::AbilitiesIndex, bool>>>   mLocalPlayerPermissionsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mPlayerAbilitiesSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::
            Publisher<void(::ActorUniqueID const&, bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mPlayerPermissionsChangedPublisher;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::ActorUniqueID const&, ::std::optional<::PlayerPermissionLevel>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mCachedPlayerPermissionLevelChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerPermissionsManager();

    // vIndex: 1
    virtual bool hasPlayerPermissions(::ActorUniqueID playerId) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerPermissionsManager(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager,
        ::Bedrock::NonOwnerPointer<::PlayerListManager>      playerListManager,
        ::std::function<::Player*()>                         getPrimaryLocalPlayer
    );

    MCAPI void _loadLocalPermissionsList();

    MCAPI void _updatePermissionLevel();

    MCAPI void _updatePermissionsList();

    MCAPI bool arePermissionsSynced(
        ::std::optional<::PlayerPermissionLevel>           playerPermissionLevel,
        ::std::vector<::std::pair<::AbilitiesIndex, bool>> playerPermissions
    ) const;

    MCAPI bool loadPlayerPermissions(::ActorUniqueID playerId);

    MCAPI bool savePlayerPermissions(::ActorUniqueID playerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager,
        ::Bedrock::NonOwnerPointer<::PlayerListManager>      playerListManager,
        ::std::function<::Player*()>                         getPrimaryLocalPlayer
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
    MCAPI bool $hasPlayerPermissions(::ActorUniqueID playerId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
