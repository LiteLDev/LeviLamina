#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::InputUtils { struct TextInputResult; }
// clang-format on

namespace OreUI::InputUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::OreUI::InputUtils::TextInputResult>
calculateTextChange(::std::string const& currentInput, ::std::string const& newInput, bool isNumbersOnly);
// NOLINTEND

} // namespace OreUI::InputUtils
