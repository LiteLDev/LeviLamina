#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct ScreenViewCommand;
// clang-format on

class ChatSettingsScreenController : public ::ClientInstanceScreenController {
public:
    // ChatSettingsScreenController inner types declare
    // clang-format off
    struct ChatSettings;
    // clang-format on

    // ChatSettingsScreenController inner types define
    enum class ColorSubsection : uchar {};

    struct ChatSettings {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings>      mInitialSettings;
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings>      mSettings;
    ::ll::TypedStorage<1, 1, bool const>                                         mLanguageCanBeSmooth;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mRefreshChatCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>> mFocusControlCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setViewCommand(::ScreenViewCommand const& callback) /*override*/;

    virtual ~ChatSettingsScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatSettingsScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> clientModel,
        ::std::function<void()>                        refreshChatCallback
    );

    MCAPI void _fireEventChatSettingsUpdated() const;

    MCAPI void _handleFontColorChanged(int fontColorIndex, ::ChatSettingsScreenController::ColorSubsection colorType);

    MCAPI void _registerButtons();

    MCAPI void _registerDropdowns();

    MCAPI void _registerSliders();

    MCAPI void _registerToggles();

    MCAPI void _resetChatSettings();

    MCAPI void _setInitialSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ClientInstanceScreenModel> clientModel, ::std::function<void()> refreshChatCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setViewCommand(::ScreenViewCommand const& callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
