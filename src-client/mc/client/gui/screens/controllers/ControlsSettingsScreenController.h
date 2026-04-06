#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class KeyboardRemappingLayout;
class MainMenuScreenModel;
class RemappingLayout;
class UIPropertyBag;
struct RawInputScreenEventData;
// clang-format on

class ControlsSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // ControlsSettingsScreenController inner types declare
    // clang-format off
    struct BindingInfo;
    struct KeyboardLayoutInfo;
    // clang-format on

    // ControlsSettingsScreenController inner types define
    struct BindingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>      mAction;
        ::ll::TypedStorage<8, 32, ::std::string>      mIcon;
        ::ll::TypedStorage<8, 24, ::std::vector<int>> mKeys;
        ::ll::TypedStorage<1, 1, bool>                mActive;
        ::ll::TypedStorage<4, 4, int>                 mLayoutIndex;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BindingInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct KeyboardLayoutInfo {
    public:
        // KeyboardLayoutInfo inner types declare
        // clang-format off
        struct BindingInfoCollection;
        // clang-format on

        // KeyboardLayoutInfo inner types define
        struct BindingInfoCollection {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::BindingInfo>> mBindings;
            ::ll::TypedStorage<8, 32, ::std::string> mGridDimensionName;
            ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~BindingInfoCollection();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::KeyboardType const>       mType;
        ::ll::TypedStorage<8, 8, ::KeyboardRemappingLayout&> mLayout;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mNormalBinds;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mChordBinds;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mCommandMacroBinds;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeyboardLayoutInfo& operator=(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI KeyboardLayoutInfo(::ControlsSettingsScreenController::KeyboardLayoutInfo&&);

        MCAPI KeyboardLayoutInfo(
            ::KeyboardType             type,
            ::KeyboardRemappingLayout& layout,
            ::std::string              gridDimensionName,
            ::std::string              collectionName,
            ::std::string              keyboardTypeString
        );

        MCAPI ~KeyboardLayoutInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ControlsSettingsScreenController::KeyboardLayoutInfo&&);

        MCAPI void* $ctor(
            ::KeyboardType             type,
            ::KeyboardRemappingLayout& layout,
            ::std::string              gridDimensionName,
            ::std::string              collectionName,
            ::std::string              keyboardTypeString
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GamePadRemappingLayout&>                                       mGamepadLayout;
    ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::BindingInfo>> mGamepadBindings;
    ::ll::TypedStorage<4, 4, ::KeyboardType>                                                  mCurrentKeyboardType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::KeyboardLayoutInfo>>
                                                                  mKeyboardLayoutInformation;
    ::ll::TypedStorage<4, 4, int>                                 mSelectedIndex;
    ::ll::TypedStorage<4, 4, ::InputBindingMode>                  mActiveBindingMode;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::string> const&> mDisabledInputMappings;
    ::ll::TypedStorage<1, 1, bool>                                mCustomizeControlsDisableHover;
    ::ll::TypedStorage<8, 320, ::std::array<::std::string, 10>>   mCommandMacroCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlsSettingsScreenController& operator=(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlsSettingsScreenController() /*override*/;

    virtual void _registerControllerCallbacks();

    virtual void onTerminate() /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ControlsSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::std::string> const&      disabledInputMappings
    );

    MCAPI ::ui::ViewRequest _bindRawInputEvent(::RawInputScreenEventData& rawInputData);

    MCAPI bool _canSetCommandMacroCommandAtIndex(
        int                                                     collectionIndex,
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& layout
    ) const;

    MCAPI void _generateBindingInfo(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        ::RemappingLayout&                                              layout,
        uint                                                            layoutStartIndex
    );

    MCAPI void _generateKeyboardBindingInfo(
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& keyboardInfo,
        uint                                                    layoutStartIndex
    );

    MCAPI ::std::string _getBindingText(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        int                                                             collectionIndex,
        ::RemappingLayout&                                              layout
    );

    MCAPI ::InputBindingMode _getBindingTypeByCollectionName(::std::string const& collectionName) const;

    MCAPI int _getIndexAdjustmentOffsetFromCollectionGroup(::std::string const& collectionGroup, int gridIndex);

    MCAPI ::ui::ViewRequest _handleBindingButtonEvent(::UIPropertyBag* bag);

    MCAPI bool _handleGamepadRawInputEvent(::RawInputScreenEventData& rawInputData);

    MCAPI void _handleKeyboardRawInputEvent(::RawInputScreenEventData& rawInputData);

    MCAPI ::ui::ViewRequest _handleResetBinding(::UIPropertyBag* bag);

    MCAPI void _initKeyboardLayoutInformation(::MainMenuScreenModel const& model);

    MCAPI bool _isInControlCustomization() const;

    MCAPI bool
    _mapRawInputToLayout(::RemappingLayout& layout, int keymappingIndex, ::RawInputScreenEventData& rawInputData);

    MCAPI void _registerBinds();

    MCAPI void _registerEvents();

    MCAPI ::ui::ViewRequest _resetAllBindingsToDefault(::InputMode inputMode);

    MCAPI void _setCommandMacroCommandAtIndex(int collectionIndex, ::std::string command);

    MCAPI void
    setUpCallbacksForBooleanInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& toggleName);

    MCAPI void
    setUpCallbacksForFloatInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& sliderName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsInt();

    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsPercentInt();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::vector<::std::string> const& disabledInputMappings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_registerControllerCallbacks();

    MCAPI void $onTerminate();

    MCAPI bool $canExit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
