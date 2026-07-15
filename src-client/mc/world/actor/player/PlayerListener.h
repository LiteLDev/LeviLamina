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

    virtual void onWillChangeDimension(::Player&);

    virtual void onDimensionChanged(::Player&);

    virtual void onPlayerDestruction(::Player&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
