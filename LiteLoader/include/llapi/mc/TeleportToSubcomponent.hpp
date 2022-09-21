/**
 * @file  MC/TeleportToSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportToSubcomponent.
 *
 */
class TeleportToSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTTOSUBCOMPONENT
public:
    class TeleportToSubcomponent& operator=(class TeleportToSubcomponent const &) = delete;
    TeleportToSubcomponent(class TeleportToSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TeleportToSubcomponent();
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
     * @hash   634987839
     * @vftbl  3
     * @symbol ?doOnHitEffect@TeleportToSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   505213866
     * @vftbl  4
     * @symbol ?getName@TeleportToSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTTOSUBCOMPONENT
    /**
     * @hash   -1511823035
     * @symbol ?readfromJSON@TeleportToSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1427525036
     * @symbol ?writetoJSON@TeleportToSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @hash   2061195887
     * @symbol ??0TeleportToSubcomponent@@QEAA@XZ
     */
    MCAPI TeleportToSubcomponent();

};