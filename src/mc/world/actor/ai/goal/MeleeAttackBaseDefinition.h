#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MeleeAttackBaseGoal;
// clang-format on

class MeleeAttackBaseDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk6baf1b;
    ::ll::UntypedStorage<1, 1>   mUnkdbad7f;
    ::ll::UntypedStorage<1, 1>   mUnk6f2799;
    ::ll::UntypedStorage<4, 4>   mUnk17f167;
    ::ll::UntypedStorage<4, 4>   mUnk271e48;
    ::ll::UntypedStorage<4, 4>   mUnk62be3e;
    ::ll::UntypedStorage<4, 4>   mUnk1e1fde;
    ::ll::UntypedStorage<4, 4>   mUnkeda855;
    ::ll::UntypedStorage<4, 4>   mUnke1c976;
    ::ll::UntypedStorage<4, 4>   mUnk653c86;
    ::ll::UntypedStorage<4, 4>   mUnk9def6b;
    ::ll::UntypedStorage<4, 4>   mUnk6cf891;
    ::ll::UntypedStorage<4, 4>   mUnkff0422;
    ::ll::UntypedStorage<4, 4>   mUnk6114ae;
    ::ll::UntypedStorage<4, 4>   mUnk50e62b;
    ::ll::UntypedStorage<4, 4>   mUnkc4e4e1;
    ::ll::UntypedStorage<8, 32>  mUnke3873f;
    ::ll::UntypedStorage<8, 104> mUnk32e542;
    ::ll::UntypedStorage<8, 104> mUnkfcecd8;
    ::ll::UntypedStorage<1, 1>   mUnk47983c;
    ::ll::UntypedStorage<1, 1>   mUnk320a90;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackBaseDefinition& operator=(MeleeAttackBaseDefinition const&);
    MeleeAttackBaseDefinition(MeleeAttackBaseDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackBaseDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeleeAttackBaseDefinition();

    MCAPI void initialize(::EntityContext& entity, ::MeleeAttackBaseGoal& goal) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
