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
struct DlcUIWrapper;
struct LevelSummary;
struct LocalWorldInfo;
struct MainMenuScreenModel;
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
    ::ll::UntypedStorage<8, 16> mUnk793974;
    ::ll::UntypedStorage<8, 8>  mUnkfd6e69;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenController& operator=(MainMenuScreenController const&);
    MainMenuScreenController(MainMenuScreenController const&);
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
    MCNAPI MainMenuScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);

    MCNAPI ::std::string _checkTextEditEventForProfanityAndOpenWarning(::TextEditScreenEventData const& textEditEvent);

    MCNAPI void _displayWorldConversionErrorModalDialog();

    MCNAPI ::ui::ViewRequest _startLocalWorldSubRoutine(
        ::LocalWorldInfo const&                        world,
        ::DlcUIWrapper&                                dlcUIWrapper,
        ::std::function<void(::LocalWorldInfo const&)> startLocalWorldCallback
    );

    MCNAPI bool _tryCopyWorld(::LevelSummary const& levelSummary);

    MCNAPI void
    _verifySkinApprovedBeforeJoin(::std::string const& serverType, ::std::function<void()> const& joinCallback);

    MCNAPI ::ui::ViewRequest attemptUserSignIn(::std::function<void()> adHocCallback);

    MCNAPI void confirmationExperimentalVersionDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void confirmationNoCrossPlatformMultiplayerDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void confirmationNoCrossPlatformMultiplayerSkinDialog(::std::function<void()> callback);

    MCNAPI ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();

    MCNAPI void needOnlineNetworkForXBLSignInDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void showInvalidCrossPlatformMultiplayerSkinModal();

    MCNAPI void startRealm(
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
    MCNAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
