// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BreakDoorAnnotationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONCOMPONENT
public:
    class BreakDoorAnnotationComponent& operator=(class BreakDoorAnnotationComponent const &) = delete;
    BreakDoorAnnotationComponent(class BreakDoorAnnotationComponent const &) = delete;
#endif

public:
    MCAPI BreakDoorAnnotationComponent();
    MCAPI bool canMobBreakDoor(class Mob &, class Path const &) const;
    MCAPI void clearProgress(class Mob &);
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void obstructionCheck(class Mob &);
    MCAPI void onComponentRemoved(class EntityContext &);

protected:

private:
    MCAPI void _cleanUp(class Mob &);
    MCAPI bool _shouldBreakDoor(class Mob &);

};