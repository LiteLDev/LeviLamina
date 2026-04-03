#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/KeyboardEventProcessor.h"
#include "mc/deps/input/TextEditContext.h"

// auto generated forward declare list
// clang-format off
class IKeyboardProxy;
class ITextBoxController;
namespace ApplicationSignal { class ClipboardPaste; }
namespace Bedrock { class SignalReceiver; }
// clang-format on

class HIDController : public ::Bedrock::Input::KeyboardEventProcessor {
public:
    // HIDController inner types declare
    // clang-format off
    struct GamefaceTextEditContext;
    // clang-format on

    // HIDController inner types define
    struct GamefaceTextEditContext {
    public:
        // GamefaceTextEditContext inner types define
        enum class StateChange : int {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mTextboxIsFocused;
    ::ll::TypedStorage<1, 1, bool>                                              mTextboxIsSelected;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMultiline;
    ::ll::TypedStorage<8, 80, ::TextEditContext>                                mEditContext;
    ::ll::TypedStorage<8, 56, ::HIDController::GamefaceTextEditContext>         mGamefaceEditContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::SignalReceiver>>      mSignalRcvr;
    ::ll::TypedStorage<1, 1, bool>                                              mIsComposing;
    ::ll::TypedStorage<4, 4, int>                                               mCompositionStart;
    ::ll::TypedStorage<4, 4, int>                                               mCompositionEnd;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ITextBoxController>> mTextBoxController;
    // NOLINTEND

public:
    // prevent constructor by default
    HIDController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update();

    virtual void onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin) /*override*/;

    virtual void onKeyUp(int keyCode) /*override*/;

    virtual void updateEditContext(int keyCode);

    virtual void onTextInput(::std::string const& utf8Text);

    virtual void imeStartComposition();

    virtual void imeUpdateCompositionText(::std::string const& utf8Text);

    virtual void imeConfirmComposition(::std::string const& utf8Text);

    virtual void imeEndComposition();

    virtual void onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    virtual void onTextEditComponentLostFocus();

    virtual void onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline, ::InputMode);

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

    MCAPI void _feedKeyState(int keyCode, int state);

    MCAPI ::std::string getTextBoxBackend() const;

    MCAPI void initialize(::Bedrock::NotNullNonOwnerPtr<::ITextBoxController> textBoxController);
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
    MCAPI void $update();

    MCAPI void $onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin);

    MCAPI void $onKeyUp(int keyCode);

    MCAPI void $updateEditContext(int keyCode);

    MCAPI void $onTextInput(::std::string const& utf8Text);

    MCAPI void $imeStartComposition();

    MCAPI void $imeUpdateCompositionText(::std::string const& utf8Text);

    MCAPI void $imeConfirmComposition(::std::string const& utf8Text);

    MCAPI void $imeEndComposition();

    MCAPI void $onTextEditComponentGainedFocus(::std::string_view const currentText, int maxLength);

    MCAPI void $onTextEditComponentLostFocus();

    MCAPI void $onShowKeyboard(::std::string_view const currentText, int maxLength, bool isMultiline, ::InputMode);

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
