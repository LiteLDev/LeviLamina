#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class StickInGroundSubcomponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STICKINGROUNDSUBCOMPONENT
public:
    StickInGroundSubcomponent& operator=(StickInGroundSubcomponent const&) = delete;
    StickInGroundSubcomponent(StickInGroundSubcomponent const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@StickInGroundSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@StickInGroundSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@StickInGroundSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@StickInGroundSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
    /**
     * @symbol ??0StickInGroundSubcomponent\@\@QEAA\@XZ
     */
    MCAPI StickInGroundSubcomponent();
};
