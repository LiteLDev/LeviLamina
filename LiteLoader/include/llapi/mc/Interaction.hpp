/**
 * @file  Interaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Interaction.
 *
 */
struct Interaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTION
public:
    struct Interaction& operator=(struct Interaction const &) = delete;
#endif

public:
    /**
     * @hash   902798
     * @symbol  ??0Interaction\@\@QEAA\@XZ
     */
    MCAPI Interaction();
    /**
     * @hash   -1514384619
     * @symbol  ??0Interaction\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI Interaction(struct Interaction const &);
    /**
     * @hash   -428993093
     * @symbol  ??0Interaction\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI Interaction(struct Interaction &&);
    /**
     * @hash   610026954
     * @symbol  ?addActorDefinitionIdentifierByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addActorDefinitionIdentifierByName(std::string const &);
    /**
     * @hash   2062878014
     * @symbol  ?addLevelSoundEventByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addLevelSoundEventByName(std::string const &);
    /**
     * @hash   2032108696
     * @symbol  ?addVibrationByName\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addVibrationByName(std::string const &);
    /**
     * @hash   1402759203
     * @symbol  ?setCooldown\@Interaction\@\@QEAAXAEBM\@Z
     */
    MCAPI void setCooldown(float const &);
    /**
     * @hash   2119918531
     * @symbol  ?setCooldownAfterBeingAttacked\@Interaction\@\@QEAAXAEBM\@Z
     */
    MCAPI void setCooldownAfterBeingAttacked(float const &);
    /**
     * @hash   325544264
     * @symbol  ?setParticleType\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setParticleType(std::string const &);
    /**
     * @hash   -1508451372
     * @symbol  ?setTransformItem\@Interaction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTransformItem(std::string const &);
    /**
     * @hash   -196724866
     * @symbol  ??1Interaction\@\@QEAA\@XZ
     */
    MCAPI ~Interaction();

};