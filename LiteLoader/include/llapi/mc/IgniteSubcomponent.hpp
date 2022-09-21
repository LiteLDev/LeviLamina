/**
 * @file  MC/IgniteSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IgniteSubcomponent.
 *
 */
class IgniteSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGNITESUBCOMPONENT
public:
    class IgniteSubcomponent& operator=(class IgniteSubcomponent const &) = delete;
    IgniteSubcomponent(class IgniteSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IgniteSubcomponent();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   1745805771
     * @vftbl  3
     * @symbol ?doOnHitEffect@IgniteSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1700017258
     * @vftbl  4
     * @symbol ?getName@IgniteSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IGNITESUBCOMPONENT
    /**
     * @hash   -230257215
     * @symbol ?readfromJSON@IgniteSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1382474408
     * @symbol ?writetoJSON@IgniteSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @hash   -595751213
     * @symbol ??0IgniteSubcomponent@@QEAA@XZ
     */
    MCAPI IgniteSubcomponent();

};