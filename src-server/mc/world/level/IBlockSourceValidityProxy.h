#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
// clang-format on

class IBlockSourceValidityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBlockSourceValidityProxy() = default;

    // vIndex: 1
    virtual void updateDimensionBlockSourceTick(::Dimension&) = 0;

    // vIndex: 2
    virtual void updateBlockSourceTick(::Player&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
