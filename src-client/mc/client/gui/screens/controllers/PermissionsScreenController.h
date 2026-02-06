#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/LayeredAbilities.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class UserDataScreenController;
namespace Json { class Value; }
// clang-format on

class PermissionsScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mEDUPermissionsPopupActive;
    ::ll::TypedStorage<1, 1, bool>                                         mPermissionDropdownActive;
    ::ll::TypedStorage<4, 1444, ::LayeredAbilities>                        mStartAbilityCache;
    ::ll::TypedStorage<4, 1444, ::LayeredAbilities>                        mAbilities;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mDefaultPlayerId;
    ::ll::TypedStorage<8, 8, uint64>                                       mSelectedPlayerIndex;
    ::ll::TypedStorage<1, 1, bool>                                         mCanEdit;
    ::ll::TypedStorage<1, 1, bool>                                         mPlayerListInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         mContentAreaActive;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                mPermissionNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>              mClientIds;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UserDataScreenController>> mUserDataScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PermissionsScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PermissionsScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::ActorUniqueID                                defaultPlayerId,
        ::std::weak_ptr<::UserDataScreenController>    userDataScreenController,
        ::ScreenExitBehavior                           exitBehavior
    );

    MCAPI void _closeEduPermissionsPopup();

    MCAPI void _confirmationBanningPlayerDialog(
        ::std::string const&                         selectedPlayerName,
        ::std::function<void(::ModalScreenButtonId)> callback
    );

    MCAPI void _confirmationDeoppingOtherDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationDeoppingSelfDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationKickingPlayerDialog(
        ::std::string const&                         selectedPlayerName,
        ::std::function<void(::ModalScreenButtonId)> callback
    );

    MCAPI void _confirmationNoCheatsDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _confirmationRemovingPlayerDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _decidePermissions();

    MCAPI void _evaluateCanEdit();

    MCAPI void _handleOperatorAbility();

    MCAPI bool _isLocalPlayerSelected() const;

    MCAPI bool _isNonXboxLivePlayerSelected() const;

    MCAPI void _populateClientIds();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _setCurrentPermissionLevel(::PlayerPermissionLevel permissionLevel, bool checkDefaultCustomAbilities);

    MCAPI void _setPermissionLevelEdu(::PlayerPermissionLevel permissionLevel);

    MCAPI void _setPermissionLevelRealms(::PlayerPermissionLevel permissionLevel);

    MCAPI void _syncAbilities();

    MCAPI void openEduPermissionsPopup(::ActorUniqueID id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::ActorUniqueID                                defaultPlayerId,
        ::std::weak_ptr<::UserDataScreenController>    userDataScreenController,
        ::ScreenExitBehavior                           exitBehavior
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
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onLeave();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
