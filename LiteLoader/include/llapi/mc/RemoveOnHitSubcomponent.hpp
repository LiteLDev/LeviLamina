/**
 * @file  RemoveOnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RemoveOnHitSubcomponent.
 *
 */
class RemoveOnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEONHITSUBCOMPONENT
public:
    class RemoveOnHitSubcomponent& operator=(class RemoveOnHitSubcomponent const &) = delete;
    RemoveOnHitSubcomponent(class RemoveOnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RemoveOnHitSubcomponent();
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
     * @hash   2066164357
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@RemoveOnHitSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1898339872
     * @vftbl  4
     * @symbol  ?getName\@RemoveOnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEONHITSUBCOMPONENT
    /**
     * @hash   486082491
     * @symbol  ?readfromJSON\@RemoveOnHitSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -147203298
     * @symbol  ?writetoJSON\@RemoveOnHitSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @hash   706153833
     * @symbol  ??0RemoveOnHitSubcomponent\@\@QEAA\@XZ
     */
    MCAPI RemoveOnHitSubcomponent();

};