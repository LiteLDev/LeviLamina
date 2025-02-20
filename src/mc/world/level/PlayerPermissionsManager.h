#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerAbilitiesManager;
class PlayerListManager;
struct ActorUniqueID;
// clang-format on

class PlayerPermissionsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd76832;
    ::ll::UntypedStorage<8, 24> mUnkb51041;
    ::ll::UntypedStorage<8, 64> mUnk1e3bd6;
    ::ll::UntypedStorage<8, 8>  mUnk24d2d5;
    ::ll::UntypedStorage<1, 1>  mUnkf93df1;
    ::ll::UntypedStorage<8, 24> mUnk1b11b8;
    ::ll::UntypedStorage<8, 16> mUnkf1756e;
    ::ll::UntypedStorage<8, 48> mUnk7eec65;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsManager& operator=(PlayerPermissionsManager const&);
    PlayerPermissionsManager(PlayerPermissionsManager const&);
    PlayerPermissionsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerPermissionsManager(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager,
        ::Bedrock::NonOwnerPointer<::PlayerListManager>      playerListManager,
        ::std::function<::Player*()>                         getPrimaryLocalPlayer
    );

    MCAPI bool isPlayerValid(::ActorUniqueID playerId) const;

    MCAPI bool loadPlayerPermissions(::ActorUniqueID playerId);

    MCAPI ~PlayerPermissionsManager();
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
};
