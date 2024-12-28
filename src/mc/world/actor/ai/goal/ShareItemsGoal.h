#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
struct MobDescriptor;
// clang-format on

class ShareItemsGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkf433fb;
    ::ll::UntypedStorage<4, 4>   mUnk79c3a4;
    ::ll::UntypedStorage<4, 4>   mUnk89faf6;
    ::ll::UntypedStorage<4, 4>   mUnke13b85;
    ::ll::UntypedStorage<4, 4>   mUnk4b79a6;
    ::ll::UntypedStorage<4, 4>   mUnke393c6;
    ::ll::UntypedStorage<8, 24>  mUnkb199d6;
    ::ll::UntypedStorage<8, 152> mUnk39e6dd;
    ::ll::UntypedStorage<8, 8>   mUnkc57055;
    // NOLINTEND

public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const&);
    ShareItemsGoal(ShareItemsGoal const&);
    ShareItemsGoal();

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
    virtual ~ShareItemsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShareItemsGoal(
        ::Mob&                                mob,
        ::std::vector<::MobDescriptor> const& mobFilters,
        float                                 speedModifier,
        int                                   searchRange,
        float                                 goalRadius
    );

    MCAPI ::std::pair<int, ::ItemStack>
    selectEntityToShareWith(::std::vector<::std::pair<int, ::ItemStack>> const& shareableItems);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                mob,
        ::std::vector<::MobDescriptor> const& mobFilters,
        float                                 speedModifier,
        int                                   searchRange,
        float                                 goalRadius
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

    MCAPI bool $canContinueToUse();

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
