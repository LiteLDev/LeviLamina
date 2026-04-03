#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/ITextInputHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TextBoxSelection.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class KeyboardManager;
namespace OreUI { struct TextInputResult; }
namespace cohtml { class IInputProxy; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

namespace OreUI {

class TextInputHandler : public ::cohtml::ITextInputHandler {
public:
    // TextInputHandler inner types declare
    // clang-format off
    struct TextInputState;
    // clang-format on

    // TextInputHandler inner types define
    struct TextInputState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>      mCurrentText;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mCaretArea;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mControlArea;
        ::ll::TypedStorage<4, 12, ::TextBoxSelection> mSelection;
        ::ll::TypedStorage<4, 4, int const>           mMaxLength;
        ::ll::TypedStorage<1, 1, bool const>          mIsMultiline;
        // NOLINTEND
    };

    using OnTextChangedCallback = ::std::function<void(::OreUI::TextInputResult)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                          mKeyboardManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GuiData>>                   mGuiData;
    ::ll::TypedStorage<8, 64, ::std::function<void(::OreUI::TextInputResult)>>            mOnTextChangedCallback;
    ::ll::TypedStorage<1, 1, bool>                                                        mReportTextInputChanges;
    ::ll::TypedStorage<8, 96, ::std::optional<::OreUI::TextInputHandler::TextInputState>> mTextInputState;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputHandler& operator=(TextInputHandler const&);
    TextInputHandler(TextInputHandler const&);
    TextInputHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection) /*override*/;

    virtual void OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    ) /*override*/;

    virtual void OnFocus(::cohtml::IInputProxy* proxy) /*override*/;

    virtual void OnBlur(::cohtml::IInputProxy*) /*override*/;

    virtual ~TextInputHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updateFromInputProxy(::cohtml::IInputProxy& proxy);

    MCAPI ::std::optional<::OreUI::TextInputResult>
    calculateChange(::std::string const& currentInput, ::std::string const& newInput) const;

    MCAPI ::std::string getTextInputText();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection);

    MCAPI void $OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    );

    MCAPI void $OnFocus(::cohtml::IInputProxy* proxy);

    MCAPI void $OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
