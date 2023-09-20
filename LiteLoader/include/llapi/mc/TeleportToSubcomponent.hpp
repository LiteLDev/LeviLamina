/**
 * @file  TeleportToSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "OnHitSubcomponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportToSubcomponent.
 *
 */
class TeleportToSubcomponent : public OnHitSubcomponent {

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@TeleportToSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@TeleportToSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@TeleportToSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl 4
     * @symbol ?getName\@TeleportToSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @symbol ??0TeleportToSubcomponent\@\@QEAA\@XZ
     */
    MCAPI TeleportToSubcomponent();

};
