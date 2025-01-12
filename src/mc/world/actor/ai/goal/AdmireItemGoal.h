#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
struct FloatRange;
// clang-format on

class AdmireItemGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk97d613;
    ::ll::UntypedStorage<4, 4>   mUnkb01f35;
    ::ll::UntypedStorage<4, 8>   mUnk3020dc;
    ::ll::UntypedStorage<8, 8>   mUnka737e0;
    ::ll::UntypedStorage<8, 104> mUnkd35f53;
    ::ll::UntypedStorage<8, 104> mUnk4be622;
    ::ll::UntypedStorage<8, 152> mUnkdbeb66;
    ::ll::UntypedStorage<8, 24>  mUnkf3d774;
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
    MCAPI AdmireItemGoal(
        ::Mob&                                 mob,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        ::ActorDefinitionTrigger const&        onAdmireItemStart,
        ::ActorDefinitionTrigger const&        onAdmireItemStop
    );

    MCAPI void _removeItemFromOffhandSlot() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
