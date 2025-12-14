#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/HIDController.h"

class HIDControllerWin32 : public ::HIDController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HWND__*>                                             mHWnd;
    ::ll::TypedStorage<4, 8, ::tagPOINT>                                            mCaretScreenPos;
    ::ll::TypedStorage<1, 1, bool>                                                  mCallbacksRegistered;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mTextRequestedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mTextUpdatedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mLayoutRequestToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mCompositionStartedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mCompositionCompletedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mSelectionRequestedToken;
    ::ll::TypedStorage<8, 8, ::winrt::event_token>                                  mSelectionUpdatedToken;
    ::ll::TypedStorage<8, 8, ::winrt::Windows::UI::Text::Core::CoreTextEditContext> mCoreTextEditContext;
    // NOLINTEND

public:
    // prevent constructor by default
    HIDControllerWin32();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline) /*override*/;

    virtual void onHideKeyboard() /*override*/;

    virtual void onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength) /*override*/;

    virtual void onTextEditComponentLostFocus() /*override*/;

    virtual void onKeyUp(int keyCode) /*override*/;

    virtual void updateEditContext(int keyCode) /*override*/;

    virtual void onTextInput(::std::string const& utf8Text) /*override*/;

    virtual void onCompositionText(::std::string const& utf8Text) /*override*/;

    virtual void resetCompositionState() /*override*/;

    virtual void onIMEReconversion(int position, int count) /*override*/;

    virtual void setCaretPosition(int position) /*override*/;

    virtual void onAppFocusLost() /*override*/;

    virtual void onAppFocusGained() /*override*/;

    virtual void setIMEEnabled(bool val) /*override*/;

    virtual ~HIDControllerWin32() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HIDControllerWin32(::HWND__* hwnd);

    MCAPI void _disableTextEdit();

    MCAPI void _enableTextEdit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HWND__* hwnd);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline);

    MCAPI void $onHideKeyboard();

    MCAPI void $onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    MCFOLD void $onTextEditComponentLostFocus();

    MCAPI void $onKeyUp(int keyCode);

    MCAPI void $updateEditContext(int keyCode);

    MCAPI void $onTextInput(::std::string const& utf8Text);

    MCAPI void $onCompositionText(::std::string const& utf8Text);

    MCAPI void $resetCompositionState();

    MCAPI void $onIMEReconversion(int position, int count);

    MCAPI void $setCaretPosition(int position);

    MCAPI void $onAppFocusLost();

    MCAPI void $onAppFocusGained();

    MCFOLD void $setIMEEnabled(bool val);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
