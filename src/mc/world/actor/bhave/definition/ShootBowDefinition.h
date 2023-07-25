#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ShootBowDefinition : public ::BehaviorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTBOWDEFINITION
public:
    ShootBowDefinition& operator=(ShootBowDefinition const&) = delete;
    ShootBowDefinition(ShootBowDefinition const&)            = delete;
    ShootBowDefinition()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@ShootBowDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
};
