#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
namespace cohtml { struct MouseEventData; }
// clang-format on

namespace OreUI::InputUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::cohtml::MouseEventData> toMouseEvent(::MouseAction const& mouseAction, bool isFullKeyboard);
// NOLINTEND

} // namespace OreUI::InputUtils
