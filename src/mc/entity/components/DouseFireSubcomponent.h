#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DouseFireSubcomponent : public ::OnHitSubcomponent {

public:
    // prevent constructor by default
    DouseFireSubcomponent& operator=(DouseFireSubcomponent const&) = delete;
    DouseFireSubcomponent(DouseFireSubcomponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@DouseFireSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@DouseFireSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value&) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@DouseFireSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@DouseFireSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
    /**
     * @symbol ??0DouseFireSubcomponent\@\@QEAA\@XZ
     */
    MCAPI DouseFireSubcomponent();
    /**
     * @symbol ?douseFire\@DouseFireSubcomponent\@\@QEAAXAEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void douseFire(class Actor&, class BlockSource&, class BlockPos const&);
    // NOLINTEND
};
