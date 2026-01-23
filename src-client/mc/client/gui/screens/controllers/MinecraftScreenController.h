#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/SafeZoneBuffer.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/gui/screens/controllers/UpdateSliderProgressMode.h"
#include "mc/client/player/PickCustomSkinResult.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class ItemInstance;
class MinecraftScreenModel;
struct DropdownScreenController;
struct ModalScreenData;
struct PDFOptions;
struct UIPropertyBag;
namespace Core { class Path; }
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

class MinecraftScreenController : public ::ScreenController,
                                  public ::Bedrock::EnableNonOwnerReferences,
                                  public ::std::enable_shared_from_this<::MinecraftScreenController> {
public:
    // MinecraftScreenController inner types declare
    // clang-format off
    struct LeaveScreenInfo;
    // clang-format on

    // MinecraftScreenController inner types define
    struct LeaveScreenInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk597512;
    ::ll::UntypedStorage<4, 4>  mUnk6b49e5;
    ::ll::UntypedStorage<4, 4>  mUnk3fbbc6;
    ::ll::UntypedStorage<4, 4>  mUnk9d8073;
    ::ll::UntypedStorage<1, 1>  mUnk398789;
    ::ll::UntypedStorage<8, 64> mUnk74da16;
    ::ll::UntypedStorage<8, 32> mUnk88ae43;
    ::ll::UntypedStorage<8, 32> mUnke0c100;
    ::ll::UntypedStorage<8, 40> mUnk48d201;
    ::ll::UntypedStorage<1, 1>  mUnk500617;
    ::ll::UntypedStorage<8, 64> mUnked78bd;
    ::ll::UntypedStorage<8, 64> mUnkba0362;
    ::ll::UntypedStorage<1, 1>  mUnk611fb7;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenController& operator=(MinecraftScreenController const&);
    MinecraftScreenController(MinecraftScreenController const&);
    MinecraftScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScreenController() /*override*/;

    virtual ::ui::ViewRequest tryExit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual uint getSceneId() const /*override*/;

    virtual void setSuspendInput(bool suspendInput) /*override*/;

    virtual void setSuspendDirectionalInput(bool suspendDirectionalInput) /*override*/;

    virtual void leaveScreen(::std::string const& expectedScreenName) /*override*/;

    virtual void onInit() /*override*/;

    virtual void onDelete() /*override*/;

    virtual void onOpen() /*override*/;

    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual bool _doesScreenHaveExitBehavior() const /*override*/;

    virtual bool _isStillValid() const;

    virtual bool _getGamepadHelperVisible() const;

    virtual bool _getMixedHelperVisible() const;

    virtual bool _getKeyboardHelperVisible() const;

    virtual bool _getGestureControlEnabled() const;

    virtual ::std::string _getButtonStartDescription();

    virtual ::std::string _getButtonADescription();

    virtual ::std::string _getButtonBDescription();

    virtual ::std::string _getButtonXDescription();

    virtual ::std::string _getButtonYDescription();

    virtual ::std::string _getButtonKeyboardDescription();

    virtual void showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);

    virtual ::std::string _getScreenName() const;

    virtual ::ui::ViewRequest
    promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::ScreenExitBehavior                      exitBehavior,
        bool                                      usesErrorPopupInfo
    );

    MCNAPI void _attemptAddFriends(::std::function<void()> callback);

    MCNAPI void _attemptConnect(::std::function<void(::Social::UserPlatformConnectionResult)> callback);

    MCNAPI bool _attemptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCNAPI void _attemptSigninOrSignup(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCNAPI bool _checkRealmCreatePermissions();

    MCNAPI void _closeModalDialog();

    MCNAPI void
    _displayCustomModalPopup(::ModalScreenData const& modalData, ::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI void _displayJsonDefinedControlPopup(
        ::UIPropertyBag const& popupBag,
        ::std::string const&   factory,
        ::std::string const&   ttsTitle,
        ::std::string const&   ttsContent
    );

    MCNAPI void _displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name,
        ::std::string const& ttsTitle,
        ::std::string const& ttsContent
    );

    MCNAPI void _displayPrivilegesBlockedModalPopup(
        ::std::string const& messageString,
        ::std::string const& closeButtonTitle,
        bool                 showOpenAccountSettingButton
    );

    MCNAPI void _displaySignOutFailedModalPopup(::std::string const& error);

    MCNAPI void _displayStandardModalPopup(
        ::std::string const&        title,
        ::std::string const&        message,
        ::ModalScreenButtonMode     buttonNumber,
        ::std::function<void(bool)> callback,
        ::std::string const&        telemetryOverride
    );

    MCNAPI void _gateRealmsWhenCrossPlatformIsDisabled(::std::function<void()> callback);

    MCNAPI int
    _getStepSliderValue(::std::function<int()> getValue, ::std::string const& valueBindingName, bool continuousUpdate);

    MCNAPI void _handleSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCNAPI void _handleSignInFailure(
        ::Social::MultiIdentitySigninResult const&                 signInResult,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback,
        bool                                                       isAutoSignIn
    );

    MCNAPI bool _isApprovedLink(::std::string const& hyperlink) const;

    MCNAPI void _onAttemptSignInResult(
        ::Social::MultiIdentitySigninResult const&                 result,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCNAPI ::ui::ViewRequest _onModalEventReceived(::ModalScreenButtonId modalResult, bool buttonClosesModal);

    MCNAPI void
    _promptEduSwitchAccounts(bool showModal, ::std::string const& buttonName, ::LastClickedSource lastClickedSource);

    MCNAPI void _registerEventHandlers();

    MCNAPI bool _resolveSafeZoneVisibility(::SafeZoneBuffer buffer) const;

    MCNAPI ::std::string const
    _retrieveBindingValueFromPropertyBag(::std::string const& bindingName, ::UIPropertyBag& propertyBag) const;

    MCNAPI void _showLiveMultiplayerModal();

    MCNAPI void _showNoWifiModal();

    MCNAPI bool _tryNavigateToXblUpsellScreen();

    MCNAPI bool _tryShowSuspendWarningModal(::std::function<void()> onConfirm);

    MCNAPI void displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name
    );

    MCNAPI void
    exportPDF(::PDFOptions options, ::std::string const& defaultOutName, ::std::function<void(bool)> onComplete);

    MCNAPI void
    exportWorld(::std::string const& levelId, ::std::string const& levelName, ::FileArchiver::ExportType type);

    MCNAPI void gateOnPlatformSignInForStoreAccess(::std::function<void()> callback);

    MCNAPI ::ui::ViewRequest promptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCNAPI ::std::shared_ptr<::DropdownScreenController> setUpCallbacksForCollectionDropdownOption(
        ::std::string const&                            collectionName,
        int const&                                      collectionSize,
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool(int)>                      isEnabled,
        ::std::function<int(int)>                       getValue,
        ::std::function<void(int, int)>                 setValue
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        ::OptionID                                      optionID,
        ::std::string const&                            dropdownName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& nameLabelPairs,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool()>                         isEnabled,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCNAPI void setUpCallbacksForFloatOption(
        ::OptionID                                                        optionID,
        ::std::string const&                                              sliderName,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCNAPI void setUpCallbacksForFloatOption(
        ::OptionID                                                        optionID,
        ::std::string const&                                              sliderName,
        ::std::string const&                                              valueBindingName,
        ::std::string const&                                              enabledBindingName,
        ::std::string const&                                              labelBindingName,
        ::std::string const&                                              ttsBindingName,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCNAPI void setUpCallbacksForFloatOption(
        ::std::string const&                                              sliderName,
        ::std::string const&                                              valueBindingName,
        ::std::string const&                                              enabledBindingName,
        ::std::string const&                                              labelBindingName,
        ::std::string const&                                              ttsBindingName,
        ::std::function<::std::string()>                                  getOptionName,
        ::std::function<bool()>                                           isEnabled,
        ::std::function<float()>                                          getValue,
        ::std::function<void(float)>                                      setValue,
        ::std::function<float()>                                          getMin,
        ::std::function<float()>                                          getMax,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCNAPI void setUpCallbacksForNestedButtonInCollection(
        ::std::string const&                         nestedBaseButtonId,
        ::std::string const&                         nestedControlEnabledBinding,
        ::std::string                                firstControlName,
        ::std::function<int(::UIPropertyBag&)>       indexSelectionFunc,
        ::std::function<bool(::UIPropertyBag&, int)> visibilityFunction,
        ::std::vector<uint>                          ignoredControls
    );

    MCNAPI void setUpCallbacksForStackPanelGrid(
        ::std::string const&   gridCollectionPrefix,
        ::std::function<int()> widthCallback,
        ::std::function<int()> heightCallback,
        ::std::function<int()> itemCountCallback
    );

    MCNAPI void setUpCallbacksForStepOption(
        ::OptionID                          optionID,
        ::std::string const&                sliderName,
        ::std::function<::std::string(int)> valueLabeller,
        bool                                continuousUpdate
    );

    MCNAPI void setUpCallbacksForStepOption(
        ::OptionID                          optionID,
        ::std::string const&                sliderName,
        ::std::string const&                valueBindingName,
        ::std::string const&                enabledBindingName,
        ::std::string const&                stepsBindingName,
        ::std::string const&                labelBindingName,
        ::std::string const&                ttsBindingName,
        ::std::function<::std::string(int)> valueLabeller,
        bool                                continuousUpdate
    );

    MCNAPI void setUpCallbacksForStepOption(
        ::std::string const&                  sliderName,
        ::std::string const&                  valueBindingName,
        ::std::string const&                  enabledBindingName,
        ::std::string const&                  stepsBindingName,
        ::std::string const&                  labelBindingName,
        ::std::string const&                  ttsBindingName,
        ::std::function<::std::string()>      getOptionName,
        ::std::function<bool()>               isEnabled,
        ::std::function<::std::vector<int>()> getValues,
        ::std::function<int()>                getValue,
        ::std::function<void(int)>            setValue,
        ::std::function<::std::string(int)>   valueLabeller,
        bool                                  continuousUpdate,
        ::OptionID                            sliderOptionID
    );

    MCNAPI void showPickFileDialog(::std::shared_ptr<::FilePickerSettings> settings);

    MCNAPI void showRemoteStorageErrorModal(::Core::Path const& storageDirectory);

    MCNAPI ::ui::ViewRequest showSignIn();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ModalScreenData getProfanityModalData();

    MCNAPI static int packItemInstance(::ItemInstance const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& defaultOptionFormat();

    MCNAPI static ::std::function<::std::string(::std::string const&, float, bool)>&
    defaultProgressSliderOptionLabeller();

    MCNAPI static ::UpdateSliderProgressMode const& defaultUpdateSliderProgressMode();

    MCNAPI static ::OptionID& mSliderOptionID();

    MCNAPI static ::std::string& mSliderOptionTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::ScreenExitBehavior exitBehavior, bool usesErrorPopupInfo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::ViewRequest $tryExit();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI uint $getSceneId() const;

    MCNAPI void $setSuspendInput(bool suspendInput);

    MCNAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCNAPI void $leaveScreen(::std::string const& expectedScreenName);

    MCNAPI void $onInit();

    MCNAPI void $onDelete();

    MCNAPI void $onOpen();

    MCNAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI bool $_doesScreenHaveExitBehavior() const;

    MCNAPI bool $_isStillValid() const;

    MCNAPI bool $_getGamepadHelperVisible() const;

    MCNAPI bool $_getMixedHelperVisible() const;

    MCNAPI bool $_getKeyboardHelperVisible() const;

    MCNAPI bool $_getGestureControlEnabled() const;

    MCNAPI ::std::string $_getButtonStartDescription();

    MCNAPI ::std::string $_getButtonADescription();

    MCNAPI ::std::string $_getButtonBDescription();

    MCNAPI ::std::string $_getButtonXDescription();

    MCNAPI ::std::string $_getButtonYDescription();

    MCNAPI ::std::string $_getButtonKeyboardDescription();

    MCNAPI void $showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);

    MCNAPI ::std::string $_getScreenName() const;

    MCNAPI ::ui::ViewRequest
    $promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
