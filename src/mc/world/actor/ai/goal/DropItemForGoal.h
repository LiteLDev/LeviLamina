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

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk206d41;
    ::ll::UntypedStorage<4, 4>   mUnk90292f;
    ::ll::UntypedStorage<4, 4>   mUnk17b07a;
    ::ll::UntypedStorage<4, 4>   mUnkb02835;
    ::ll::UntypedStorage<4, 4>   mUnk475467;
    ::ll::UntypedStorage<4, 4>   mUnk73fa4b;
    ::ll::UntypedStorage<4, 4>   mUnk1e8793;
    ::ll::UntypedStorage<4, 4>   mUnkc3bf60;
    ::ll::UntypedStorage<8, 32>  mUnk5a0282;
    ::ll::UntypedStorage<8, 8>   mUnk6ead1e;
    ::ll::UntypedStorage<8, 104> mUnkb48724;
    ::ll::UntypedStorage<4, 8>   mUnk4235fc;
    ::ll::UntypedStorage<4, 12>  mUnkfe2d12;
    ::ll::UntypedStorage<4, 12>  mUnka4aef2;
    ::ll::UntypedStorage<8, 24>  mUnkd3b312;
    // NOLINTEND

public:
    // prevent constructor by default
    DropItemForGoal& operator=(DropItemForGoal const&);
    DropItemForGoal(DropItemForGoal const&);
    DropItemForGoal();

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

    // vIndex: 17
    virtual bool findTargetBlock() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~DropItemForGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DropItemForGoal(::Mob& mob);
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

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $findTargetBlock();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
