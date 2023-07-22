/**
 * @file  MesaSurfaceBuilderNoises.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MesaSurfaceBuilderNoises.
 *
 */
class MesaSurfaceBuilderNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESASURFACEBUILDERNOISES
public:
    class MesaSurfaceBuilderNoises& operator=(class MesaSurfaceBuilderNoises const &) = delete;
    MesaSurfaceBuilderNoises(class MesaSurfaceBuilderNoises const &) = delete;
    MesaSurfaceBuilderNoises() = delete;
#endif

public:
    /**
     * @symbol  ??1MesaSurfaceBuilderNoises\@\@QEAA\@XZ
     */
    MCAPI ~MesaSurfaceBuilderNoises();
    /**
     * @symbol  ?make\@MesaSurfaceBuilderNoises\@\@SA?AV1\@AEBVXoroshiroPositionalRandomFactory\@\@\@Z
     */
    MCAPI static class MesaSurfaceBuilderNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @symbol  ??0MesaSurfaceBuilderNoises\@\@AEAA\@V?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@000\@Z
     */
    MCAPI MesaSurfaceBuilderNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

private:

};