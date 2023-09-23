#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"

class OreVeinifierNoises {
public:
    // prevent constructor by default
    OreVeinifierNoises& operator=(OreVeinifierNoises const&);
    OreVeinifierNoises();

public:
    // NOLINTBEGIN
    // symbol: ??0OreVeinifierNoises@@QEAA@AEBV0@@Z
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const&);

    // symbol: ??1OreVeinifierNoises@@QEAA@XZ
    MCAPI ~OreVeinifierNoises();

    // symbol: ?make@OreVeinifierNoises@@SA?AV1@AEBVXoroshiroPositionalRandomFactory@@@Z
    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0OreVeinifierNoises@@AEAA@V?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@000VXoroshiroPositionalRandomFactory@@@Z
    MCAPI OreVeinifierNoises(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class XoroshiroPositionalRandomFactory
    );

    // NOLINTEND
};
