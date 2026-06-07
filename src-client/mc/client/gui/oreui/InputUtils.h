#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
namespace OreUI::InputUtils { struct TextInputResult; }
namespace cohtml { struct MouseEventData; }
// clang-format on

namespace OreUI::InputUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::OreUI::InputUtils::TextInputResult>
calculateTextChange(::std::string const& currentInput, ::std::string const& newInput, bool isNumbersOnly);

MCAPI ::std::optional<::cohtml::MouseEventData> toMouseEvent(::MouseAction const& mouseAction, bool isFullKeyboard);
// NOLINTEND

} // namespace OreUI::InputUtils
