#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/synth/ParityImprovedNoiseImpl.h"

class MesaSurfaceBuilderNoises {
public:
    // prevent constructor by default
    MesaSurfaceBuilderNoises& operator=(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises();

public:
    // NOLINTBEGIN
    MCAPI ~MesaSurfaceBuilderNoises();

    MCAPI static class MesaSurfaceBuilderNoises make(class XoroshiroPositionalRandomFactory const& positionalRandom);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI
    MesaSurfaceBuilderNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

    MCAPI void dtor$();

    // NOLINTEND
};
