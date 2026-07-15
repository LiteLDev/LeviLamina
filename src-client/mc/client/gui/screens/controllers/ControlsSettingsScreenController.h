#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputBindingMode.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class KeyboardRemappingLayout;
class MainMenuScreenModel;
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
    MCAPI ControlsSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::std::string> const&      disabledInputMappings
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsPercentInt();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::vector<::std::string> const& disabledInputMappings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
