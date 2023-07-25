#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundBlockVolumeIterator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUMEITERATOR
public:
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&) = delete;
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&)            = delete;
    CompoundBlockVolumeIterator()                                              = delete;
#endif

public:
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
};
