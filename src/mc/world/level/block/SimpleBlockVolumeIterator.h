#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleBlockVolumeIterator() /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
