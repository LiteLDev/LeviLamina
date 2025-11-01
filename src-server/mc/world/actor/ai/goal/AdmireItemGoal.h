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
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 8, ::FloatRange> mSoundIntervalRange;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const> mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const> mOnStopEvent;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItemStackPicked;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mItemOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemGoal& operator=(AdmireItemGoal const&);
    AdmireItemGoal(AdmireItemGoal const&);
    AdmireItemGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~AdmireItemGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdmireItemGoal(::Mob& mob, ::SharedTypes::Legacy::LevelSoundEvent sound, ::FloatRange soundIntervalRange, ::ActorDefinitionTrigger const& onAdmireItemStart, ::ActorDefinitionTrigger const& onAdmireItemStop);

    MCAPI void _removeItemFromOffhandSlot() const;

    MCAPI void _tryPlaceItemInInventory(::ContainerComponent& containerComponent, ::ShareableComponent const& shareableComponent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, ::SharedTypes::Legacy::LevelSoundEvent sound, ::FloatRange soundIntervalRange, ::ActorDefinitionTrigger const& onAdmireItemStart, ::ActorDefinitionTrigger const& onAdmireItemStop);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCFOLD bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
