#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ColorFormat {
// NOLINTBEGIN
constexpr inline std::string_view AQUA = "§b";

constexpr inline std::string_view BLACK = "§0";

constexpr inline std::string_view BLUE = "§9";

constexpr inline std::string_view BOLD = "§l";

constexpr inline std::string_view DARK_AQUA = "§3";

constexpr inline std::string_view DARK_BLUE = "§1";

constexpr inline std::string_view DARK_GRAY = "§8";

constexpr inline std::string_view DARK_GREEN = "§2";

constexpr inline std::string_view DARK_PURPLE = "§5";

constexpr inline std::string_view DARK_RED = "§4";

constexpr inline std::string_view ESCAPE = "§";

MCAPI std::string_view const FormatCodeFromName(std::string const& str);

constexpr inline std::string_view GOLD = "§6";

constexpr inline std::string_view GRAY = "§7";

constexpr inline std::string_view GREEN = "§a";

constexpr inline std::string_view ITALIC = "§o";

constexpr inline std::string_view LIGHT_PURPLE = "§d";

constexpr inline std::string_view MATERIAL_AMETHYST = "§u";

constexpr inline std::string_view MATERIAL_COPPER = "§n";

constexpr inline std::string_view MATERIAL_DIAMOND = "§s";

constexpr inline std::string_view MATERIAL_EMERALD = "§q";

constexpr inline std::string_view MATERIAL_GOLD = "§p";

constexpr inline std::string_view MATERIAL_IRON = "§i";

constexpr inline std::string_view MATERIAL_LAPIS = "§t";

constexpr inline std::string_view MATERIAL_NETHERITE = "§j";

constexpr inline std::string_view MATERIAL_QUARTZ = "§h";

constexpr inline std::string_view MATERIAL_REDSTONE = "§m";

constexpr inline std::string_view MINECOIN_GOLD = "§g";

constexpr inline std::string_view OBFUSCATED = "§k";

constexpr inline std::string_view RED = "§c";

constexpr inline std::string_view RESET = "§r";

constexpr inline std::string_view WHITE = "§f";

constexpr inline std::string_view YELLOW = "§e";
// NOLINTEND

}; // namespace ColorFormat
