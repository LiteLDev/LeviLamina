/**
 * @file  IgniteSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~IgniteSubcomponent();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   813866411
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@IgniteSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   1663840982
     * @vftbl  4
     * @symbol  ?getName\@IgniteSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IGNITESUBCOMPONENT
    /**
     * @hash   -138370239
     * @symbol  ?readfromJSON\@IgniteSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1290587432
     * @symbol  ?writetoJSON\@IgniteSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @hash   -1528674637
     * @symbol  ??0IgniteSubcomponent\@\@QEAA\@XZ
     */
    MCAPI IgniteSubcomponent();

};