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

class FloatTemptGoal : public ::TemptBaseGoal {
public:
    // prevent constructor by default
    FloatTemptGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void updateMovement() /*override*/;

    virtual void stopMovement() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FloatTemptGoal(
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
