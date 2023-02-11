/**
 * @file  GrantXPSubcomponent.hpp
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
 * @brief MC class GrantXPSubcomponent.
 *
 */
class GrantXPSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRANTXPSUBCOMPONENT
public:
    class GrantXPSubcomponent& operator=(class GrantXPSubcomponent const &) = delete;
    GrantXPSubcomponent(class GrantXPSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GrantXPSubcomponent();
    /**
     * @hash   774767223
     * @vftbl  1
     * @symbol  ?readfromJSON\@GrantXPSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   2110459666
     * @vftbl  2
     * @symbol  ?writetoJSON\@GrantXPSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   1322989969
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@GrantXPSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   442620012
     * @vftbl  4
     * @symbol  ?getName\@GrantXPSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -1764288803
     * @symbol  ??0GrantXPSubcomponent\@\@QEAA\@XZ
     */
    MCAPI GrantXPSubcomponent();

};