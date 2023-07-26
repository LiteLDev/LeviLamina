/**
 * @file  ActorDamageByBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ActorDamageSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageByBlockSource.
 *
 */
class ActorDamageByBlockSource : public ActorDamageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYBLOCKSOURCE
public:
    class ActorDamageByBlockSource& operator=(class ActorDamageByBlockSource const &) = delete;
    ActorDamageByBlockSource(class ActorDamageByBlockSource const &) = delete;
    ActorDamageByBlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorDamageByBlockSource();
    /**
     * @vftbl  3
     * @symbol  ?isBlockSource\@ActorDamageByBlockSource\@\@UEBA_NXZ
     */
    virtual bool isBlockSource() const;
    /**
     * @vftbl  10
     * @symbol  ?getDeathMessage\@ActorDamageByBlockSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @vftbl  21
     * @symbol  ?clone\@ActorDamageByBlockSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol  ??0ActorDamageByBlockSource\@\@QEAA\@AEBVBlock\@\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageByBlockSource(class Block const &, enum class ActorDamageCause);

};