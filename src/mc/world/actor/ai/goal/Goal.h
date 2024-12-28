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
    ::ll::UntypedStorage<4, 4>  mUnk89f0ee;
    ::ll::UntypedStorage<8, 32> mUnk15ba10;
    ::ll::UntypedStorage<2, 2>  mUnkab6857;
    // NOLINTEND

public:
    // prevent constructor by default
    Goal& operator=(Goal const&);
    Goal(Goal const&);

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
    // member functions
    // NOLINTBEGIN
    MCAPI Goal();

    MCAPI int getRequiredControlFlags() const;

    MCAPI ushort getTypeId() const;

    MCAPI void setRequiredControlFlags(int requiredControlFlags);

    MCAPI void setTypeId(ushort typeId);
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
    MCAPI bool $canContinueToUse();

    MCAPI bool $canBeInterrupted();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $isTargetGoal() const;

    MCAPI void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
