#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Interaction {

public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&) = delete;

public:
    /**
     * @symbol ??0Interaction\@\@QEAA\@XZ
     */
    MCAPI Interaction(); // NOLINT
    /**
     * @symbol ??0Interaction\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI Interaction(struct Interaction&&); // NOLINT
    /**
     * @symbol ??0Interaction\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI Interaction(struct Interaction const&); // NOLINT
    /**
     * @symbol
     * ?addActorDefinitionIdentifierByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addActorDefinitionIdentifierByName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addLevelSoundEventByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addLevelSoundEventByName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?addVibrationByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addVibrationByName(std::string const&); // NOLINT
    /**
     * @symbol ?setCooldown\@Interaction\@\@QEAAXAEBM\@Z
     */
    MCAPI void setCooldown(float const&); // NOLINT
    /**
     * @symbol ?setCooldownAfterBeingAttacked\@Interaction\@\@QEAAXAEBM\@Z
     */
    MCAPI void setCooldownAfterBeingAttacked(float const&); // NOLINT
    /**
     * @symbol
     * ?setParticleType\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setParticleType(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setTransformItem\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTransformItem(std::string const&); // NOLINT
    /**
     * @symbol ??1Interaction\@\@QEAA\@XZ
     */
    MCAPI ~Interaction(); // NOLINT
};
