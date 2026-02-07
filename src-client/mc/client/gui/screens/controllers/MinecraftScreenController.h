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
#include "mc/deps/input/InputMode.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class DropdownScreenController;
class FilePickerSettings;
class ItemInstance;
class MinecraftScreenModel;
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

    using BooleanOptionGetter = ::std::function<bool()>;

    using IntegerOptionGetter = ::std::function<int()>;

    using IntegerOptionSetter = ::std::function<void(int)>;

    using CollectionBooleanOptionGetter = ::std::function<bool(int)>;

    using CollectionIntegerOptionGetter = ::std::function<int(int)>;

    using CollectionIntegerOptionSetter = ::std::function<void(int, int)>;

    using StepSliderOptionLabeller = ::std::function<::std::string(int)>;

    using IntValuesVectorGetter = ::std::function<::std::vector<int>()>;

    using StringOptionGetter = ::std::function<::std::string()>;

    using ProgressSliderOptionLabeller = ::std::function<::std::string(::std::string const&, float, bool)>;

    using FloatOptionGetter = ::std::function<float()>;

    using FloatOptionSetter = ::std::function<void(float)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftScreenModel>>                mMinecraftScreenModel;
    ::ll::TypedStorage<4, 4, ::ScreenExitBehavior>                                      mExitBehavior;
    ::ll::TypedStorage<4, 4, ::InputMode>                                               mInputMode;
    ::ll::TypedStorage<4, 4, ::InputMode>                                               mPreviousInputMode;
    ::ll::TypedStorage<1, 1, bool>                                                      mPlayerDied;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ModalScreenButtonId)>>             mModalDialogResultCallback;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTTSTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTTSDialogMessage;
    ::ll::TypedStorage<8, 40, ::MinecraftScreenController::LeaveScreenInfo>             mLeaveScreen;
    ::ll::TypedStorage<1, 1, bool>                                                      mRayTracingActive;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<bool>>> mDropDownActive;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>>                 mStepSliderValues;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsShowErrorScreenInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI MinecraftScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::ScreenExitBehavior                      exitBehavior,
        bool                                      usesErrorPopupInfo
    );

    MCAPI void _attemptAddFriends(::std::function<void()> callback);

    MCAPI void _attemptConnect(::std::function<void(::Social::UserPlatformConnectionResult)> callback);

    MCAPI bool _attemptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCAPI void _attemptSigninOrSignup(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCAPI bool _checkRealmCreatePermissions();

    MCAPI void _closeModalDialog();

    MCAPI void
    _displayCustomModalPopup(::ModalScreenData const& modalData, ::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _displayJsonDefinedControlPopup(
        ::UIPropertyBag const& popupBag,
        ::std::string const&   factory,
        ::std::string const&   ttsTitle,
        ::std::string const&   ttsContent
    );

    MCAPI void _displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name,
        ::std::string const& ttsTitle,
        ::std::string const& ttsContent
    );

    MCAPI void _displayPrivilegesBlockedModalPopup(
        ::std::string const& messageString,
        ::std::string const& closeButtonTitle,
        bool                 showOpenAccountSettingButton
    );

    MCAPI void _displaySignOutFailedModalPopup(::std::string const& error);

    MCAPI void _displayStandardModalPopup(
        ::std::string const&        title,
        ::std::string const&        message,
        ::ModalScreenButtonMode     buttonNumber,
        ::std::function<void(bool)> callback,
        ::std::string const&        telemetryOverride
    );

    MCAPI void _gateRealmsWhenCrossPlatformIsDisabled(::std::function<void()> callback);

    MCAPI int
    _getStepSliderValue(::std::function<int()> getValue, ::std::string const& valueBindingName, bool continuousUpdate);

    MCAPI void _handleSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCAPI void _handleSignInFailure(
        ::Social::MultiIdentitySigninResult const&                 signInResult,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback,
        bool                                                       isAutoSignIn
    );

    MCAPI bool _isApprovedLink(::std::string const& hyperlink) const;

    MCAPI void _onAttemptSignInResult(
        ::Social::MultiIdentitySigninResult const&                 result,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback
    );

    MCAPI ::ui::ViewRequest _onModalEventReceived(::ModalScreenButtonId modalResult, bool buttonClosesModal);

    MCAPI void
    _promptEduSwitchAccounts(bool showModal, ::std::string const& buttonName, ::LastClickedSource lastClickedSource);

    MCAPI void _registerEventHandlers();

    MCAPI bool _resolveSafeZoneVisibility(::SafeZoneBuffer buffer) const;

    MCAPI ::std::string const
    _retrieveBindingValueFromPropertyBag(::std::string const& bindingName, ::UIPropertyBag& propertyBag) const;

    MCAPI void _showLiveMultiplayerModal();

    MCAPI void _showNoWifiModal();

    MCAPI bool _tryNavigateToXblUpsellScreen();

    MCAPI bool _tryShowSuspendWarningModal(::std::function<void()> onConfirm);

    MCAPI void displayJsonDefinedControlPopup(
        ::std::string const& controlId,
        ::std::string const& factory,
        ::std::string const& name
    );

    MCAPI void
    exportPDF(::PDFOptions options, ::std::string const& defaultOutName, ::std::function<void(bool)> onComplete);

    MCAPI void
    exportWorld(::std::string const& levelId, ::std::string const& levelName, ::FileArchiver::ExportType type);

    MCAPI void gateOnPlatformSignInForStoreAccess(::std::function<void()> callback);

    MCAPI ::ui::ViewRequest promptSignIn(
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> signInCallback
    );

    MCAPI ::std::shared_ptr<::DropdownScreenController> setUpCallbacksForCollectionDropdownOption(
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

    MCAPI void setUpCallbacksForDropdownOption(
        ::OptionID                                      optionID,
        ::std::string const&                            dropdownName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& nameLabelPairs,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool()>                         isEnabled,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void setUpCallbacksForFloatOption(
        ::OptionID                                                        optionID,
        ::std::string const&                                              sliderName,
        ::std::string const&                                              optionFormat,
        ::std::function<::std::string(::std::string const&, float, bool)> valueLabeller,
        ::UpdateSliderProgressMode                                        updateProgressMode
    );

    MCAPI void setUpCallbacksForFloatOption(
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

    MCAPI void setUpCallbacksForFloatOption(
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

    MCAPI void setUpCallbacksForNestedButtonInCollection(
        ::std::string const&                         nestedBaseButtonId,
        ::std::string const&                         nestedControlEnabledBinding,
        ::std::string                                firstControlName,
        ::std::function<int(::UIPropertyBag&)>       indexSelectionFunc,
        ::std::function<bool(::UIPropertyBag&, int)> visibilityFunction,
        ::std::vector<uint>                          ignoredControls
    );

    MCAPI void setUpCallbacksForStackPanelGrid(
        ::std::string const&   gridCollectionPrefix,
        ::std::function<int()> widthCallback,
        ::std::function<int()> heightCallback,
        ::std::function<int()> itemCountCallback
    );

    MCAPI void setUpCallbacksForStepOption(
        ::OptionID                          optionID,
        ::std::string const&                sliderName,
        ::std::function<::std::string(int)> valueLabeller,
        bool                                continuousUpdate
    );

    MCAPI void setUpCallbacksForStepOption(
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

    MCAPI void setUpCallbacksForStepOption(
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

    MCFOLD void showPickFileDialog(::std::shared_ptr<::FilePickerSettings> settings);

    MCAPI void showRemoteStorageErrorModal(::Core::Path const& storageDirectory);

    MCAPI ::ui::ViewRequest showSignIn();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ModalScreenData getProfanityModalData();

    MCAPI static int packItemInstance(::ItemInstance const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& defaultOptionFormat();

    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>&
    defaultProgressSliderOptionLabeller();

    MCAPI static ::UpdateSliderProgressMode const& defaultUpdateSliderProgressMode();

    MCAPI static ::OptionID& mSliderOptionID();

    MCAPI static ::std::string& mSliderOptionTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::ScreenExitBehavior exitBehavior, bool usesErrorPopupInfo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $tryExit();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI uint $getSceneId() const;

    MCAPI void $setSuspendInput(bool suspendInput);

    MCAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCAPI void $leaveScreen(::std::string const& expectedScreenName);

    MCAPI void $onInit();

    MCAPI void $onDelete();

    MCAPI void $onOpen();

    MCAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $_doesScreenHaveExitBehavior() const;

    MCFOLD bool $_isStillValid() const;

    MCFOLD bool $_getGamepadHelperVisible() const;

    MCAPI bool $_getMixedHelperVisible() const;

    MCAPI bool $_getKeyboardHelperVisible() const;

    MCAPI bool $_getGestureControlEnabled() const;

    MCAPI ::std::string $_getButtonStartDescription();

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonBDescription();

    MCFOLD ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCFOLD ::std::string $_getButtonKeyboardDescription();

    MCAPI void $showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)> callback);

    MCAPI ::std::string $_getScreenName() const;

    MCAPI ::ui::ViewRequest
    $promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
