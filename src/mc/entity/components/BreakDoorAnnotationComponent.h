#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class BreakDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8b315f;
    ::ll::UntypedStorage<4, 4>  mUnk39c5af;
    ::ll::UntypedStorage<8, 8>  mUnk42e51a;
    ::ll::UntypedStorage<4, 4>  mUnke7e61a;
    ::ll::UntypedStorage<4, 16> mUnkff469b;
    ::ll::UntypedStorage<8, 8>  mUnk76972b;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakDoorAnnotationComponent& operator=(BreakDoorAnnotationComponent const&);
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent const&);
    BreakDoorAnnotationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _cleanUp(::Mob& mob);

    MCAPI bool canMobBreakDoor(::Mob& mob, ::Path const& path) const;

    MCAPI void clearProgress(::Mob& mob);

    MCAPI void obstructionCheck(::Mob& mob);
    // NOLINTEND
};
