#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ColorFormat {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string ColorCodeFromColor(::mce::Color const& color);

MCNAPI ::mce::Color const* ColorFromColorCode(::std::string const& colorCode);
#endif

MCNAPI ::std::string_view const FormatCodeFromName(::std::string const& str);

#ifdef LL_PLAT_C
MCNAPI ::std::string NameFromFormatCode(::std::string const& formatCode);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& AQUA();

MCNAPI ::std::string const& BLUE();

MCNAPI ::std::string const& DARK_GRAY();

MCNAPI ::std::string const& DARK_GREEN();

MCNAPI ::std::string const& DARK_PURPLE();

MCNAPI ::std::string const& ESCAPE();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& GOLD();
#endif

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

#ifdef LL_PLAT_C
MCNAPI ::std::string const& OBFUSCATED();
#endif

MCNAPI ::std::string const& RED();

MCNAPI ::std::string const& RESET();

MCNAPI ::std::string const& WHITE();

MCNAPI ::std::string const& YELLOW();
// NOLINTEND

} // namespace ColorFormat
