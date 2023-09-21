#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"

class MesaSurfaceBuilderNoises {
public:
    // prevent constructor by default
    MesaSurfaceBuilderNoises& operator=(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises();

public:
    // NOLINTBEGIN
    // symbol: ??1MesaSurfaceBuilderNoises@@QEAA@XZ
    MCAPI ~MesaSurfaceBuilderNoises();

    // symbol: ?make@MesaSurfaceBuilderNoises@@SA?AV1@AEBVXoroshiroPositionalRandomFactory@@@Z
    MCAPI static class MesaSurfaceBuilderNoises make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0MesaSurfaceBuilderNoises@@AEAA@V?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@000@Z
    MCAPI
    MesaSurfaceBuilderNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

    // NOLINTEND
};
