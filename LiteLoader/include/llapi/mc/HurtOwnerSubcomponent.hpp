/**
 * @file  MC/HurtOwnerSubcomponent.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~HurtOwnerSubcomponent();
    /**
     * @hash   -1062611017
     * @vftbl  1
     * @symbol ?readfromJSON@HurtOwnerSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1065974846
     * @vftbl  2
     * @symbol ?writetoJSON@HurtOwnerSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   984245265
     * @vftbl  3
     * @symbol ?doOnHitEffect@HurtOwnerSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   2071803500
     * @vftbl  4
     * @symbol ?getName@HurtOwnerSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   476791789
     * @symbol ??0HurtOwnerSubcomponent@@QEAA@XZ
     */
    MCAPI HurtOwnerSubcomponent();

};