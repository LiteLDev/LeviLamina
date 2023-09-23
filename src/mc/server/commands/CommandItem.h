#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandItem {
public:
    // prevent constructor by default
    CommandItem& operator=(CommandItem const&);
    CommandItem(CommandItem const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CommandItem@@QEAA@XZ
    MCAPI CommandItem();

    // symbol: ?createInstance@CommandItem@@QEBA?AV?$optional@VItemInstance@@@std@@HHAEAVCommandOutput@@_N@Z
    MCAPI std::optional<class ItemInstance> createInstance(int, int, class CommandOutput&, bool) const;

    // symbol: ?getId@CommandItem@@QEBAHXZ
    MCAPI int getId() const;

    // symbol: ??BCommandItem@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // NOLINTEND
};
