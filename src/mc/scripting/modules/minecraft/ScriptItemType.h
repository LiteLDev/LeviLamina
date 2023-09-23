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

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
