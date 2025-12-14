#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/input/KeyboardEventProcessor.h"
#include "mc/deps/input/TextEditContext.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"

// auto generated forward declare list
// clang-format off
class IKeyboardProxy;
namespace ApplicationSignal { class ClipboardPaste; }
namespace Bedrock { class SignalReceiver; }
// clang-format on

class HIDController : public ::Bedrock::Input::KeyboardEventProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mTextboxIsFocused;
    ::ll::TypedStorage<1, 1, bool>                                         mTextboxIsSelected;
    ::ll::TypedStorage<1, 1, bool>                                         mIsMultiline;
    ::ll::TypedStorage<8, 80, ::TextEditContext>                           mEditContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::SignalReceiver>> mSignalRcvr;
    ::ll::TypedStorage<1, 1, bool>                                         mIsComposing;
    ::ll::TypedStorage<4, 4, int>                                          mCompositionStart;
    ::ll::TypedStorage<4, 4, int>                                          mCompositionEnd;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::TextboxTextUpdateReason)>>
        mUpdateTextFunction;
    // NOLINTEND

public:
    // prevent constructor by default
    HIDController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onKeyDown(int keyCode) /*override*/;

    virtual void onKeyUp(int keyCode) /*override*/;

    virtual void updateEditContext(int keyCode);

    virtual void onTextInput(::std::wstring const& wideText);

    virtual void onTextInput(::std::string const& utf8Text);

    virtual void onCompositionText(::std::wstring const& wideText);

    virtual void onCompositionText(::std::string const& utf8Text);

    virtual void onIMEReconversion(int position, int count);

    virtual void resetCompositionState();

    virtual void onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    virtual void onTextEditComponentLostFocus();

    virtual void onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline);

    virtual void onHideKeyboard();

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual int getCaretPosition() const;

    virtual void setCaretPosition(int position);

    virtual void setIMEEnabled(bool);

    virtual ~HIDController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HIDController(::IKeyboardProxy* keyboardProxy);

    MCAPI void _clipboardPasteHandler(::ApplicationSignal::ClipboardPaste const& signal);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IKeyboardProxy* keyboardProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onKeyDown(int keyCode);

    MCAPI void $onKeyUp(int keyCode);

    MCAPI void $updateEditContext(int keyCode);

    MCAPI void $onTextInput(::std::wstring const& wideText);

    MCAPI void $onTextInput(::std::string const& utf8Text);

    MCAPI void $onCompositionText(::std::wstring const& wideText);

    MCAPI void $onCompositionText(::std::string const& utf8Text);

    MCAPI void $onIMEReconversion(int position, int count);

    MCAPI void $resetCompositionState();

    MCAPI void $onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    MCAPI void $onTextEditComponentLostFocus();

    MCAPI void $onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline);

    MCAPI void $onHideKeyboard();

    MCAPI void $onAppFocusLost();

    MCFOLD void $onAppFocusGained();

    MCFOLD int $getCaretPosition() const;

    MCAPI void $setCaretPosition(int position);

    MCFOLD void $setIMEEnabled(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
