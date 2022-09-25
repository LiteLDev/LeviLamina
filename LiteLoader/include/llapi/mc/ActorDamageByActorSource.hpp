/**
 * @file  ActorDamageByActorSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorDamageSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageByActorSource.
 *
 */
class ActorDamageByActorSource : public ActorDamageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYACTORSOURCE
public:
    class ActorDamageByActorSource& operator=(class ActorDamageByActorSource const &) = delete;
    ActorDamageByActorSource(class ActorDamageByActorSource const &) = delete;
    ActorDamageByActorSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorDamageByActorSource();
    /**
     * @hash   243536811
     * @vftbl  1
     * @symbol ?isEntitySource@ActorDamageByActorSource@@UEBA_NXZ
     */
    virtual bool isEntitySource() const;
    /**
     * @hash   -1217945039
     * @vftbl  10
     * @symbol ?getDeathMessage@ActorDamageByActorSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @hash   -967093006
     * @vftbl  11
     * @symbol ?getIsCreative@ActorDamageByActorSource@@UEBA_NXZ
     */
    virtual bool getIsCreative() const;
    /**
     * @hash   -2069328308
     * @vftbl  12
     * @symbol ?getIsWorldBuilder@ActorDamageByActorSource@@UEBA_NXZ
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @hash   188210201
     * @vftbl  13
     * @symbol ?getEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @hash   614068517
     * @vftbl  14
     * @symbol ?getEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityType() const;
    /**
     * @hash   -369846877
     * @vftbl  15
     * @symbol ?getEntityCategories@ActorDamageByActorSource@@UEBA?AW4ActorCategory@@XZ
     */
    virtual enum ActorCategory getEntityCategories() const;
    /**
     * @hash   -1823504859
     * @vftbl  18
     * @symbol ?getDamagingEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @hash   -1791781839
     * @vftbl  19
     * @symbol ?getDamagingEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getDamagingEntityType() const;
    /**
     * @hash   937217409
     * @vftbl  21
     * @symbol ?clone@ActorDamageByActorSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @hash   775768521
     * @symbol ??0ActorDamageByActorSource@@QEAA@AEAVActor@@W4ActorDamageCause@@@Z
     */
    MCAPI ActorDamageByActorSource(class Actor &, enum ActorDamageCause);

};