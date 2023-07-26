#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"

class OreVeinifierNoises {

public:
    // prevent constructor by default
    OreVeinifierNoises& operator=(OreVeinifierNoises const&) = delete;
    OreVeinifierNoises()                                     = delete;

public:
    /**
     * @symbol ??0OreVeinifierNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const&); // NOLINT
    /**
     * @symbol ?getPositionalRandomFactory\@OreVeinifierNoises\@\@QEBAAEBVXoroshiroPositionalRandomFactory\@\@XZ
     */
    MCAPI class XoroshiroPositionalRandomFactory const& getPositionalRandomFactory() const; // NOLINT
    /**
     * @symbol ?sampleGapNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleGapNoise(float, float, float) const; // NOLINT
    /**
     * @symbol ?sampleVeinNoiseA\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseA(float, float, float) const; // NOLINT
    /**
     * @symbol ?sampleVeinNoiseB\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseB(float, float, float) const; // NOLINT
    /**
     * @symbol ?sampleVeininessNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeininessNoise(float, float, float) const; // NOLINT
    /**
     * @symbol ??1OreVeinifierNoises\@\@QEAA\@XZ
     */
    MCAPI ~OreVeinifierNoises(); // NOLINT
    /**
     * @symbol ?make\@OreVeinifierNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0OreVeinifierNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000VXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI OreVeinifierNoises(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class XoroshiroPositionalRandomFactory
    ); // NOLINT

private:
};
