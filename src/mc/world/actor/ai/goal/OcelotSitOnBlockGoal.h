#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class OcelotSitOnBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    OcelotSitOnBlockGoal& operator=(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OcelotSitOnBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 13
    virtual bool _canReach(class BlockPos const& pos);

    MCAPI OcelotSitOnBlockGoal(class Mob& mob, float speedMod);

    // NOLINTEND
};
