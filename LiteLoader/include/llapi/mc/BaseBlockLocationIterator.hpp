/**
 * @file  BaseBlockLocationIterator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BaseBlockLocationIterator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEBLOCKLOCATIONITERATOR
public:
    BaseBlockLocationIterator(class BaseBlockLocationIterator const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ??EBaseBlockLocationIterator\@\@UEAAAEAV0\@XZ
     */
    virtual class BaseBlockLocationIterator & operator++();
    /**
     * @vftbl 2
     * @symbol ??EBaseBlockLocationIterator\@\@UEAA?AV0\@H\@Z
     */
    virtual class BaseBlockLocationIterator operator++(int);
    /**
     * @vftbl 3
     * @symbol ?_begin\@BaseBlockLocationIterator\@\@MEAAXXZ
     */
    virtual void _begin();
    /**
     * @vftbl 4
     * @symbol ?_end\@BaseBlockLocationIterator\@\@MEAAXXZ
     */
    virtual void _end();
    /**
     * @symbol ?done\@BaseBlockLocationIterator\@\@QEBA_NXZ
     */
    MCAPI bool done() const;
    /**
     * @symbol ??DBaseBlockLocationIterator\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos operator*() const;
    /**
     * @symbol ?reset\@BaseBlockLocationIterator\@\@QEAAXXZ
     */
    MCAPI void reset();

//protected:
    /**
     * @symbol ??0BaseBlockLocationIterator\@\@IEAA\@AEBVBlockPos\@\@0_N\@Z
     */
    MCAPI BaseBlockLocationIterator(class BlockPos const &, class BlockPos const &, bool);
    /**
     * @symbol ??0BaseBlockLocationIterator\@\@IEAA\@XZ
     */
    MCAPI BaseBlockLocationIterator();
    /**
     * @symbol ??4BaseBlockLocationIterator\@\@IEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class BaseBlockLocationIterator & operator=(class BaseBlockLocationIterator const &);

protected:

};
