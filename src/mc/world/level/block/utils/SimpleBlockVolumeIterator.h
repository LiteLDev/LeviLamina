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
    // vIndex: 0, symbol: __gen_??1SimpleBlockVolumeIterator@@UEAA@XZ
    virtual ~SimpleBlockVolumeIterator() = default;

    // vIndex: 2, symbol: ?isValid@SimpleBlockVolumeIterator@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0SimpleBlockVolumeIterator@@QEAA@AEBVSimpleBlockVolume@@_N@Z
    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const&, bool begin);

    // NOLINTEND
};
