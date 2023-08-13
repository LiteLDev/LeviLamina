#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MobEffectSubcomponent : public ::OnHitSubcomponent {

public:
    // prevent constructor by default
    MobEffectSubcomponent& operator=(MobEffectSubcomponent const&) = delete;
    MobEffectSubcomponent(MobEffectSubcomponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@MobEffectSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@MobEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@MobEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@MobEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTSUBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectSubcomponent();
#endif
    /**
     * @symbol ??0MobEffectSubcomponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectSubcomponent();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_addEffectFromJSON\@MobEffectSubcomponent\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _addEffectFromJSON(class Json::Value&);
    // NOLINTEND
};
