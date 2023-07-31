#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace BlockColorUtil {
// NOLINTBEGIN
/**
 * @symbol ?RAINBOW\@BlockColorUtil\@\@3V?$array\@W4BlockColor\@\@$0BA\@\@std\@\@A
 */
MCAPI extern std::array<enum class BlockColor, 16> RAINBOW;
/**
 * @symbol ?fromInt\@BlockColorUtil\@\@YA?AW4BlockColor\@\@H\@Z
 */
MCAPI enum class BlockColor fromInt(int);
/**
 * @symbol ?fromItemColor\@BlockColorUtil\@\@YA?AW4BlockColor\@\@W4ItemColor\@\@\@Z
 */
MCAPI enum class BlockColor fromItemColor(enum class ItemColor);
/**
 * @symbol ?getColor\@BlockColorUtil\@\@YA?AVColor\@mce\@\@W4BlockColor\@\@\@Z
 */
MCAPI class mce::Color getColor(enum class BlockColor);
/**
 * @symbol
 * ?getName\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
 */
MCAPI std::string const& getName(enum class BlockColor);
/**
 * @symbol
 * ?getNameMixedCase\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
 */
MCAPI std::string const& getNameMixedCase(enum class BlockColor);
/**
 * @symbol
 * ?getNameSnakeCase\@BlockColorUtil\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockColor\@\@\@Z
 */
MCAPI std::string const& getNameSnakeCase(enum class BlockColor);
/**
 * @symbol ?getRGBColor\@BlockColorUtil\@\@YAHW4BlockColor\@\@\@Z
 */
MCAPI int getRGBColor(enum class BlockColor);
// NOLINTEND

}; // namespace BlockColorUtil
