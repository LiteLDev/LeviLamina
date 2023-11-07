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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SimpleBlockVolumeIterator() = default;

    // symbol: ??0SimpleBlockVolumeIterator@@QEAA@AEBVSimpleBlockVolume@@_N@Z
    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const&, bool);

    // NOLINTEND
};
