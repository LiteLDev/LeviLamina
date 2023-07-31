#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IgniteSubcomponent {

public:
    // prevent constructor by default
    IgniteSubcomponent& operator=(IgniteSubcomponent const&) = delete;
    IgniteSubcomponent(IgniteSubcomponent const&)            = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?doOnHitEffect\@IgniteSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@IgniteSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IGNITESUBCOMPONENT
    /**
     * @symbol ?readfromJSON\@IgniteSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @symbol ?writetoJSON\@IgniteSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value&) const;
#endif
    /**
     * @symbol ??0IgniteSubcomponent\@\@QEAA\@XZ
     */
    MCAPI IgniteSubcomponent();
    // NOLINTEND
};
