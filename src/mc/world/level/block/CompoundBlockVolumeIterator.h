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
    virtual ~CompoundBlockVolumeIterator() /*override*/ = default;

    virtual ::BaseBlockLocationIterator& operator++() /*override*/;

    virtual bool isValid() const /*override*/;

    virtual void _begin() /*override*/;

    virtual void _end() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundBlockVolumeIterator(::CompoundBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI void $_begin();

    MCNAPI void $_end();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
