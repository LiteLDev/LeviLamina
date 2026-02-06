#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
struct SkinRepositoryClientInterface;
struct TrialManager;
namespace Social { class IUserManager; }
namespace Social { struct MultiplayerServiceManager; }
namespace Social { struct User; }
// clang-format on

class WorldSettingsRules {
public:
    // WorldSettingsRules inner types define
    enum class GeneralMultiplayerWarningState : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>>         mTrialManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                 mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>> mUser;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>               mCommands;
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&>   mSkinRepositoryClientInterface;
    ::ll::TypedStorage<1, 1, bool>                               mIsEditorModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsRules& operator=(WorldSettingsRules const&);
    WorldSettingsRules(WorldSettingsRules const&);
    WorldSettingsRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSettingsRules(::WorldSettingsRules&&);

    MCAPI WorldSettingsRules(
        ::MinecraftCommands&                                                      commands,
        ::SkinRepositoryClientInterface&                                          skinRepositoryClientInterface,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager> const&                      trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& multiplayerServiceManager,
        ::std::shared_ptr<::Social::User>                                         user,
        bool                                                                      isEditorModeEnabled
    );

    MCAPI bool _isAdhocEnabled() const;

    MCAPI ~WorldSettingsRules();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorldSettingsRules&&);

    MCAPI void* $ctor(
        ::MinecraftCommands&                                                      commands,
        ::SkinRepositoryClientInterface&                                          skinRepositoryClientInterface,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager> const&                      trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& multiplayerServiceManager,
        ::std::shared_ptr<::Social::User>                                         user,
        bool                                                                      isEditorModeEnabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
