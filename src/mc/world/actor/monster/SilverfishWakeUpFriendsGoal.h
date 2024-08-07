#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SilverfishWakeUpFriendsGoal : public ::Goal {
public:
    // prevent constructor by default
    SilverfishWakeUpFriendsGoal& operator=(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SilverfishWakeUpFriendsGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit SilverfishWakeUpFriendsGoal(class Silverfish& silverfish);

    // NOLINTEND
};
