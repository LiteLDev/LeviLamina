#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class FlyingPathNavigation : public ::PathNavigation {

public:
    // prevent constructor by default
    FlyingPathNavigation& operator=(FlyingPathNavigation const&) = delete;
    FlyingPathNavigation(FlyingPathNavigation const&)            = delete;
    FlyingPathNavigation()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@FlyingPathNavigation\@\@UEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct NavigationDescription*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class NavigationComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getTempMobPos\@FlyingPathNavigation\@\@MEBA?AVVec3\@\@AEBVMob\@\@\@Z
     */
    virtual class Vec3 getTempMobPos(class Mob const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?createPath\@FlyingPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?createPath\@FlyingPathNavigation\@\@MEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVNavigationComponent\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?stop\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void stop(class NavigationComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?canUpdatePath\@FlyingPathNavigation\@\@MEBA_NAEBVMob\@\@\@Z
     */
    virtual bool canUpdatePath(class Mob const&) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?updatePath\@FlyingPathNavigation\@\@MEAAXAEAVNavigationComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void updatePath(class NavigationComponent&, class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_restorePreviousGravityFlag\@FlyingPathNavigation\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _restorePreviousGravityFlag(class Mob&); // NOLINT
    /**
     * @symbol ?_storePreviousGravityFlag\@FlyingPathNavigation\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _storePreviousGravityFlag(class Mob&); // NOLINT

private:
};
