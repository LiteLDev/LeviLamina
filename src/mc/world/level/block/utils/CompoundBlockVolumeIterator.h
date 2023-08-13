#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BaseBlockLocationIterator.h"

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {

public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&) = delete;
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&)            = delete;
    CompoundBlockVolumeIterator()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ??ECompoundBlockVolumeIterator\@\@UEAAAEAVBaseBlockLocationIterator\@\@XZ
     */
    virtual class BaseBlockLocationIterator& operator++();
    /**
     * @vftbl 2
     * @symbol ??ECompoundBlockVolumeIterator\@\@UEAA?AVBaseBlockLocationIterator\@\@H\@Z
     */
    virtual class BaseBlockLocationIterator operator++(int);
    /**
     * @vftbl 3
     * @symbol ?_begin\@CompoundBlockVolumeIterator\@\@MEAAXXZ
     */
    virtual void _begin();
    /**
     * @vftbl 4
     * @symbol ?_end\@CompoundBlockVolumeIterator\@\@MEAAXXZ
     */
    virtual void _end();
    /**
     * @symbol ??0CompoundBlockVolumeIterator\@\@QEAA\@AEBVCompoundBlockVolume\@\@_N\@Z
     */
    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const&, bool);
    // NOLINTEND
};
