/**
 * @file  ActorDamageByChildActorSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ActorDamageByActorSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageByChildActorSource.
 *
 */
class ActorDamageByChildActorSource : public ActorDamageByActorSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYCHILDACTORSOURCE
public:
    class ActorDamageByChildActorSource& operator=(class ActorDamageByChildActorSource const &) = delete;
    ActorDamageByChildActorSource(class ActorDamageByChildActorSource const &) = delete;
    ActorDamageByChildActorSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorDamageByChildActorSource();
    /**
     * @vftbl  2
     * @symbol  ?isChildEntitySource\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool isChildEntitySource() const;
    /**
     * @vftbl  10
     * @symbol  ?getDeathMessage\@ActorDamageByChildActorSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @vftbl  16
     * @symbol  ?getDamagingEntityIsCreative\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsCreative() const;
    /**
     * @vftbl  17
     * @symbol  ?getDamagingEntityIsWorldBuilder\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsWorldBuilder() const;
    /**
     * @vftbl  18
     * @symbol  ?getDamagingEntityUniqueID\@ActorDamageByChildActorSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @vftbl  19
     * @symbol  ?getDamagingEntityType\@ActorDamageByChildActorSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getDamagingEntityType() const;
    /**
     * @vftbl  20
     * @symbol  ?getDamagingEntityCategories\@ActorDamageByChildActorSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getDamagingEntityCategories() const;
    /**
     * @vftbl  21
     * @symbol  ?clone\@ActorDamageByChildActorSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol  ??0ActorDamageByChildActorSource\@\@QEAA\@AEBVActor\@\@0W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageByChildActorSource(class Actor const &, class Actor const &, enum class ActorDamageCause);

};