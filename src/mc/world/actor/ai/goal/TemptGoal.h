#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
struct FloatRange;
// clang-format on

class TemptGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc6f6e5;
    ::ll::UntypedStorage<4, 4>  mUnkf90f7d;
    ::ll::UntypedStorage<8, 40> mUnkce837c;
    ::ll::UntypedStorage<4, 12> mUnke41f50;
    ::ll::UntypedStorage<4, 8>  mUnkc9fefe;
    ::ll::UntypedStorage<1, 1>  mUnk7661c9;
    ::ll::UntypedStorage<4, 4>  mUnk698d48;
    ::ll::UntypedStorage<1, 1>  mUnk63c6cc;
    ::ll::UntypedStorage<1, 1>  mUnkfe85e3;
    ::ll::UntypedStorage<1, 1>  mUnk6f7e63;
    ::ll::UntypedStorage<4, 4>  mUnk5d83c0;
    ::ll::UntypedStorage<4, 4>  mUnk4d53a3;
    ::ll::UntypedStorage<8, 24> mUnk363779;
    ::ll::UntypedStorage<1, 1>  mUnk37205c;
    ::ll::UntypedStorage<4, 4>  mUnka2813f;
    ::ll::UntypedStorage<4, 8>  mUnkf75246;
    ::ll::UntypedStorage<8, 8>  mUnke7a03e;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptGoal& operator=(TemptGoal const&);
    TemptGoal(TemptGoal const&);
    TemptGoal();

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
    virtual ~TemptGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemptGoal(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speed,
        ::std::vector<::ItemDescriptor> const& itemList,
        ::SharedTypes::Legacy::LevelSoundEvent sound,
        ::FloatRange                           soundIntervalRange,
        bool                                   canGetScared,
        float                                  temptDistance,
        bool                                   canTemptVertically,
        bool                                   canTemptWhileRidden
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
