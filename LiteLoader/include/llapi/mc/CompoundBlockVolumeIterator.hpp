/**
 * @file  CompoundBlockVolumeIterator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CompoundBlockVolumeIterator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUMEITERATOR
public:
    class CompoundBlockVolumeIterator& operator=(class CompoundBlockVolumeIterator const &) = delete;
    CompoundBlockVolumeIterator(class CompoundBlockVolumeIterator const &) = delete;
    CompoundBlockVolumeIterator() = delete;
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
    virtual class BaseBlockLocationIterator & operator++();
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
    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const &, bool);

};
