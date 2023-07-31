#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BaseBlockLocationIterator.h"

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {

public:
    // prevent constructor by default
    SimpleBlockVolumeIterator& operator=(SimpleBlockVolumeIterator const&) = delete;
    SimpleBlockVolumeIterator(SimpleBlockVolumeIterator const&)            = delete;
    SimpleBlockVolumeIterator()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0SimpleBlockVolumeIterator\@\@QEAA\@AEBVSimpleBlockVolume\@\@_N\@Z
     */
    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const&, bool);
    // NOLINTEND
};
