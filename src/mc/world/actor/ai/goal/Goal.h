#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class Goal {
public:
    // prevent constructor by default
    Goal& operator=(Goal const&);
    Goal(Goal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Goal();

    // vIndex: 1
    virtual bool canUse() = 0;

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const = 0;

    // vIndex: 8
    virtual bool isTargetGoal() const;

    // vIndex: 9
    virtual void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI Goal();

    MCAPI int getRequiredControlFlags() const;

    MCAPI ushort getTypeId() const;

    MCAPI void setRequiredControlFlags(int requiredControlFlags);

    MCAPI void setTypeId(ushort typeId);

    // NOLINTEND
};
