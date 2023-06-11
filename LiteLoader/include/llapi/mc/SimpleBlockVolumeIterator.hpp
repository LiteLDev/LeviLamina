/**
 * @file  SimpleBlockVolumeIterator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseBlockLocationIterator.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SimpleBlockVolumeIterator : public BaseBlockLocationIterator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEBLOCKVOLUMEITERATOR
public:
    class SimpleBlockVolumeIterator& operator=(class SimpleBlockVolumeIterator const &) = delete;
    SimpleBlockVolumeIterator(class SimpleBlockVolumeIterator const &) = delete;
    SimpleBlockVolumeIterator() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0SimpleBlockVolumeIterator\@\@QEAA\@AEBVSimpleBlockVolume\@\@_N\@Z
     */
    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const &, bool);

};
