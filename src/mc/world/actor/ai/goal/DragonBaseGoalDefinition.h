#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class DragonBaseGoalDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka1058d;
    ::ll::UntypedStorage<4, 4> mUnk636804;
    ::ll::UntypedStorage<4, 4> mUnk76fb64;
    ::ll::UntypedStorage<4, 8> mUnk158941;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonBaseGoalDefinition& operator=(DragonBaseGoalDefinition const&);
    DragonBaseGoalDefinition(DragonBaseGoalDefinition const&);
    DragonBaseGoalDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonBaseGoalDefinition() /*override*/ = default;

    // vIndex: 1
    virtual bool validateMobType(::Mob& mob) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $validateMobType(::Mob& mob) const;
    // NOLINTEND
};
