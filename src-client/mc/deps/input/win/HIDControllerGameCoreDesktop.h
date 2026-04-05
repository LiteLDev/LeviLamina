#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/KeyboardEventProcessor.h"
#include "mc/deps/input/win/HIDControllerWin32.h"

class HIDControllerGameCoreDesktop : public ::HIDControllerWin32 {
public:
    // HIDControllerGameCoreDesktop inner types define
    using Base = ::HIDControllerWin32;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mCallbacksRegistered;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mTextRequestedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mTextUpdatedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mLayoutRequestToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mCompositionStartedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mCompositionCompletedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mSelectionRequestedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mSelectionUpdatedToken;
    ::ll::TypedStorage<8, 8, ::winrt::Windows::UI::Text::Core::CoreTextEditContext> mCoreTextEditContext;
    ::ll::TypedStorage<4, 8, ::tagPOINT>                                            mCaretScreenPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update() /*override*/;

    virtual void onShowKeyboard(
        ::std::string_view const currentText,
        int                      maxLength,
        bool                     isMultiline,
        ::InputMode              inputMode
    ) /*override*/;

    virtual void onHideKeyboard() /*override*/;

    virtual void onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength) /*override*/;

    virtual void onTextEditComponentLostFocus() /*override*/;

    virtual void onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin origin) /*override*/;

    virtual void onKeyUp(int keyCode) /*override*/;

    virtual void updateEditContext(int keyCode) /*override*/;

    virtual void onTextInput(::std::string const& utf8Text) /*override*/;

    virtual void imeStartComposition() /*override*/;

    virtual void imeUpdateCompositionText(::std::string const& utf8Text) /*override*/;

    virtual void imeConfirmComposition(::std::string const& utf8Text) /*override*/;

    virtual void imeEndComposition() /*override*/;

    virtual void setCaretPosition(int position) /*override*/;

    virtual void onAppFocusLost() /*override*/;

    virtual void onAppFocusGained() /*override*/;

    virtual ~HIDControllerGameCoreDesktop() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _disableCoreTextEdit();

    MCAPI void _enableCoreTextEdit();

    MCAPI void _notifyCoreTextEdit(bool textChanged);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI void
    $onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline, ::InputMode inputMode);

    MCAPI void $onHideKeyboard();

    MCAPI void $onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    MCAPI void $onTextEditComponentLostFocus();

    MCAPI void $onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin origin);

    MCAPI void $onKeyUp(int keyCode);

    MCAPI void $updateEditContext(int keyCode);

    MCAPI void $onTextInput(::std::string const& utf8Text);

    MCAPI void $imeStartComposition();

    MCAPI void $imeUpdateCompositionText(::std::string const& utf8Text);

    MCAPI void $imeConfirmComposition(::std::string const& utf8Text);

    MCAPI void $imeEndComposition();

    MCAPI void $setCaretPosition(int position);

    MCAPI void $onAppFocusLost();

    MCAPI void $onAppFocusGained();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
