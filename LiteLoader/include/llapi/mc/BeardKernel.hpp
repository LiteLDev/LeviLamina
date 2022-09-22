/**
 * @file  BeardKernel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BeardKernel.
 *
 */
struct BeardKernel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDKERNEL
public:
    struct BeardKernel& operator=(struct BeardKernel const &) = delete;
    BeardKernel(struct BeardKernel const &) = delete;
#endif

public:
    /**
     * @hash   1859312089
     * @symbol ??0BeardKernel@@QEAA@XZ
     */
    MCAPI BeardKernel();
    /**
     * @hash   583100375
     * @symbol ?getContribution@BeardKernel@@QEBAMHHH@Z
     */
    MCAPI float getContribution(int, int, int) const;

//private:
    /**
     * @hash   2126817190
     * @symbol ?createBeardKernel@BeardKernel@@AEAA?BV?$array@M$0DGAA@@std@@XZ
     */
    MCAPI class std::array<float, 13824> const createBeardKernel();

};