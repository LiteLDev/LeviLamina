#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerListener {
public:
    // prevent constructor by default
    PlayerListener& operator=(PlayerListener const&);
    PlayerListener(PlayerListener const&);
    PlayerListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerListener() = default;

    // vIndex: 1
    virtual void onWillChangeDimension(::Player&);

    // vIndex: 2
    virtual void onDimensionChanged(::Player&);

    // vIndex: 3
    virtual void onPlayerDestruction(::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
