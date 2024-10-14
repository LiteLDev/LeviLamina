#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

class WorkGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    WorkGoal& operator=(WorkGoal const&);
    WorkGoal(WorkGoal const&);
    WorkGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 18
    virtual void useWorkstation();

    MCAPI explicit WorkGoal(class Mob& mob);

    MCAPI void playPOISoundEvent() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isInsideOrIsNotRaining();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    MCAPI void useWorkstation$();

    MCAPI static int const& RAIN_CHECK_MAX_COOLDOWN();

    MCAPI static int const& WORK_TIMESTAMP_UPDATE_INVERVAL();

    // NOLINTEND
};
