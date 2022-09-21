/**
 * @file  MC/StickInGroundSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StickInGroundSubcomponent.
 *
 */
class StickInGroundSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STICKINGROUNDSUBCOMPONENT
public:
    class StickInGroundSubcomponent& operator=(class StickInGroundSubcomponent const &) = delete;
    StickInGroundSubcomponent(class StickInGroundSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StickInGroundSubcomponent();
    /**
     * @hash   1539400495
     * @vftbl  1
     * @symbol ?readfromJSON@StickInGroundSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   1972276682
     * @vftbl  2
     * @symbol ?writetoJSON@StickInGroundSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -1644757575
     * @vftbl  3
     * @symbol ?doOnHitEffect@StickInGroundSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -830826204
     * @vftbl  4
     * @symbol ?getName@StickInGroundSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -114929051
     * @symbol ??0StickInGroundSubcomponent@@QEAA@XZ
     */
    MCAPI StickInGroundSubcomponent();

};