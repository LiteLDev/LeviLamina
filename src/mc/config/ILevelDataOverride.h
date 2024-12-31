#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class ILevelDataOverride {
public:
    // prevent constructor by default
    ILevelDataOverride& operator=(ILevelDataOverride const&);
    ILevelDataOverride(ILevelDataOverride const&);
    ILevelDataOverride();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelDataOverride() = default;

    // vIndex: 1
    virtual void applyTo(::LevelData&) const = 0;
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
