#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCNAPI ::BlockPos east() const;

    MCNAPI ::BlockPos north() const;

    MCNAPI ::BlockPos south() const;

    MCAPI ::std::string toString() const;

    MCNAPI ::BlockPos west() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& MAX();

    MCAPI static ::BlockPos const& MIN();

    MCAPI static ::BlockPos const& ZERO();
    // NOLINTEND
};
