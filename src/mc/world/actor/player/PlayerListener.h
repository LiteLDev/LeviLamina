#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerListener {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~PlayerListener() = default;
#else // LL_PLAT_C
    virtual ~PlayerListener();
#endif

    virtual void onWillChangeDimension(::Player& player);

    virtual void onDimensionChanged(::Player& player);

    virtual void onPlayerDestruction(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $onWillChangeDimension(::Player& player);

    MCFOLD void $onDimensionChanged(::Player& player);

    MCFOLD void $onPlayerDestruction(::Player& player);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
