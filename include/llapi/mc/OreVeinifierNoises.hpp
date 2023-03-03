/**
 * @file  OreVeinifierNoises.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OreVeinifierNoises.
 *
 */
class OreVeinifierNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREVEINIFIERNOISES
public:
    class OreVeinifierNoises& operator=(class OreVeinifierNoises const &) = delete;
    OreVeinifierNoises() = delete;
#endif

public:
    /**
     * @symbol  ??0OreVeinifierNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const &);
    /**
     * @symbol  ?getPositionalRandomFactory\@OreVeinifierNoises\@\@QEBAAEBVXoroshiroPositionalRandomFactory\@\@XZ
     */
    MCAPI class XoroshiroPositionalRandomFactory const & getPositionalRandomFactory() const;
    /**
     * @symbol  ?sampleGapNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleGapNoise(float, float, float) const;
    /**
     * @symbol  ?sampleVeinNoiseA\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseA(float, float, float) const;
    /**
     * @symbol  ?sampleVeinNoiseB\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseB(float, float, float) const;
    /**
     * @symbol  ?sampleVeininessNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeininessNoise(float, float, float) const;
    /**
     * @symbol  ??1OreVeinifierNoises\@\@QEAA\@XZ
     */
    MCAPI ~OreVeinifierNoises();
    /**
     * @symbol  ?make\@OreVeinifierNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @symbol  ??0OreVeinifierNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000VXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI OreVeinifierNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class XoroshiroPositionalRandomFactory);

private:

};