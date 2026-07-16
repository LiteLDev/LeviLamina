#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamefaceImeComposer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/external/gameface/cohtml/ITextInputHandler.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class KeyboardManager;
struct TextBoxSelection;
namespace cohtml { class IInputProxy; }
namespace cohtml { class View; }
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
        ::ll::TypedStorage<8, 8, ::cohtml::IInputProxy&>                         mInputProxy;
        ::ll::TypedStorage<8, 56, ::std::optional<::OreUI::GamefaceImeComposer>> mImeComposer;
        ::ll::TypedStorage<4, 20, ::std::optional<::RectangleArea>>              mCaretArea;
        ::ll::TypedStorage<4, 4, int const>                                      mMaxLength;
        ::ll::TypedStorage<1, 1, bool const>                                     mIsMultiline;
        ::ll::TypedStorage<1, 1, bool>                                           mIgnoreTextCallbacks;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextInputState& operator=(TextInputState const&);
        TextInputState(TextInputState const&);
        TextInputState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                           mKeyboardManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GuiData>>                    mGuiData;
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                              mView;
    ::ll::TypedStorage<8, 104, ::std::optional<::OreUI::TextInputHandler::TextInputState>> mTextInputState;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextInputHandler(::Bedrock::NotNullNonOwnerPtr<::GuiData> guiData, ::KeyboardManager& keyboardManager);

    MCAPI void _handleLostFocus();

    MCAPI ::std::optional<::RectangleArea> getTextInputControlArea();

    MCAPI void setText(::std::string const& text, ::std::optional<::TextBoxSelection> const& selection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GuiData> guiData, ::KeyboardManager& keyboardManager);
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
