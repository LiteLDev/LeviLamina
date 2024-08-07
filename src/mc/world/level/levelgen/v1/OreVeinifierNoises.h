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
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const&);

    MCAPI ~OreVeinifierNoises();

    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI OreVeinifierNoises(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class XoroshiroPositionalRandomFactory
    );

    // NOLINTEND
};
