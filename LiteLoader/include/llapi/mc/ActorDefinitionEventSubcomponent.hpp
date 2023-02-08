/**
 * @file  ActorDefinitionEventSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEventSubcomponent.
 *
 */
class ActorDefinitionEventSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENTSUBCOMPONENT
public:
    class ActorDefinitionEventSubcomponent& operator=(class ActorDefinitionEventSubcomponent const &) = delete;
    ActorDefinitionEventSubcomponent(class ActorDefinitionEventSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorDefinitionEventSubcomponent();
    /**
     * @hash   663912105
     * @vftbl  1
     * @symbol  ?readfromJSON\@ActorDefinitionEventSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1157772592
     * @vftbl  2
     * @symbol  ?writetoJSON\@ActorDefinitionEventSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -911811901
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@ActorDefinitionEventSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1314035266
     * @vftbl  4
     * @symbol  ?getName\@ActorDefinitionEventSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -2054041685
     * @symbol  ??0ActorDefinitionEventSubcomponent\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionEventSubcomponent();

};