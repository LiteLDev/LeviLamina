#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TextRange.h"

// auto generated forward declare list
// clang-format off
class IKeyboardProxy;
// clang-format on

class TextEditContext {
public:
    // TextEditContext inner types define
    enum class CaretUpdate : uchar {
        Left  = 0,
        Right = 1,
        Up    = 2,
        Down  = 3,
        Begin = 4,
        End   = 5,
    };

    enum class TextEditAction : uchar {
        Backspace = 0,
        Copy      = 1,
        Cut       = 2,
        Delete    = 3,
        Newline   = 4,
        Paste     = 5,
        SelectAll = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mIsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                mCtrlDown;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCurrentUtf8Text;
    ::ll::TypedStorage<4, 4, int>                                 mCaret;
    ::ll::TypedStorage<1, 1, bool>                                mHighlightSelection;
    ::ll::TypedStorage<4, 4, int>                                 mMaxLength;
    ::ll::TypedStorage<4, 8, ::TextRange>                         mSelection;
    ::ll::TypedStorage<8, 8, ::IKeyboardProxy*>                   mKeyboard;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IKeyboardProxy>> mKeyboardProxy;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _feedDelete(::std::string_view text) const;

    MCAPI void _feedDiff(::std::string_view oldText, ::std::string_view newText) const;

    MCAPI void _feedInsert(::std::string_view text) const;

    MCAPI void _onBackspace();

    MCAPI void _onCopy();

    MCAPI void _onPaste(::std::wstring const& cbText);

    MCAPI void _replaceSelection(::std::string_view replacementUtf8Text);

    MCAPI void _setText(::std::string_view newUtf8Text);

    MCAPI void feedAction(::TextEditContext::TextEditAction action);

    MCAPI void feedCaretUpdate(::TextEditContext::CaretUpdate caretMovement);

    MCAPI void feedText(::std::string_view utf8Text);

    MCAPI ::TextRange getSelection() const;

    MCFOLD ::std::string const getText() const;

    MCAPI void setCaretLocation(int location);

    MCAPI void setSelection(::TextRange range);

    MCAPI ~TextEditContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
