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

    // symbol: ??0CommandItem@@QEAA@_K@Z
    MCAPI explicit CommandItem(uint64);

    // symbol: ??0CommandItem@@QEAA@HF_N@Z
    MCAPI CommandItem(int id, short version, bool);

    // symbol: ?createInstance@CommandItem@@QEBA?AV?$optional@VItemInstance@@@std@@HHAEAVCommandOutput@@_N@Z
    MCAPI std::optional<class ItemInstance>
          createInstance(int count, int aux, class CommandOutput& output, bool requireExactAux) const;

    // symbol: ?getId@CommandItem@@QEBAHXZ
    MCAPI int getId() const;

    // symbol: ??BCommandItem@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ??BCommandItem@@QEBA_KXZ
    MCAPI explicit operator uint64() const;

    // NOLINTEND
};
