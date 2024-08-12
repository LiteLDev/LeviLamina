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

    CommandItem() : mVersionId() {}

public:
    // NOLINTBEGIN
    MCAPI explicit CommandItem(uint64);

    MCAPI CommandItem(int id, short version, bool);

    MCAPI std::optional<class ItemInstance>
          createInstance(int count, int aux, class CommandOutput& output, bool requireExactAux) const;

    MCAPI int getId() const;

    MCAPI explicit operator bool() const;

    MCAPI explicit operator uint64() const;

    // NOLINTEND
};
