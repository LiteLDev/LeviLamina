#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageSource.h"

class ActorDamageByActorSource : public ::ActorDamageSource {

public:
    // prevent constructor by default
    ActorDamageByActorSource& operator=(ActorDamageByActorSource const&) = delete;
    ActorDamageByActorSource(ActorDamageByActorSource const&)            = delete;
    ActorDamageByActorSource()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isEntitySource\@ActorDamageByActorSource\@\@UEBA_NXZ
     */
    virtual bool isEntitySource() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getDeathMessage\@ActorDamageByActorSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string, class Actor*) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getIsCreative\@ActorDamageByActorSource\@\@UEBA_NXZ
     */
    virtual bool getIsCreative() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getIsWorldBuilder\@ActorDamageByActorSource\@\@UEBA_NXZ
     */
    virtual bool getIsWorldBuilder() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?getEntityUniqueID\@ActorDamageByActorSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getEntityUniqueID() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getEntityType\@ActorDamageByActorSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityType() const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getEntityCategories\@ActorDamageByActorSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getEntityCategories() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?getDamagingEntityUniqueID\@ActorDamageByActorSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getDamagingEntityType\@ActorDamageByActorSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getDamagingEntityType() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?clone\@ActorDamageByActorSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDAMAGEBYACTORSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorDamageByActorSource(); // NOLINT
#endif
    /**
     * @symbol ??0ActorDamageByActorSource\@\@QEAA\@AEBVActor\@\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageByActorSource(class Actor const&, enum class ActorDamageCause); // NOLINT
};
