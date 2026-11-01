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
    virtual ~ControlsSettingsScreenController() /*override*/ = default;

    virtual void _registerControllerCallbacks();

    virtual void onTerminate() /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ControlsSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::std::string> const&      disabledInputMappings
    );

    MCNAPI bool _commandMacrosAllowed() const;

    MCNAPI void _generateBindingInfo(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        ::RemappingLayout&                                              layout,
        uint                                                            layoutStartIndex
    );

    MCNAPI void _generateKeyboardBindingInfo(
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& keyboardInfo,
        uint                                                    layoutStartIndex
    );

    MCNAPI ::std::string _getBindingText(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        int                                                             collectionIndex,
        ::RemappingLayout&                                              layout
    );

    MCNAPI ::std::string _getIconSprite(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        int                                                             collectionIndex,
        ::RemappingLayout&                                              layout
    );

    MCNAPI int _getIndexAdjustmentOffsetFromCollectionGroup(::std::string const& collectionGroup, int gridIndex);

    MCNAPI bool
    _mapRawInputToLayout(::RemappingLayout& layout, int keymappingIndex, ::RawInputScreenEventData& rawInputData);

    MCNAPI ::ui::ViewRequest _resetAllBindingsToDefault(::InputMode inputMode);

    MCNAPI void _setCommandMacroCommandAtIndex(int collectionIndex, ::std::string const command);

    MCNAPI void
    setUpCallbacksForBooleanInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& toggleName);

    MCNAPI void
    setUpCallbacksForFloatInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& sliderName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canSetCommandMacroCommandAtIndex(
        int                                                     collectionIndex,
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& layout
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsInt();

    MCNAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsPercentInt();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::vector<::std::string> const& disabledInputMappings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_registerControllerCallbacks();

    MCNAPI void $onTerminate();

    MCNAPI bool $canExit();
    // NOLINTEND
};
