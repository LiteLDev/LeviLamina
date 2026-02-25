#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class KeyboardManager;
namespace OreUI { struct TextInputResult; }
// clang-format on

namespace OreUI {

class TextInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::KeyboardManager const&> mKeyboardManager;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputHandler& operator=(TextInputHandler const&);
    TextInputHandler(TextInputHandler const&);
    TextInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::TextInputResult
    _calculateChange(::std::string const& currentInputText, ::gsl::span<::std::string const> edit) const;

    MCAPI ::std::optional<::OreUI::TextInputResult>
    calculateChange(::std::string const& currentInput, ::std::string const& newInput) const;

    MCAPI ::std::vector<::OreUI::TextInputResult> calculateChanges(
        ::std::string const&                currentInputText,
        ::std::vector<::std::string> const& charsFromKeyboard
    ) const;
    // NOLINTEND
};

} // namespace OreUI
