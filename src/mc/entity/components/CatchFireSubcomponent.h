#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CatchFireSubcomponent {

public:
    // prevent constructor by default
    CatchFireSubcomponent& operator=(CatchFireSubcomponent const&) = delete;
    CatchFireSubcomponent(CatchFireSubcomponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@CatchFireSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value&, class SemVersion const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@CatchFireSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@CatchFireSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@CatchFireSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName(); // NOLINT
    /**
     * @symbol ??0CatchFireSubcomponent\@\@QEAA\@XZ
     */
    MCAPI CatchFireSubcomponent(); // NOLINT
};
