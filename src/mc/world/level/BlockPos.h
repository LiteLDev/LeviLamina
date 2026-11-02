#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AABB;
class BoundingBox;
class Vec3;

class BlockPos : public ll::math::intN3<BlockPos> {
public:
    using intN3::intN3;

    LLNDAPI operator AABB() const;
    LLNDAPI operator BoundingBox() const;

    LLNDAPI Vec3 bottomCenter() const;
    LLNDAPI Vec3 center() const;

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
