#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class SneezeGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk46da1a;
    ::ll::UntypedStorage<4, 4>  mUnk17a0ae;
    ::ll::UntypedStorage<4, 4>  mUnk82cb5a;
    ::ll::UntypedStorage<4, 4>  mUnkb3cee6;
    ::ll::UntypedStorage<4, 4>  mUnkae4bec;
    ::ll::UntypedStorage<8, 32> mUnkbf8fec;
    ::ll::UntypedStorage<4, 4>  mUnk74a5f7;
    ::ll::UntypedStorage<4, 4>  mUnk9cd78e;
    ::ll::UntypedStorage<4, 4>  mUnkb54f93;
    ::ll::UntypedStorage<8, 24> mUnkdfcc8f;
    ::ll::UntypedStorage<4, 4>  mUnk8d5cc7;
    ::ll::UntypedStorage<8, 8>  mUnk38aebf;
    // NOLINTEND

public:
    // prevent constructor by default
    SneezeGoal& operator=(SneezeGoal const&);
    SneezeGoal(SneezeGoal const&);
    SneezeGoal();

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
    virtual ~SneezeGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SneezeGoal(
        ::Mob&                                mob,
        float                                 cooldownTime,
        float                                 probability,
        float                                 dropItemChance,
        ::std::string const&                  lootTable,
        ::std::string const&                  sneezeSound,
        ::std::string const&                  preSneezeSound,
        float                                 prepareTime,
        ::std::vector<::MobDescriptor> const& reactMobFilters,
        float                                 reactWithin
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                mob,
        float                                 cooldownTime,
        float                                 probability,
        float                                 dropItemChance,
        ::std::string const&                  lootTable,
        ::std::string const&                  sneezeSound,
        ::std::string const&                  preSneezeSound,
        float                                 prepareTime,
        ::std::vector<::MobDescriptor> const& reactMobFilters,
        float                                 reactWithin
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
