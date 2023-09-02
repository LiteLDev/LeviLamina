#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace BlockColorUtil {
// NOLINTBEGIN
// symbol: ?RAINBOW@BlockColorUtil@@3V?$array@W4BlockColor@@$0BA@@std@@A
MCAPI extern std::array<::BlockColor, 16> RAINBOW;

// symbol: ?fromInt@BlockColorUtil@@YA?AW4BlockColor@@H@Z
MCAPI ::BlockColor fromInt(int);

// symbol: ?fromItemColor@BlockColorUtil@@YA?AW4BlockColor@@W4ItemColor@@@Z
MCAPI ::BlockColor fromItemColor(::ItemColor);

// symbol: ?getColor@BlockColorUtil@@YA?AVColor@mce@@W4BlockColor@@@Z
MCAPI class mce::Color getColor(::BlockColor);

// symbol: ?getName@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
MCAPI std::string const& getName(::BlockColor);

// symbol:
// ?getNameMixedCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
MCAPI std::string const& getNameMixedCase(::BlockColor);

// symbol:
// ?getNameSnakeCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
MCAPI std::string const& getNameSnakeCase(::BlockColor);

// symbol: ?getRGBColor@BlockColorUtil@@YAHW4BlockColor@@@Z
MCAPI int getRGBColor(::BlockColor);
// NOLINTEND

}; // namespace BlockColorUtil
