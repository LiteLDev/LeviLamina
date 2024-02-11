#pragma once

#include "mc/_HeaderOutputPredefine.h"

class XoroshiroRandom {
public:
    // prevent constructor by default
    XoroshiroRandom& operator=(XoroshiroRandom const&);
    XoroshiroRandom(XoroshiroRandom const&);
    XoroshiroRandom();

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@XoroshiroRandom@@UEAAXI@Z
    MCVAPI void consumeCount(uint rounds);

    // symbol: ?fork@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol:
    // ?forkPositional@XoroshiroRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ?nextBoolean@XoroshiroRandom@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@XoroshiroRandom@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextFloat@XoroshiroRandom@@UEAAMXZ
    MCVAPI float nextFloat();

    // symbol: ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@XoroshiroRandom@@UEAAHXZ
    MCVAPI int nextInt();

    // symbol: ?nextInt@XoroshiroRandom@@UEAAHH@Z
    MCVAPI int nextInt(int bound);

    // symbol: ?nextLong@XoroshiroRandom@@UEAA_JXZ
    MCVAPI int64 nextLong();

    // symbol: ?seed128@XoroshiroRandom@@UEBA?AUSeed128Bit@@XZ
    MCVAPI struct Seed128Bit seed128() const;

    // symbol: ?seed64@XoroshiroRandom@@UEBA_JXZ
    MCVAPI int64 seed64() const;

    // symbol: ?setSeed@XoroshiroRandom@@UEAAXUSeed128Bit@@@Z
    MCVAPI void setSeed(struct Seed128Bit);

    // symbol: ?setSeed@XoroshiroRandom@@UEAAX_J@Z
    MCVAPI void setSeed(int64);

    // symbol: ??1XoroshiroRandom@@UEAA@XZ
    MCVAPI ~XoroshiroRandom();

    // NOLINTEND
};
