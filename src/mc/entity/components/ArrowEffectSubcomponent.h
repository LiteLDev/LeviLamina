#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MobEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ArrowEffectSubcomponent : public ::MobEffectSubcomponent {

public:
    // prevent constructor by default
    ArrowEffectSubcomponent& operator=(ArrowEffectSubcomponent const&) = delete;
    ArrowEffectSubcomponent(ArrowEffectSubcomponent const&)            = delete;
    ArrowEffectSubcomponent()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@ArrowEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@ArrowEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@ArrowEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName(); // NOLINT
};
