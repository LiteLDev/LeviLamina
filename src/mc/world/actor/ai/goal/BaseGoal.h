#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDebugName;
    ::ll::TypedStorage<4, 4, int>            mRequiredControlFlags;
    ::ll::TypedStorage<2, 2, ushort>         mTypeId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGoal();

    virtual bool canUse() = 0;

    virtual bool canContinueToUse();

    virtual bool canBeInterrupted();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(::std::string& str) const = 0;

    virtual bool isTargetGoal() const;

    virtual void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGoal();

    MCFOLD int getRequiredControlFlags() const;

    MCAPI ushort getTypeId() const;

    MCFOLD void setRequiredControlFlags(int requiredControlFlags);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canContinueToUse();

    MCFOLD bool $canBeInterrupted();

    MCFOLD void $start();

    MCFOLD void $stop();

    MCFOLD void $tick();

    MCFOLD bool $isTargetGoal() const;

    MCFOLD void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
