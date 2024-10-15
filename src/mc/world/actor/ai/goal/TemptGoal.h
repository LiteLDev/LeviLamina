#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TemptGoal : public ::Goal {
public:
    // prevent constructor by default
    TemptGoal& operator=(TemptGoal const&);
    TemptGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TemptGoal() = default;

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

    MCAPI TemptGoal(class TemptGoal const&);

    MCAPI TemptGoal(
        class Mob&                               mob,
        float                                    speed,
        std::vector<class ItemDescriptor> const& itemList,
        ::Puv::Legacy::LevelSoundEvent           sound,
        struct FloatRange                        soundIntervalRange,
        bool                                     canGetScared,
        float                                    temptDistance,
        bool                                     canTemptVertically,
        bool                                     canTemptWhileRidden
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class TemptGoal const&);

    MCAPI void* ctor$(
        class Mob&                               mob,
        float                                    speed,
        std::vector<class ItemDescriptor> const& itemList,
        ::Puv::Legacy::LevelSoundEvent           sound,
        struct FloatRange                        soundIntervalRange,
        bool                                     canGetScared,
        float                                    temptDistance,
        bool                                     canTemptVertically,
        bool                                     canTemptWhileRidden
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
