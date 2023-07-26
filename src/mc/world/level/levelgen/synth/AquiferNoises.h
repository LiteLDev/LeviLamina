#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"

class AquiferNoises {

public:
    // prevent constructor by default
    AquiferNoises& operator=(AquiferNoises const&) = delete;
    AquiferNoises()                                = delete;

public:
    /**
     * @symbol ??0AquiferNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AquiferNoises(class AquiferNoises const&); // NOLINT
    /**
     * @symbol ??1AquiferNoises\@\@QEAA\@XZ
     */
    MCAPI ~AquiferNoises(); // NOLINT
    /**
     * @symbol ?make\@AquiferNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class AquiferNoises make(class XoroshiroPositionalRandomFactory const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0AquiferNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000VXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI AquiferNoises(
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>,
        class XoroshiroPositionalRandomFactory
    ); // NOLINT

private:
};
