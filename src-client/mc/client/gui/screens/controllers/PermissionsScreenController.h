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
    ::ll::TypedStorage<1, 1, bool>                                         mEduPermissionsPopupActive;
    ::ll::TypedStorage<1, 1, bool>                                         mPermissionDropdownActive;
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities>                        mStartAbilityCache;
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities>                        mAbilities;
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
    virtual ~PermissionsScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PermissionsScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::ActorUniqueID                                defaultPlayerId,
        ::std::weak_ptr<::UserDataScreenController>    userDataScreenController,
        ::ScreenExitBehavior                           exitBehavior
    );

    MCNAPI void _closeEduPermissionsPopup();

    MCNAPI void _confirmationDeoppingOtherDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void _confirmationDeoppingSelfDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void _confirmationNoCheatsDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void _decidePermissions();

    MCNAPI void _evaluateCanEdit();

    MCNAPI bool _isLocalPlayerSelected() const;

    MCNAPI bool _isNonXboxLivePlayerSelected() const;

    MCNAPI void _populateClientIds();

    MCNAPI void _setCurrentPermissionLevel(::PlayerPermissionLevel permissionLevel, bool checkDefaultCustomAbilities);

    MCNAPI void _syncAbilities();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::ActorUniqueID                                defaultPlayerId,
        ::std::weak_ptr<::UserDataScreenController>    userDataScreenController,
        ::ScreenExitBehavior                           exitBehavior
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI void $onLeave();
    // NOLINTEND
};
