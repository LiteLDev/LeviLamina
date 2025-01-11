#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI SimpleBlockVolumeIterator(::SimpleBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SimpleBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
