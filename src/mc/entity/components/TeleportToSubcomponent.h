#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TeleportToSubcomponent {

public:
    // prevent constructor by default
    TeleportToSubcomponent& operator=(TeleportToSubcomponent const&) = delete;
    TeleportToSubcomponent(TeleportToSubcomponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@TeleportToSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@TeleportToSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTTOSUBCOMPONENT
    /**
     * @symbol ?readfromJSON\@TeleportToSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?writetoJSON\@TeleportToSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value&) const; // NOLINT
#endif
    /**
     * @symbol ??0TeleportToSubcomponent\@\@QEAA\@XZ
     */
    MCAPI TeleportToSubcomponent(); // NOLINT
};
