#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/TemptBaseGoal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class ItemDescriptor;
class Mob;
struct FloatRange;
// clang-format on

class TemptGoal : public ::TemptBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPathfinderWaitTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void updateMovement() /*override*/;

    virtual void stopMovement() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemptGoal(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        float                                  stopDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden,
        ::ActorDefinitionTrigger const&        onStartEvent,
        ::ActorDefinitionTrigger const&        onEndEvent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        float                                  stopDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden,
        ::ActorDefinitionTrigger const&        onStartEvent,
        ::ActorDefinitionTrigger const&        onEndEvent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

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
