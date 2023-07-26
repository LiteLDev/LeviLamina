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
     * @symbol ?tick\@FreezingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?FREEZE_EFFECT_UUID\@FreezingSystem\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID; // NOLINT
    /**
     * @symbol ?VULNERABLE_MOB_FREEZE_DAMAGE\@FreezingSystem\@\@2HB
     */
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE; // NOLINT
};
