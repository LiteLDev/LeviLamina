#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundBlockVolumeIterator() = default;

    // vIndex: 1
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2
    virtual bool isValid() const;

    // vIndex: 3
    virtual void _begin();

    // vIndex: 4
    virtual void _end();

    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const& vol, bool begin);

    // NOLINTEND
};
