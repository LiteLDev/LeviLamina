#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RemoveOnHitSubcomponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEONHITSUBCOMPONENT
public:
    RemoveOnHitSubcomponent& operator=(RemoveOnHitSubcomponent const&) = delete;
    RemoveOnHitSubcomponent(RemoveOnHitSubcomponent const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@RemoveOnHitSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@RemoveOnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEONHITSUBCOMPONENT
    /**
     * @symbol ?readfromJSON\@RemoveOnHitSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @symbol ?writetoJSON\@RemoveOnHitSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value&) const;
#endif
    /**
     * @symbol ??0RemoveOnHitSubcomponent\@\@QEAA\@XZ
     */
    MCAPI RemoveOnHitSubcomponent();
};
