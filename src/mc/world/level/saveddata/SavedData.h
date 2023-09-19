#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {
public:
    // prevent constructor by default
    SavedData& operator=(SavedData const&);
    SavedData(SavedData const&);
    SavedData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const&) = 0;

    // vIndex: 2, symbol: ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&) const = 0;

    // symbol: ??1SavedData@@UEAA@XZ
    MCVAPI ~SavedData();

    // NOLINTEND
};
