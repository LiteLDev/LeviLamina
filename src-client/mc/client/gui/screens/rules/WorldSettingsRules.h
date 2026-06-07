#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
class PersonaClient;
class TrialManager;
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
// clang-format on

class WorldSettingsRules {
public:
    // WorldSettingsRules inner types define
    enum class GeneralMultiplayerWarningState : int {
        None                                        = 0,
        CheckInternetConnection                     = 1,
        DisconnectedThirdPartyWithSubscription      = 2,
        DisconnectedThirdParty                      = 3,
        LocalMultiplayerPrivilegesBlockedThirdParty = 4,
        MultiplayerPrivilegesBlockedThirdParty      = 5,
        MultiplayerPrivilegesBlocked                = 6,
        MultiplayerPrivilegesBlockedOnConsole       = 7,
        CrossPlatformDisabled                       = 8,
        NonMultiplayerSkinEquipped                  = 9,
        Max                                         = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>>         mTrialManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                 mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>> mUser;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>               mCommands;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                   mPersonaClient;
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
    MCAPI WorldSettingsRules(
        ::MinecraftCommands&                                                      commands,
        ::PersonaClient&                                                          personaClient,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager> const&                      trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& multiplayerServiceManager,
        ::std::shared_ptr<::Social::User>                                         user,
        bool                                                                      isEditorModeEnabled
    );

    MCAPI bool _isAdhocEnabled() const;

    MCAPI bool _isCrossPlatformPlayEnabled() const;

    MCAPI bool _isPlatformServiceMultiplayerConnected() const;

    MCAPI ::CommandPermissionLevel getCommandPermissionLevel(::PlayerPermissionLevel playerPermission) const;

    MCAPI ::WorldSettingsRules::GeneralMultiplayerWarningState getGeneralMultiplayerWarningState() const;

    MCFOLD bool isEditorModeEnabled() const;

    MCAPI bool isMultiplayerSupported() const;

    MCAPI bool isPlatformBroadcastFriendsOfFriendsOptionSupported() const;

    MCAPI bool isPlatformBroadcastInviteOptionSupported() const;

    MCAPI bool isPlatformBroadcastOptionModifiable() const;

    MCAPI bool isPlatformBroadcastingSupported() const;

    MCAPI bool isUsingSwitchAdHocMode() const;

    MCAPI bool shouldShowMultiplayerWarningMessages() const;

    MCAPI ~WorldSettingsRules();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MinecraftCommands&                                                      commands,
        ::PersonaClient&                                                          personaClient,
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
