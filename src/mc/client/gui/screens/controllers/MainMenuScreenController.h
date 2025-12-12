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
struct LevelSummary;
struct TextEditScreenEventData;
namespace Realms { struct World; }
struct DlcUIWrapper;
struct LocalWorldInfo;
struct MainMenuScreenModel;
// clang-format on

class MainMenuScreenController : public ::MinecraftScreenController {
public:
    // MainMenuScreenController inner types define
    enum class StartRealmFailureAction : int {
        ShowModalPopup     = 0,
        JustNotifyCallback = 1,
    };

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
#ifdef LL_PLAT_S
    virtual ~MainMenuScreenController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MainMenuScreenController() /*override*/;
#endif

    virtual void onOpen() /*override*/;

    virtual void showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C
    MainMenuScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);

    MCNAPI_C ::std::string
    _checkTextEditEventForProfanityAndOpenWarning(::TextEditScreenEventData const& textEditEvent);

    MCNAPI_C void _displayWorldConversionErrorModalDialog();

    MCNAPI_C ::ui::ViewRequest _startLocalWorldSubRoutine(
        ::LocalWorldInfo const&                        world,
        ::DlcUIWrapper&                                dlcUIWrapper,
        ::std::function<void(::LocalWorldInfo const&)> startLocalWorldCallback
    );

    MCNAPI_C bool _tryCopyWorld(::LevelSummary const& levelSummary);

    MCNAPI_C void
    _verifySkinApprovedBeforeJoin(::std::string const& serverType, ::std::function<void()> const& joinCallback);

    MCNAPI_C ::ui::ViewRequest attemptUserSignIn(::std::function<void()> adHocCallback);

    MCNAPI_C void confirmationNoCrossPlatformMultiplayerDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI_C void confirmationNoCrossPlatformMultiplayerSkinDialog(::std::function<void()> callback);

    MCNAPI_C ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();

    MCNAPI_C void showInvalidCrossPlatformMultiplayerSkinModal();

    MCNAPI_C void startRealm(
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
    MCNAPI_C void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onOpen();

    MCNAPI void $showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
