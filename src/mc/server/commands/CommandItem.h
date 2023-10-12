#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOutput.h"

class CommandItem {
public:
    union {
        struct {
            short mVersion;     // this+0x0
            bool  mOverrideAux; // this+0x2
            int   mId;          // this+0x4
        };
        uint64 mVersionId; // this+0x0
    };

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
