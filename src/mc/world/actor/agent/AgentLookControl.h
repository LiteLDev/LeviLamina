#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/LookControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class AgentLookControl : public ::LookControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeInternal(::Mob& mob) /*override*/;

    virtual void tick(::Mob& mob) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
