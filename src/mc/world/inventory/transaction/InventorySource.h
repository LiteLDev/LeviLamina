#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventorySource {
public:
    // InventorySource inner types define
    enum class InventorySourceFlags {};

public:
    // prevent constructor by default
    InventorySource& operator=(InventorySource const&);
    InventorySource(InventorySource const&);
    InventorySource();

public:
    // NOLINTBEGIN
    // symbol: ??8InventorySource@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class InventorySource const&) const;

    // symbol: ?toString@InventorySource@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // NOLINTEND
};
