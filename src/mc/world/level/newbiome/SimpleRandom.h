#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IRandom.h"

class SimpleRandom : public ::IRandom {
public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const&);
    SimpleRandom(SimpleRandom const&);
    SimpleRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?nextInt@SimpleRandom@@UEAAHXZ
    virtual int nextInt();

    // vIndex: 2, symbol: ?nextInt@SimpleRandom@@UEAAHH@Z
    virtual int nextInt(int);

    // vIndex: 3, symbol: ?nextLong@SimpleRandom@@UEAA_JXZ
    virtual int64 nextLong();

    // vIndex: 4, symbol: ?nextBoolean@SimpleRandom@@UEAA_NXZ
    virtual bool nextBoolean();

    // vIndex: 5, symbol: ?nextFloat@SimpleRandom@@UEAAMXZ
    virtual float nextFloat();

    // vIndex: 6, symbol: ?nextDouble@SimpleRandom@@UEAANXZ
    virtual double nextDouble();

    // vIndex: 7, symbol: ?nextGaussianDouble@SimpleRandom@@UEAANXZ
    virtual double nextGaussianDouble();

    // vIndex: 8, symbol: ?consumeCount@SimpleRandom@@UEAAXI@Z
    virtual void consumeCount(uint);

    // vIndex: 9, symbol: ?fork@SimpleRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork();

    // vIndex: 10, symbol:
    // ?forkPositional@SimpleRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ??1SimpleRandom@@UEAA@XZ
    MCVAPI ~SimpleRandom();

    // NOLINTEND
};
