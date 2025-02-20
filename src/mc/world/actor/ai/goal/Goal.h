#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
// clang-format on

class Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mRequiredControlFlags;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<2, 2, ushort>         mTypeId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Goal();

    // vIndex: 1
    virtual bool canUse() = 0;

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(::std::string&) const = 0;

    // vIndex: 8
    virtual bool isTargetGoal() const;

    // vIndex: 9
    virtual void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
