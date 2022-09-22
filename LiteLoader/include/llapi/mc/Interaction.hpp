/**
 * @file  Interaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -127087026
     * @symbol ??0Interaction@@QEAA@XZ
     */
    MCAPI Interaction();
    /**
     * @hash   -1642374443
     * @symbol ??0Interaction@@QEAA@AEBU0@@Z
     */
    MCAPI Interaction(struct Interaction const &);
    /**
     * @hash   -556982917
     * @symbol ??0Interaction@@QEAA@$$QEAU0@@Z
     */
    MCAPI Interaction(struct Interaction &&);
    /**
     * @hash   479377082
     * @symbol ?addActorDefinitionIdentifierByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addActorDefinitionIdentifierByName(std::string const &);
    /**
     * @hash   1932228142
     * @symbol ?addLevelSoundEventByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addLevelSoundEventByName(std::string const &);
    /**
     * @hash   1901458824
     * @symbol ?addVibrationByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addVibrationByName(std::string const &);
    /**
     * @hash   1272047827
     * @symbol ?setCooldown@Interaction@@QEAAXAEBM@Z
     */
    MCAPI void setCooldown(float const &);
    /**
     * @hash   1989207155
     * @symbol ?setCooldownAfterBeingAttacked@Interaction@@QEAAXAEBM@Z
     */
    MCAPI void setCooldownAfterBeingAttacked(float const &);
    /**
     * @hash   194832888
     * @symbol ?setParticleType@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setParticleType(std::string const &);
    /**
     * @hash   -1639162748
     * @symbol ?setTransformItem@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setTransformItem(std::string const &);
    /**
     * @hash   -324714690
     * @symbol ??1Interaction@@QEAA@XZ
     */
    MCAPI ~Interaction();

};