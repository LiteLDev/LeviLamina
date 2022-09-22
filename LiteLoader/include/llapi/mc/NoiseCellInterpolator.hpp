/**
 * @file  NoiseCellInterpolator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NoiseCellInterpolator.
 *
 */
class NoiseCellInterpolator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOISECELLINTERPOLATOR
public:
    class NoiseCellInterpolator& operator=(class NoiseCellInterpolator const &) = delete;
    NoiseCellInterpolator(class NoiseCellInterpolator const &) = delete;
    NoiseCellInterpolator() = delete;
#endif

public:
    /**
     * @hash   646359727
     * @symbol ??0NoiseCellInterpolator@@QEAA@V?$span@$$CBM$0?0@gsl@@HH@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>, int, int);
    /**
     * @hash   287245263
     * @symbol ??0NoiseCellInterpolator@@QEAA@V?$span@$$CBM$0?0@gsl@@@Z
     */
    MCAPI NoiseCellInterpolator(class gsl::span<float const, -1>);
    /**
     * @hash   -1359470802
     * @symbol ?getLerpedValue@NoiseCellInterpolator@@QEBAMXZ
     */
    MCAPI float getLerpedValue() const;
    /**
     * @hash   1794735227
     * @symbol ?selectCellXZ@NoiseCellInterpolator@@QEAAXHHHH@Z
     */
    MCAPI void selectCellXZ(int, int, int, int);
    /**
     * @hash   -639710695
     * @symbol ?updateForX@NoiseCellInterpolator@@QEAAXE@Z
     */
    MCAPI void updateForX(unsigned char);
    /**
     * @hash   1468593109
     * @symbol ?updateForZ@NoiseCellInterpolator@@QEAAXE@Z
     */
    MCAPI void updateForZ(unsigned char);

};