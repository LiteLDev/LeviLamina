#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TextBoxCaretMovement.h"

// auto generated forward declare list
// clang-format off
struct TextBoxSelection;
namespace OreUI { class TextInputHandler; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI::InputUtils {

class TextInputProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View&>            mView;
    ::ll::TypedStorage<8, 8, ::OreUI::TextInputHandler&> mTextInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputProxy& operator=(TextInputProxy const&);
    TextInputProxy(TextInputProxy const&);
    TextInputProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement);

    MCAPI void clearSelection();

    MCAPI void clearText();

    MCAPI void insertTextAtCaret(::std::string_view text);

    MCAPI void setCaretPosition(int targetPos);

    MCAPI void setSelection(::TextBoxSelection targetSelection);
    // NOLINTEND
};

} // namespace OreUI::InputUtils
