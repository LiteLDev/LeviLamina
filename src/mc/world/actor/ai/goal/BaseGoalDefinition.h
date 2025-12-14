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
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::TypedStorage<4, 4, int> mControlFlags;
    // NOLINTEND

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
    MCAPI static ::std::unordered_map<::std::string, int> const& mControlFlagMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $validateMobType(::Mob&) const;

    MCFOLD bool $validate(::Mob&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
