#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WallClimberPathNavigation : public ::PathNavigation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLCLIMBERPATHNAVIGATION
public:
    WallClimberPathNavigation& operator=(WallClimberPathNavigation const&) = delete;
    WallClimberPathNavigation(WallClimberPathNavigation const&)            = delete;
    WallClimberPathNavigation()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@WallClimberPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent&, class Mob&);
    /**
     * @vftbl 4
     * @symbol
     * ?createPath\@WallClimberPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    /**
     * @vftbl 5
     * @symbol
     * ?createPath\@WallClimberPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    /**
     * @vftbl 7
     * @symbol ?moveTo\@WallClimberPathNavigation\@\@MEAA_NAEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@M\@Z
     */
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Actor&, float);
    /**
     * @vftbl 11
     * @symbol ?canUpdatePath\@WallClimberPathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const&) const;
};
