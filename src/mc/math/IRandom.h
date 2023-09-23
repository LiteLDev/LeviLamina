#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRandom {
public:
    // prevent constructor by default
    IRandom& operator=(IRandom const&);
    IRandom(IRandom const&);
    IRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?nextInt@XoroshiroRandom@@UEAAHXZ
    virtual int nextInt() = 0;

    // vIndex: 2, symbol: ?nextInt@XoroshiroRandom@@UEAAHH@Z
    virtual int nextInt(int) = 0;

    // vIndex: 3, symbol: ?nextLong@XoroshiroRandom@@UEAA_JXZ
    virtual int64 nextLong() = 0;

    // vIndex: 4, symbol: ?nextBoolean@XoroshiroRandom@@UEAA_NXZ
    virtual bool nextBoolean() = 0;

    // vIndex: 5, symbol: ?nextFloat@XoroshiroRandom@@UEAAMXZ
    virtual float nextFloat() = 0;

    // vIndex: 6, symbol: ?nextDouble@XoroshiroRandom@@UEAANXZ
    virtual double nextDouble() = 0;

    // vIndex: 7, symbol: ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
    virtual double nextGaussianDouble() = 0;

    // vIndex: 8, symbol: ?consumeCount@XoroshiroRandom@@UEAAXI@Z
    virtual void consumeCount(uint) = 0;

    // vIndex: 9, symbol:
    // ?fork@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork() = 0;

    // vIndex: 10, symbol:
    // ?forkPositional@IRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ??1IRandom@@UEAA@XZ
    MCVAPI ~IRandom();

    // NOLINTEND
};
