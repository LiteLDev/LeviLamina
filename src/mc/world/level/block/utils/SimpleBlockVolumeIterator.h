#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BaseBlockLocationIterator.h"

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    SimpleBlockVolumeIterator& operator=(SimpleBlockVolumeIterator const&);
    SimpleBlockVolumeIterator(SimpleBlockVolumeIterator const&);
    SimpleBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleBlockVolumeIterator() = default;

    // vIndex: 2
    virtual bool isValid() const;

    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const&, bool begin);

    // NOLINTEND
};
