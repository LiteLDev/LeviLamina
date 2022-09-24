/**
 * @file  FallingBlockDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FallingBlockDelegate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKDELEGATE
public:
    class FallingBlockDelegate& operator=(class FallingBlockDelegate const &) = delete;
    FallingBlockDelegate(class FallingBlockDelegate const &) = delete;
    FallingBlockDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FallingBlockDelegate();
    /**
     * @vftbl  1
     * @symbol ?onLand@FallingBlockDelegate@@UEAAXAEBVHeavyBlock@@AEAVIBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onLand(class HeavyBlock const &, class IBlockSource &, class BlockPos const &);
    /**
     * @vftbl  2
     * @symbol ?breakBlock@FallingBlockDelegate@@UEAAXAEAVFallingBlock@@@Z
     */
    virtual void breakBlock(class FallingBlock &);

};