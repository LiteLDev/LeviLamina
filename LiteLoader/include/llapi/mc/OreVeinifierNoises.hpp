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
     * @hash   1945341361
     * @symbol  ??0OreVeinifierNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const &);
    /**
     * @hash   -1997562160
     * @symbol  ?getPositionalRandomFactory\@OreVeinifierNoises\@\@QEBAAEBVXoroshiroPositionalRandomFactory\@\@XZ
     */
    MCAPI class XoroshiroPositionalRandomFactory const & getPositionalRandomFactory() const;
    /**
     * @hash   1524506561
     * @symbol  ?sampleGapNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleGapNoise(float, float, float) const;
    /**
     * @hash   1544896561
     * @symbol  ?sampleVeinNoiseA\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseA(float, float, float) const;
    /**
     * @hash   1104106849
     * @symbol  ?sampleVeinNoiseB\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeinNoiseB(float, float, float) const;
    /**
     * @hash   -1237932559
     * @symbol  ?sampleVeininessNoise\@OreVeinifierNoises\@\@QEBAMMMM\@Z
     */
    MCAPI float sampleVeininessNoise(float, float, float) const;
    /**
     * @hash   -1288600234
     * @symbol  ??1OreVeinifierNoises\@\@QEAA\@XZ
     */
    MCAPI ~OreVeinifierNoises();
    /**
     * @hash   145432188
     * @symbol  ?make\@OreVeinifierNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @hash   -1034996559
     * @symbol  ??0OreVeinifierNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000VXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI OreVeinifierNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class XoroshiroPositionalRandomFactory);

private:

};