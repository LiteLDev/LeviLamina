#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageSource.h"

class ActorDamageByBlockSource : public ::ActorDamageSource {

public:
    // prevent constructor by default
    ActorDamageByBlockSource& operator=(ActorDamageByBlockSource const&) = delete;
    ActorDamageByBlockSource(ActorDamageByBlockSource const&)            = delete;
    ActorDamageByBlockSource()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isBlockSource\@ActorDamageByBlockSource\@\@UEBA_NXZ
     */
    virtual bool isBlockSource() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getDeathMessage\@ActorDamageByBlockSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string, class Actor*) const; // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?clone\@ActorDamageByBlockSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const; // NOLINT
};
