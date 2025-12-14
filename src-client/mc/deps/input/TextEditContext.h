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
    enum class CaretUpdate : uchar {};

    enum class TextEditAction : uchar {};

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
    MCAPI void _feedDiff(::std::string_view oldText, ::std::string_view newText) const;

    MCAPI void _feedInsert(::std::string_view text) const;

    MCAPI void _onCopy();

    MCAPI void _onPaste(::std::wstring const& cbText);

    MCAPI void _replaceSelection(::std::string_view replacementUtf8Text);

    MCAPI void _setText(::std::string_view newUtf8Text);

    MCAPI void feedAction(::TextEditContext::TextEditAction action);

    MCAPI void feedCaretUpdate(::TextEditContext::CaretUpdate caretMovement);

    MCAPI void feedText(::std::string_view utf8Text);

    MCAPI void setCaretLocation(int location);

    MCAPI ~TextEditContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
