#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/DelegatingRandom.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class IRandom;
namespace NoiseUtils { class DelegatingRandom; }
// clang-format on

namespace NoiseUtils {

class DoublesForFloatsRandom : public ::NoiseUtils::DelegatingRandom {
public:
    // prevent constructor by default
    DoublesForFloatsRandom& operator=(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom(DoublesForFloatsRandom const&);
    DoublesForFloatsRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?nextInt@DelegatingRandom@NoiseUtils@@UEAAHXZ
    virtual int nextInt();

    // vIndex: 2, symbol: ?nextInt@DelegatingRandom@NoiseUtils@@UEAAHH@Z
    virtual int nextInt(int);

    // vIndex: 3, symbol: ?nextLong@DelegatingRandom@NoiseUtils@@UEAA_JXZ
    virtual int64 nextLong();

    // vIndex: 4, symbol: ?nextBoolean@DelegatingRandom@NoiseUtils@@UEAA_NXZ
    virtual bool nextBoolean();

    // vIndex: 5, symbol: ?nextFloat@DoublesForFloatsRandom@NoiseUtils@@UEAAMXZ
    virtual float nextFloat();

    // vIndex: 6, symbol: ?nextDouble@DelegatingRandom@NoiseUtils@@UEAANXZ
    virtual double nextDouble();

    // vIndex: 7, symbol: ?nextGaussianDouble@XoroshiroRandom@@UEAANXZ
    virtual double nextGaussianDouble();

    // vIndex: 8, symbol: ?consumeCount@DelegatingRandom@NoiseUtils@@UEAAXI@Z
    virtual void consumeCount(uint);

    // vIndex: 9, symbol:
    // ?fork@DelegatingRandom@NoiseUtils@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    virtual std::unique_ptr<class IRandom> fork();

    // vIndex: 10, symbol:
    // ?forkPositional@IRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ??1DoublesForFloatsRandom@NoiseUtils@@UEAA@XZ
    MCVAPI ~DoublesForFloatsRandom();

    // NOLINTEND
};

}; // namespace NoiseUtils
