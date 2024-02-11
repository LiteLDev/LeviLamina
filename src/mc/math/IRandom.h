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
    // vIndex: 0, symbol: ??1IRandom@@UEAA@XZ
    virtual ~IRandom();

    // vIndex: 1, symbol: ?nextInt@Random@Core@@UEAAHXZ
    virtual int nextInt() = 0;

    // vIndex: 2, symbol: ?nextInt@Random@Core@@UEAAHH@Z
    virtual int nextInt(int n) = 0;

    // vIndex: 3, symbol: ?nextLong@Random@Core@@UEAA_JXZ
    virtual int64 nextLong() = 0;

    // vIndex: 4, symbol: ?nextBoolean@Random@Core@@UEAA_NXZ
    virtual bool nextBoolean() = 0;

    // vIndex: 5, symbol: ?nextFloat@Random@Core@@UEAAMXZ
    virtual float nextFloat() = 0;

    // vIndex: 6, symbol: ?nextDouble@Random@Core@@UEAANXZ
    virtual double nextDouble() = 0;

    // vIndex: 7, symbol: ?nextGaussianDouble@Random@Core@@UEAANXZ
    virtual double nextGaussianDouble() = 0;

    // vIndex: 8, symbol: ?consumeCount@Random@Core@@UEAAXI@Z
    virtual void consumeCount(uint count) = 0;

    // vIndex: 9, symbol: ?fork@Random@Core@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork() = 0;

    // vIndex: 10, symbol:
    // ?forkPositional@IRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // NOLINTEND
};
