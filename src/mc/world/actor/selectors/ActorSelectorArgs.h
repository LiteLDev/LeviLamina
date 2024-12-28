#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkadcd83;
    ::ll::UntypedStorage<8, 40> mUnkc61bda;
    ::ll::UntypedStorage<8, 24> mUnk7a55bf;
    ::ll::UntypedStorage<8, 24> mUnk90219e;
    ::ll::UntypedStorage<8, 24> mUnkd51d33;
    ::ll::UntypedStorage<8, 24> mUnkd51eca;
    ::ll::UntypedStorage<8, 24> mUnk87e3db;
    ::ll::UntypedStorage<4, 8>  mUnk3d0fb4;
    ::ll::UntypedStorage<4, 8>  mUnk46f764;
    ::ll::UntypedStorage<4, 8>  mUnkd7828b;
    ::ll::UntypedStorage<4, 20> mUnkf23d86;
    ::ll::UntypedStorage<4, 16> mUnk1ec315;
    ::ll::UntypedStorage<4, 12> mUnk6c7b4e;
    ::ll::UntypedStorage<4, 12> mUnka9fd47;
    ::ll::UntypedStorage<4, 12> mUnk8b12bd;
    ::ll::UntypedStorage<1, 2>  mUnkd7f31e;
    ::ll::UntypedStorage<8, 24> mUnk57203b;
    ::ll::UntypedStorage<8, 24> mUnk7a0f8b;
    ::ll::UntypedStorage<8, 24> mUnk5f2535;
    ::ll::UntypedStorage<8, 24> mUnkfb381e;
    ::ll::UntypedStorage<8, 24> mUnk75f067;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSelectorArgs();

    MCAPI ActorSelectorArgs(::ActorSelectorArgs const&);

    MCAPI ActorSelectorArgs(::ActorSelectorArgs&&);

    MCAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs const&);

    MCAPI ::ActorSelectorArgs& operator=(::ActorSelectorArgs&&);

    MCAPI ~ActorSelectorArgs();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::pair<int, int> const& DEFAULT_LEVEL();

    MCAPI static ::std::pair<float, float> const& DEFAULT_X_ROTATION();

    MCAPI static ::std::pair<float, float> const& DEFAULT_Y_ROTATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorSelectorArgs const&);

    MCAPI void* $ctor(::ActorSelectorArgs&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
