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
    ::ll::TypedStorage<8, 8, ::CompoundBlockVolume const*> mCompoundVolume;
    // NOLINTEND

public:
    // prevent constructor by default
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
    MCAPI CompoundBlockVolumeIterator(::CompoundBlockVolume const& vol, bool begin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundBlockVolume const& vol, bool begin);
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
