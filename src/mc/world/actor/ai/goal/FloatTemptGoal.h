#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TemptBaseGoal.h"

class FloatTemptGoal : public ::TemptBaseGoal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void updateMovement() /*override*/;

    virtual void stopMovement() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~FloatTemptGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $updateMovement();

    MCFOLD void $stopMovement();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
