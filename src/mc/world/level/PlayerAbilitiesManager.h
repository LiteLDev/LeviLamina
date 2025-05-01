#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class Player;
// clang-format on

class PlayerAbilitiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc638fa;
    ::ll::UntypedStorage<8, 24> mUnkdac0ef;
    ::ll::UntypedStorage<8, 24> mUnk9614c6;
    ::ll::UntypedStorage<8, 48> mUnkfcfc82;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAbilitiesManager& operator=(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager(PlayerAbilitiesManager const&);
    PlayerAbilitiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerAbilitiesManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCNAPI void sendAllPlayerAbilities(::Player const& playerReference);

    MCNAPI ~PlayerAbilitiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
