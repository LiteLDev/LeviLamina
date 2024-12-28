#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Goal;
class Mob;
// clang-format on

class BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8d09b6;
    ::ll::UntypedStorage<4, 4>  mUnk28fb77;
    ::ll::UntypedStorage<8, 32> mUnk9beb99;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&);
    BaseGoalDefinition(BaseGoalDefinition const&);
    BaseGoalDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGoalDefinition();

    // vIndex: 1
    virtual bool validateMobType(::Mob&) const;

    // vIndex: 2
    virtual bool validate(::Mob&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::Goal& goal) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, int>& mControlFlagMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $validateMobType(::Mob&) const;

    MCAPI bool $validate(::Mob&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
