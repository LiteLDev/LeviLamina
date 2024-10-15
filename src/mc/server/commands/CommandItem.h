#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandItem {
public:
    // prevent constructor by default
    CommandItem& operator=(CommandItem const&);
    CommandItem(CommandItem const&);

public:
    // NOLINTBEGIN
    MCAPI CommandItem();

    MCAPI explicit CommandItem(uint64 versionId);

    MCAPI CommandItem(int id, short version, bool overrideAux);

    MCAPI std::optional<class ItemInstance>
          createInstance(int count, int aux, class CommandOutput& output, bool requireExactAux) const;

    MCAPI int getId() const;

    MCAPI explicit operator bool() const;

    MCAPI explicit operator uint64() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(int id, short version, bool overrideAux);

    MCAPI void* ctor$(uint64 versionId);

    // NOLINTEND
};
