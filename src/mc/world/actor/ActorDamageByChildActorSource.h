#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageByActorSource.h"

class ActorDamageByChildActorSource : public ::ActorDamageByActorSource {

public:
    // prevent constructor by default
    ActorDamageByChildActorSource& operator=(ActorDamageByChildActorSource const&) = delete;
    ActorDamageByChildActorSource(ActorDamageByChildActorSource const&)            = delete;
    ActorDamageByChildActorSource()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isChildEntitySource\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool isChildEntitySource() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getDeathMessage\@ActorDamageByChildActorSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string, class Actor*) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getDamagingEntityIsCreative\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsCreative() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getDamagingEntityIsWorldBuilder\@ActorDamageByChildActorSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsWorldBuilder() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?getDamagingEntityUniqueID\@ActorDamageByChildActorSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getDamagingEntityType\@ActorDamageByChildActorSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getDamagingEntityType() const; // NOLINT
    /**
     * @vftbl 20
     * @symbol ?getDamagingEntityCategories\@ActorDamageByChildActorSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getDamagingEntityCategories() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?clone\@ActorDamageByChildActorSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDAMAGEBYCHILDACTORSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorDamageByChildActorSource(); // NOLINT
#endif
    /**
     * @symbol ??0ActorDamageByChildActorSource\@\@QEAA\@AEBVActor\@\@0W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageByChildActorSource(class Actor const&, class Actor const&, enum class ActorDamageCause); // NOLINT
};
