#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ItemColorUtil {
// NOLINTBEGIN
// symbol: ?fromBlockColor@ItemColorUtil@@YA?AW4ItemColor@@W4BlockColor@@@Z
MCAPI ::ItemColor fromBlockColor(::BlockColor color);

// symbol: ?fromColor@ItemColorUtil@@YA?AW4ItemColor@@AEBVColor@mce@@@Z
MCAPI ::ItemColor fromColor(class mce::Color const& color);

// symbol: ?fromInt@ItemColorUtil@@YA?AW4ItemColor@@H@Z
MCAPI ::ItemColor fromInt(int auxValue);

// symbol: ?getColor@ItemColorUtil@@YA?AVColor@mce@@W4ItemColor@@@Z
MCAPI class mce::Color getColor(::ItemColor color);

// symbol: ?getName@ItemColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Z
MCAPI std::string const& getName(::ItemColor);

// symbol:
// ?getNameMixedCase@ItemColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Z
MCAPI std::string const& getNameMixedCase(::ItemColor);

// symbol: ?getRGBColor@ItemColorUtil@@YAHW4ItemColor@@@Z
MCAPI int getRGBColor(::ItemColor color);
// NOLINTEND

}; // namespace ItemColorUtil
