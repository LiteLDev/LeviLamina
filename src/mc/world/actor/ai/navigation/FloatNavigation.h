#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class FloatNavigation : public ::PathNavigation {

public:
    // prevent constructor by default
    FloatNavigation& operator=(FloatNavigation const&) = delete;
    FloatNavigation(FloatNavigation const&)            = delete;
    FloatNavigation()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?travel\@FloatNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAM22\@Z
     */
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&); // NOLINT
};
