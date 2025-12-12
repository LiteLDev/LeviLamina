#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ContainerComponent;
class Mob;
class ShareableComponent;
// clang-format on

class AdmireItemGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mNextSoundEventTick;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const>       mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const>       mOnStopEvent;
    ::ll::TypedStorage<8, 152, ::ItemStack>                          mItemStackPicked;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mItemOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemGoal& operator=(AdmireItemGoal const&);
    AdmireItemGoal(AdmireItemGoal const&);
    AdmireItemGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~AdmireItemGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AdmireItemGoal(
        ::Mob&                                 mob,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        ::ActorDefinitionTrigger const&        onAdmireItemStart,
        ::ActorDefinitionTrigger const&        onAdmireItemStop
    );

    MCNAPI void _removeItemFromOffhandSlot() const;

    MCNAPI void
    _tryPlaceItemInInventory(::ContainerComponent& containerComponent, ::ShareableComponent const& shareableComponent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Mob&                                 mob,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        ::ActorDefinitionTrigger const&        onAdmireItemStart,
        ::ActorDefinitionTrigger const&        onAdmireItemStop
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
