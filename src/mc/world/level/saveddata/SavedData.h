#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {
public:
    bool        mDirty;
    std::string mId;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedData();

    // vIndex: 1
    virtual void deserialize(class CompoundTag const& tag) = 0;

    // vIndex: 2
    virtual void serialize(class CompoundTag& tag) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
