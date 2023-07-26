#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolumeIterator {

public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&) = delete;
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&)            = delete;
    CompoundBlockVolumeIterator()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ??ECompoundBlockVolumeIterator\@\@UEAAAEAVBaseBlockLocationIterator\@\@XZ
     */
    virtual class BaseBlockLocationIterator& operator++(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ??ECompoundBlockVolumeIterator\@\@UEAA?AVBaseBlockLocationIterator\@\@H\@Z
     */
    virtual class BaseBlockLocationIterator operator++(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?_begin\@CompoundBlockVolumeIterator\@\@MEAAXXZ
     */
    virtual void _begin(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?_end\@CompoundBlockVolumeIterator\@\@MEAAXXZ
     */
    virtual void _end(); // NOLINT
    /**
     * @symbol ??0CompoundBlockVolumeIterator\@\@QEAA\@AEBVCompoundBlockVolume\@\@_N\@Z
     */
    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const&, bool); // NOLINT
};
