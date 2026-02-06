#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/player/PickCustomSkinResult.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class DlcUIWrapper;
class MainMenuScreenModel;
struct LevelSummary;
struct LocalWorldInfo;
struct TextEditScreenEventData;
namespace Realms { struct World; }
// clang-format on

class MainMenuScreenController : public ::MinecraftScreenController {
public:
    // MainMenuScreenController inner types define
    enum class StartRealmFailureAction : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>> mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncTracker>>         mAsyncTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainMenuScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MainMenuScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);

    MCAPI ::std::string _checkTextEditEventForProfanityAndOpenWarning(::TextEditScreenEventData const& textEditEvent);

    MCAPI void _displayWorldConversionErrorModalDialog();

    MCAPI ::ui::ViewRequest _startLocalWorldSubRoutine(
        ::LocalWorldInfo const&                        world,
        ::DlcUIWrapper&                                dlcUIWrapper,
        ::std::function<void(::LocalWorldInfo const&)> startLocalWorldCallback
    );

    MCAPI bool _tryCopyWorld(::LevelSummary const& levelSummary);

    MCAPI void
    _verifySkinApprovedBeforeJoin(::std::string const& serverType, ::std::function<void()> const& joinCallback);

    MCAPI ::ui::ViewRequest attemptUserSignIn(::std::function<void()> adHocCallback);

    MCAPI void confirmationExperimentalVersionDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void confirmationNoCrossPlatformMultiplayerDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void confirmationNoCrossPlatformMultiplayerSkinDialog(::std::function<void()> callback);

    MCAPI ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();

    MCAPI void needOnlineNetworkForXBLSignInDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void showInvalidCrossPlatformMultiplayerSkinModal();

    MCAPI void startRealm(
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::Realms::World&                          world,
        ::std::function<void(::IMinecraftEventing::RealmConnectionResult, ::std::optional<::Realms::FailureReason>)>
                                                            callback,
        ::MainMenuScreenController::StartRealmFailureAction failureAction,
        ::std::function<void()>                             onlineSafetyCancelledCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
