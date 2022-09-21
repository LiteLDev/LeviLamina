/**
 * @file  MC/GrantXPSubcomponent.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~GrantXPSubcomponent();
    /**
     * @hash   1705445751
     * @vftbl  1
     * @symbol ?readfromJSON@GrantXPSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1253829102
     * @vftbl  2
     * @symbol ?writetoJSON@GrantXPSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -2040007215
     * @vftbl  3
     * @symbol ?doOnHitEffect@GrantXPSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   1373729068
     * @vftbl  4
     * @symbol ?getName@GrantXPSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -831365379
     * @symbol ??0GrantXPSubcomponent@@QEAA@XZ
     */
    MCAPI GrantXPSubcomponent();

};