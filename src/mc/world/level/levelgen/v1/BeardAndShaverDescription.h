#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeardAndShaverDescription {

public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&) = delete;
    BeardAndShaverDescription(BeardAndShaverDescription const&)            = delete;
    BeardAndShaverDescription()                                            = delete;

public:
    /**
     * @symbol ??0BeardAndShaverDescription\@\@QEAA\@VBeardingDescriptionCache\@\@AEBUBeardKernel\@\@MM\@Z
     */
    MCAPI BeardAndShaverDescription(class BeardingDescriptionCache, struct BeardKernel const&, float, float); // NOLINT
    /**
     * @symbol ?calculateContribution\@BeardAndShaverDescription\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float calculateContribution(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getCache\@BeardAndShaverDescription\@\@QEBAAEBVBeardingDescriptionCache\@\@XZ
     */
    MCAPI class BeardingDescriptionCache const& getCache() const; // NOLINT
};
