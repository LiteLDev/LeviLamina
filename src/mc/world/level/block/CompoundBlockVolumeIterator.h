#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
// clang-format on

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2ba183;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundBlockVolumeIterator() /*override*/ = default;

    // vIndex: 1
    virtual ::BaseBlockLocationIterator& operator++() /*override*/;

    // vIndex: 2
    virtual bool isValid() const /*override*/;

    // vIndex: 3
    virtual void _begin() /*override*/;

    // vIndex: 4
    virtual void _end() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundBlockVolumeIterator(::CompoundBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCAPI void $_begin();

    MCFOLD void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
