#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"

class CavifierNoises {

public:
    // prevent constructor by default
    CavifierNoises& operator=(CavifierNoises const&) = delete;
    CavifierNoises()                                 = delete;

public:
    /**
     * @symbol ??0CavifierNoises\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CavifierNoises(class CavifierNoises const&); // NOLINT
    /**
     * @symbol ??1CavifierNoises\@\@QEAA\@XZ
     */
    MCAPI ~CavifierNoises(); // NOLINT
    /**
     * @symbol ?make\@CavifierNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class CavifierNoises make(class XoroshiroPositionalRandomFactory const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0CavifierNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000000000000000\@Z
     */
    MCAPI
        CavifierNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>); // NOLINT

private:
};
