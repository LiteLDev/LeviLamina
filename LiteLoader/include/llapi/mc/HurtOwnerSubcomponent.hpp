/**
 * @file  HurtOwnerSubcomponent.hpp
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
 * @brief MC class HurtOwnerSubcomponent.
 *
 */
class HurtOwnerSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTOWNERSUBCOMPONENT
public:
    class HurtOwnerSubcomponent& operator=(class HurtOwnerSubcomponent const &) = delete;
    HurtOwnerSubcomponent(class HurtOwnerSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HurtOwnerSubcomponent();
    /**
     * @hash   -1993289545
     * @vftbl  1
     * @symbol  ?readfromJSON\@HurtOwnerSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1996653374
     * @vftbl  2
     * @symbol  ?writetoJSON\@HurtOwnerSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   52290529
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@HurtOwnerSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   1140694444
     * @vftbl  4
     * @symbol  ?getName\@HurtOwnerSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -456131635
     * @symbol  ??0HurtOwnerSubcomponent\@\@QEAA\@XZ
     */
    MCAPI HurtOwnerSubcomponent();

};