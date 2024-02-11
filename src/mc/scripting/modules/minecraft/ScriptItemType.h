#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // prevent constructor by default
    ScriptItemType& operator=(ScriptItemType const&);
    ScriptItemType(ScriptItemType const&);
    ScriptItemType();

public:
    // NOLINTBEGIN
    // symbol: ?getItem@ScriptItemType@ScriptModuleMinecraft@@QEBAAEBVItem@@XZ
    MCAPI class Item const& getItem() const;

    // symbol:
    // ?getName@ScriptItemType@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol: ??8ScriptItemType@ScriptModuleMinecraft@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptItemType const& other) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
