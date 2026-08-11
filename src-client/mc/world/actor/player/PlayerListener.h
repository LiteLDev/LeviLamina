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
    virtual ~PlayerListener() = default;

    virtual void onWillChangeDimension(::Player& player);

    virtual void onDimensionChanged(::Player& player);

    virtual void onPlayerDestruction(::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onWillChangeDimension(::Player& player);

    MCFOLD void $onDimensionChanged(::Player& player);

    MCFOLD void $onPlayerDestruction(::Player& player);
    // NOLINTEND
};
