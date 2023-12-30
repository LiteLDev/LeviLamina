#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {
public:
    bool        mDirty;
    std::string mId;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SavedData@@UEAA@XZ
    virtual ~SavedData();

    // vIndex: 1, symbol: ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const& tag) = 0;

    // vIndex: 2, symbol: ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag& tag) const = 0;

    // NOLINTEND
};
