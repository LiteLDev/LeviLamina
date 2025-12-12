#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ColorFormat {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::string ColorCodeFromColor(::mce::Color const& color);

MCNAPI_C ::mce::Color const* ColorFromChar(char colorCode);

MCNAPI_C ::mce::Color const* ColorFromColorCode(::std::string const& colorCode);

MCNAPI ::std::string_view const FormatCodeFromName(::std::string const& str);

MCNAPI_C ::std::string NameFromFormatCode(::std::string const& formatCode);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& AQUA();

MCNAPI ::std::string const& BLACK();

MCNAPI ::std::string const& BLUE();

MCNAPI ::std::string const& BOLD();

MCNAPI ::std::string const& DARK_AQUA();

MCNAPI ::std::string const& DARK_BLUE();

MCNAPI ::std::string const& DARK_GRAY();

MCNAPI ::std::string const& DARK_GREEN();

MCNAPI ::std::string const& DARK_PURPLE();

MCNAPI ::std::string const& DARK_RED();

MCNAPI ::std::string const& ESCAPE();

MCNAPI ::std::string const& GOLD();

MCNAPI ::std::string const& GRAY();

MCNAPI ::std::string const& GREEN();

MCNAPI ::std::string const& ITALIC();

MCNAPI ::std::string const& LIGHT_PURPLE();

MCNAPI ::std::string const& MATERIAL_AMETHYST();

MCNAPI ::std::string const& MATERIAL_COPPER();

MCNAPI ::std::string const& MATERIAL_DIAMOND();

MCNAPI ::std::string const& MATERIAL_EMERALD();

MCNAPI ::std::string const& MATERIAL_GOLD();

MCNAPI ::std::string const& MATERIAL_IRON();

MCNAPI ::std::string const& MATERIAL_LAPIS();

MCNAPI ::std::string const& MATERIAL_NETHERITE();

MCNAPI ::std::string const& MATERIAL_QUARTZ();

MCNAPI ::std::string const& MATERIAL_REDSTONE();

MCNAPI ::std::string const& MATERIAL_RESIN();

MCNAPI ::std::string const& MINECOIN_GOLD();

MCNAPI ::std::string const& OBFUSCATED();

MCNAPI ::std::string const& RED();

MCNAPI ::std::string const& RESET();

MCNAPI ::std::string const& WHITE();

MCNAPI ::std::string const& YELLOW();
// NOLINTEND

} // namespace ColorFormat
