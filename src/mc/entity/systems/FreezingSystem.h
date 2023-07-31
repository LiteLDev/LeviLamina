#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class FreezingSystem {

public:
    // prevent constructor by default
    FreezingSystem& operator=(FreezingSystem const&) = delete;
    FreezingSystem(FreezingSystem const&)            = delete;
    FreezingSystem()                                 = delete;

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
     * @symbol ?tick\@FreezingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?FREEZE_EFFECT_UUID\@FreezingSystem\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;
    /**
     * @symbol ?VULNERABLE_MOB_FREEZE_DAMAGE\@FreezingSystem\@\@2HB
     */
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;
    // NOLINTEND
};
