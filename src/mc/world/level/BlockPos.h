#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPos east() const;

    MCAPI ::BlockPos north() const;

    MCAPI ::BlockPos south() const;

    MCAPI ::std::string toString() const;

    MCAPI ::BlockPos west() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& MAX();

    MCAPI static ::BlockPos const& MIN();

    MCAPI static ::BlockPos const& ZERO();
    // NOLINTEND
};
