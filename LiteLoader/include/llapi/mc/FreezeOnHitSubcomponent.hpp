/**
 * @file  FreezeOnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FreezeOnHitSubcomponent.
 *
 */
class FreezeOnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZEONHITSUBCOMPONENT
public:
    class FreezeOnHitSubcomponent& operator=(class FreezeOnHitSubcomponent const &) = delete;
    FreezeOnHitSubcomponent(class FreezeOnHitSubcomponent const &) = delete;
    FreezeOnHitSubcomponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FreezeOnHitSubcomponent();
    /**
     * @hash   410133950
     * @vftbl  1
     * @symbol  ?readfromJSON\@FreezeOnHitSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   556521483
     * @vftbl  2
     * @symbol  ?writetoJSON\@FreezeOnHitSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   376807672
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@FreezeOnHitSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1732737149
     * @vftbl  4
     * @symbol  ?getName\@FreezeOnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();

};