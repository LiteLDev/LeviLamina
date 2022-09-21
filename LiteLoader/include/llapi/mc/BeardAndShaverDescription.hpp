/**
 * @file  MC/BeardAndShaverDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeardAndShaverDescription.
 *
 */
class BeardAndShaverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDANDSHAVERDESCRIPTION
public:
    class BeardAndShaverDescription& operator=(class BeardAndShaverDescription const &) = delete;
    BeardAndShaverDescription(class BeardAndShaverDescription const &) = delete;
    BeardAndShaverDescription() = delete;
#endif

public:
    /**
     * @hash   164658734
     * @symbol ??0BeardAndShaverDescription@@QEAA@VBeardingDescriptionCache@@AEBUBeardKernel@@MM@Z
     */
    MCAPI BeardAndShaverDescription(class BeardingDescriptionCache, struct BeardKernel const &, float, float);
    /**
     * @hash   1772517001
     * @symbol ?calculateContribution@BeardAndShaverDescription@@QEBAMAEBVBlockPos@@@Z
     */
    MCAPI float calculateContribution(class BlockPos const &) const;
    /**
     * @hash   566232608
     * @symbol ?getCache@BeardAndShaverDescription@@QEBAAEBVBeardingDescriptionCache@@XZ
     */
    MCAPI class BeardingDescriptionCache const & getCache() const;

};