#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleBlockVolumeIterator() /*override*/ = default;

    // vIndex: 2
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
