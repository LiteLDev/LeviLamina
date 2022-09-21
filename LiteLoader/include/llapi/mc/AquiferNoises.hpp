/**
 * @file  MC/AquiferNoises.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AquiferNoises.
 *
 */
class AquiferNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFERNOISES
public:
    class AquiferNoises& operator=(class AquiferNoises const &) = delete;
    AquiferNoises() = delete;
#endif

public:
    /**
     * @hash   1745466065
     * @symbol ??0AquiferNoises@@QEAA@AEBV0@@Z
     */
    MCAPI AquiferNoises(class AquiferNoises const &);
    /**
     * @hash   -750556524
     * @symbol ??1AquiferNoises@@QEAA@XZ
     */
    MCAPI ~AquiferNoises();
    /**
     * @hash   1965869018
     * @symbol ?make@AquiferNoises@@SA?AV1@AEBVXoroshiroPositionalRandomFactory@@@Z
     */
    MCAPI static class AquiferNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @hash   -2074753759
     * @symbol ??0AquiferNoises@@AEAA@V?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@000VXoroshiroPositionalRandomFactory@@@Z
     */
    MCAPI AquiferNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class XoroshiroPositionalRandomFactory);

private:

};