#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // HarvestFarmBlockGoal inner types define
    enum class Task : int {
        None = -1,
        Reap = 0,
        Sow  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk962876;
    ::ll::UntypedStorage<4, 4> mUnk5fc437;
    ::ll::UntypedStorage<4, 4> mUnk36bc3c;
    ::ll::UntypedStorage<4, 4> mUnk6f9c36;
    ::ll::UntypedStorage<4, 4> mUnkf9f958;
    // NOLINTEND

public:
    // prevent constructor by default
    HarvestFarmBlockGoal& operator=(HarvestFarmBlockGoal const&);
    HarvestFarmBlockGoal(HarvestFarmBlockGoal const&);
    HarvestFarmBlockGoal();

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

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 0
    virtual ~HarvestFarmBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HarvestFarmBlockGoal(::Mob& mob);

    MCAPI bool trySowCrop(::BlockSource& region, ::BlockPos const& farmlandPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
