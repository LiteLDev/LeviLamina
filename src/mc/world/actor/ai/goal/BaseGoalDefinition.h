#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8d09b6;
    ::ll::UntypedStorage<4, 4> mUnk28fb77;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&);
    BaseGoalDefinition(BaseGoalDefinition const&);
    BaseGoalDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGoalDefinition();

    virtual bool validateMobType(::Mob&) const;

    virtual bool validate(::Mob&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, int> const& mControlFlagMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $validateMobType(::Mob&) const;

    MCNAPI bool $validate(::Mob&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
