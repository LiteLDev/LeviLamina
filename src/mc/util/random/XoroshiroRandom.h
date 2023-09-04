#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IRandom.h"

class XoroshiroRandom : public ::IRandom {
public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&) = delete;
    XoroshiroRandom(XoroshiroRandom const&)            = delete;
    XoroshiroRandom()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?nextInt@XoroshiroRandom@@UEAAHXZ
    virtual int nextInt();

    // vIndex: 2, symbol: ?nextInt@XoroshiroRandom@@UEAAHH@Z
    virtual int nextInt(int);

    // vIndex: 3, symbol: ?nextLong@XoroshiroRandom@@UEAA_JXZ
    virtual int64 nextLong();

    // vIndex: 4, symbol: ?nextBoolean@XoroshiroRandom@@UEAA_NXZ
    virtual bool nextBoolean();

    // vIndex: 5, symbol: ?nextFloat@XoroshiroRandom@@UEAAMXZ
    virtual float nextFloat();

    // vIndex: 6, symbol: ?nextDouble@XoroshiroRandom@@UEAANXZ
    virtual double nextDouble();

    // vIndex: 7, symbol: ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
    virtual double nextGaussianDouble();

    // vIndex: 8, symbol: ?consumeCount@XoroshiroRandom@@UEAAXI@Z
    virtual void consumeCount(uint);

    // vIndex: 9, symbol:
    // ?fork@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork();

    // vIndex: 10, symbol:
    // ?forkPositional@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ??1XoroshiroRandom@@UEAA@XZ
    MCVAPI ~XoroshiroRandom();

    // NOLINTEND
};
