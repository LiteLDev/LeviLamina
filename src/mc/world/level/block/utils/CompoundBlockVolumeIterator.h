#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BaseBlockLocationIterator.h"

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompoundBlockVolumeIterator@@UEAA@XZ
    virtual ~CompoundBlockVolumeIterator() = default;

    // vIndex: 1, symbol: ??ECompoundBlockVolumeIterator@@UEAAAEAVBaseBlockLocationIterator@@XZ
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2, symbol: ?isValid@CompoundBlockVolumeIterator@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 3, symbol: ?_begin@CompoundBlockVolumeIterator@@MEAAXXZ
    virtual void _begin();

    // vIndex: 4, symbol: ?_end@CompoundBlockVolumeIterator@@MEAAXXZ
    virtual void _end();

    // symbol: ??0CompoundBlockVolumeIterator@@QEAA@AEBVCompoundBlockVolume@@_N@Z
    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const&, bool begin);

    // NOLINTEND
};
